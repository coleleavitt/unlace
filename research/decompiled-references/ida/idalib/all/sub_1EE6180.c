__int64 __fastcall sub_1EE6180(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // r13
  __int64 v9; // r12
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _QWORD *v18; // rdx
  bool v19; // zf
  __int64 *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r8d
  size_t v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned int v36; // ebx
  unsigned int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned int v41; // eax
  char v42; // dl
  __int64 v43; // rsi
  void *v44; // rcx
  void *v45; // rax
  size_t v46; // rax
  __int64 v47; // [rsp+18h] [rbp-380h]
  __int32 src; // [rsp+28h] [rbp-370h]
  void *srca; // [rsp+28h] [rbp-370h]
  void *srcb; // [rsp+28h] [rbp-370h]
  void *srcc; // [rsp+28h] [rbp-370h]
  unsigned int v52; // [rsp+34h] [rbp-364h]
  size_t n; // [rsp+38h] [rbp-360h]
  __int64 na; // [rsp+38h] [rbp-360h]
  __int64 v55; // [rsp+40h] [rbp-358h]
  int v56; // [rsp+40h] [rbp-358h]
  int v57; // [rsp+48h] [rbp-350h]
  __int64 v58; // [rsp+50h] [rbp-348h]
  __int64 v59; // [rsp+58h] [rbp-340h]
  __int64 v60; // [rsp+68h] [rbp-330h]
  _QWORD *v61; // [rsp+78h] [rbp-320h] BYREF
  _QWORD v62[2]; // [rsp+80h] [rbp-318h] BYREF
  __int64 v63; // [rsp+90h] [rbp-308h] BYREF
  char v64; // [rsp+98h] [rbp-300h]
  __m128i v65; // [rsp+A0h] [rbp-2F8h] BYREF
  int v66; // [rsp+B0h] [rbp-2E8h]
  void *ptr; // [rsp+C0h] [rbp-2D8h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-2D0h]
  _BYTE v69[128]; // [rsp+D0h] [rbp-2C8h] BYREF
  void *v70; // [rsp+150h] [rbp-248h] BYREF
  __int64 v71; // [rsp+158h] [rbp-240h]
  _BYTE v72[568]; // [rsp+160h] [rbp-238h] BYREF

  v5 = a2 + 1736;
  v6 = *(_QWORD *)(a2 + 1752);
  v7 = *(unsigned int *)(a2 + 1768);
  v62[0] = a2 + 1736;
  v62[1] = 8 * v6 - v7;
  sub_1EAF7C0((__int64 *)&ptr, a2 + 1736, a3);
  v8 = ptr;
  if ( ptr )
  {
    v70 = ptr;
    ptr = nullptr;
    sub_A0E8E0((_QWORD **)&v70);
    if ( v70 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v70 + 8LL))(v70);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v47 = 0;
    v70 = v72;
    v71 = 0x4000000000LL;
    ptr = v69;
    v68 = 0x1000000000LL;
    while ( 2 )
    {
      sub_1EB0460((__int64)&v63, v5, 1);
      if ( (v64 & 1) != 0 )
      {
        v30 = v63;
        v63 = 0;
        v65.m128i_i64[0] = v30;
        sub_1EBF0A0(a1, &v65);
        if ( v65.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65.m128i_i64[0] + 8LL))(v65.m128i_i64[0]);
      }
      else if ( (_DWORD)v63 != 1 )
      {
        if ( !(_DWORD)v63 || (_DWORD)v63 == 2 )
        {
          v24 = j__strlen("malformed block record in AST file");
          sub_1EAD680(a1, "malformed block record in AST file", v24);
        }
        else
        {
          LODWORD(v71) = 0;
          sub_2027F10(&v65, v5, HIDWORD(v63), &v70, 0);
          if ( (v65.m128i_i8[8] & 1) != 0 )
          {
            v11 = (_QWORD *)v65.m128i_i64[0];
            v65.m128i_i64[0] = 0;
            v61 = v11;
            sub_1EBF0A0(a1, &v61);
            if ( v61 )
              (*(void (__fastcall **)(_QWORD *))(*v61 + 8LL))(v61);
            sub_A0AE90(v65.m128i_i64);
          }
          else
          {
            src = v65.m128i_i32[0];
            sub_A0AE90(v65.m128i_i64);
            switch ( src )
            {
              case 1:
              case 2:
                if ( !v9 )
                {
                  v12 = sub_1EE4770(a1, a2, *((_QWORD *)v70 + 1));
                  v9 = sub_141F490(*(_QWORD **)(a1 + 136), v12, v13, v14, v15, v16);
                  v17 = sub_1EE4770(a1, a2, *((_QWORD *)v70 + 2));
                  v18 = v70;
                  *(_DWORD *)(v9 + 4) = v17;
                  v19 = v18[4] == 0;
                  *(_BYTE *)(v9 + 36) = ((v18[3] != 0) << 7) | *(_BYTE *)(v9 + 36) & 0x7F;
                  *(_BYTE *)(v9 + 37) = (4 * !v19) | *(_BYTE *)(v9 + 37) & 0xFB;
                  v20 = (__int64 *)(*(_QWORD *)(a1 + 136) + 128LL);
                  v21 = v18[5];
                  *(_DWORD *)(v9 + 28) = v21;
                  v47 = (unsigned int)v21;
                  v22 = sub_1EC2080(v20, 24LL * (unsigned int)v21, 3u);
                  v23 = 7;
                  v52 = 6;
                  v8 = (_DWORD *)v22;
                  *(_QWORD *)(v9 + 16) = v22;
                  if ( src == 2 )
                  {
                    v31 = v70;
                    srcb = *((void **)v70 + 6);
                    n = *((_QWORD *)v70 + 7);
                    v32 = *((_QWORD *)v70 + 8);
                    LODWORD(v68) = 0;
                    v55 = v32;
                    v33 = *((_QWORD *)v70 + 9);
                    v57 = v33;
                    if ( (_DWORD)v33 )
                    {
                      v34 = v33 + 10;
                      v58 = v5;
                      v35 = 10;
                      v52 = v34;
                      v36 = v34;
                      v59 = v9;
                      while ( 1 )
                      {
                        v37 = v35 + 1;
                        v38 = sub_1EE2BD0((_QWORD *)a1, a2, v31[v35]);
                        v39 = (unsigned int)v68;
                        v40 = (unsigned int)v68 + 1LL;
                        if ( v40 > HIDWORD(v68) )
                        {
                          v60 = v38;
                          sub_2237220(&ptr, v69, v40, 8);
                          v39 = (unsigned int)v68;
                          v38 = v60;
                        }
                        *((_QWORD *)ptr + v39) = v38;
                        v41 = v68 + 1;
                        LODWORD(v68) = v68 + 1;
                        if ( v37 == v36 )
                          break;
                        v31 = v70;
                        v35 = v37;
                      }
                      v5 = v58;
                      v9 = v59;
                      v23 = v57 + 11;
                    }
                    else
                    {
                      v41 = 0;
                      v23 = 11;
                      v52 = 10;
                    }
                    v42 = *(_BYTE *)(v9 + 36);
                    *(_BYTE *)(v9 + 36) = v42 | 2;
                    if ( srcb )
                      *(_BYTE *)(v9 + 36) = v42 | 6;
                    if ( n )
                      *(_BYTE *)(v9 + 36) |= 8u;
                    if ( v55 )
                      *(_BYTE *)(v9 + 36) |= 0x20u;
                    v43 = *(_QWORD *)(a1 + 136);
                    if ( v41 )
                    {
                      v44 = ptr;
                      *(_DWORD *)(v9 + 24) = v41;
                      v56 = v23;
                      srcc = v44;
                      na = 8LL * v41;
                      v45 = (void *)sub_1EC2080((__int64 *)(v43 + 128), na, 3u);
                      *(_QWORD *)(v9 + 8) = v45;
                      memmove(v45, srcc, na);
                      v23 = v56;
                    }
                  }
                  if ( (_DWORD)v71 == v23 )
                  {
                    if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + 2896LL) )
                    {
                      v25 = *((_QWORD *)v70 + v52);
                      if ( v25 )
                      {
                        v26 = sub_1EE46C0(a1, a2, v25);
                        srca = *(void **)(*(_QWORD *)(a1 + 136) + 2896LL);
                        v27 = sub_145B180((__int64)srca, -v26);
                        if ( v27 )
                          sub_14597B0((__int64)srca, v9, v27, (__int64)srca, v28, v29);
                      }
                    }
                  }
                  ++*(_DWORD *)(a1 + 9320);
                  goto LABEL_26;
                }
                break;
              case 3:
                if ( !v9 )
                  goto LABEL_26;
                if ( v47 )
                {
                  LODWORD(v61) = 0;
                  v8 += 6;
                  sub_1EE50A0((__int64)&v65, (_QWORD *)a1, a2, (__int64 *)&v70, (unsigned int *)&v61);
                  --v47;
                  *(__m128i *)(v8 - 6) = _mm_load_si128(&v65);
                  *(v8 - 2) = v66;
                  goto LABEL_26;
                }
                v46 = j__strlen("unexpected number of macro tokens for a macro in AST file");
                sub_1EAD680(a1, "unexpected number of macro tokens for a macro in AST file", v46);
                break;
              case 4:
              case 5:
                break;
              default:
LABEL_26:
                sub_A0B030(&v63);
                continue;
            }
          }
        }
      }
      break;
    }
    sub_A0B030(&v63);
    if ( ptr != v69 )
      free(ptr);
    if ( v70 != v72 )
      free(v70);
  }
  sub_1EAF840((__int64)v62);
  return v9;
}
