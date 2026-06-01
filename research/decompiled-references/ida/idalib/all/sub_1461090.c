_BOOL8 __fastcall sub_1461090(__int64 a1, __m128i *a2, __m128i a3, double a4)
{
  unsigned __int16 v6; // bp
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rdi
  void (__fastcall *v14)(__int64, __int64); // rax
  char v15; // al
  char v16; // dl
  _BOOL8 result; // rax
  __int64 v18; // rdx
  __int32 v19; // edx
  int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // esi
  unsigned int v23; // edx
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 *v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // rax
  int v31; // eax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // r9
  char v36; // al
  __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 *v44; // rax
  char v45; // cl
  __int16 v46; // dx
  char v47; // r12
  char v48; // al
  __int64 v49; // rsi
  __int16 v50; // dx
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // r15
  __int64 i; // r12
  __int64 v57; // rsi
  unsigned __int8 *v58; // r10
  int v59; // ecx
  __int64 v60; // rdi
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 *v64; // [rsp+8h] [rbp-D0h]
  unsigned __int64 *v65; // [rsp+8h] [rbp-D0h]
  __int64 v66; // [rsp+8h] [rbp-D0h]
  __int64 v67; // [rsp+8h] [rbp-D0h]
  unsigned __int64 *v68; // [rsp+8h] [rbp-D0h]
  unsigned __int64 *v69; // [rsp+10h] [rbp-C8h]
  unsigned __int64 *v70; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v72; // [rsp+18h] [rbp-C0h]
  __int64 v73; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v74; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v76[2]; // [rsp+50h] [rbp-88h] BYREF
  __int16 v77; // [rsp+60h] [rbp-78h]
  char v78; // [rsp+68h] [rbp-70h]

  v6 = a2[1].m128i_u16[0];
  v7 = sub_141A630(v6);
  if ( v6 == 1 || v7 )
    BUG();
  v12 = a2->m128i_i64[1];
  if ( (*(_BYTE *)(v12 + 4) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 120);
    v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL);
    if ( *(_QWORD *)(a1 + 320) == v12 || *(_QWORD *)(a1 + 328) == v12 )
    {
      v47 = *(_BYTE *)(v12 + 3);
      v14(v13, a2->m128i_i64[1]);
      v47 &= 0x20u;
      a2[1].m128i_i16[0] = *(_WORD *)v12 & 0x1FF;
      v48 = v47 | *(_BYTE *)(v12 + 3) & 0xDF;
      *(_BYTE *)(v12 + 3) = v48;
      if ( v47 )
        *(_BYTE *)(v12 + 3) = v48 | 0x80;
      else
        sub_145BE00(v12);
    }
    else
    {
      v14(v13, a2->m128i_i64[1]);
      a2[1].m128i_i16[0] = *(_WORD *)v12 & 0x1FF;
    }
  }
  v15 = *(_BYTE *)(v12 + 3);
  if ( (v15 & 0x20) != 0 && *(_QWORD *)(a1 + 1120) )
  {
    sub_1460C00(a1, (__int64)a2);
    v15 = *(_BYTE *)(v12 + 3);
  }
  v73 = v12;
  if ( (v15 & 2) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 1704);
    v22 = *(_DWORD *)(v21 + 16);
    if ( v22 )
    {
      v10 = v22 - 1;
      v23 = v10 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
      v24 = (unsigned __int8 *)(*(_QWORD *)v21 + 16LL * v23);
      v25 = *(_QWORD *)v24;
      if ( v12 == *(_QWORD *)v24 )
      {
LABEL_35:
        v26 = (unsigned __int64 *)(v24 + 8);
        v27 = *((_QWORD *)v24 + 1);
        v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v27 || (v27 & 4) == 0 )
          goto LABEL_41;
        v29 = v12;
        if ( v28 )
        {
          do
          {
            v28 = *(_QWORD *)v28;
LABEL_41:
            ;
          }
          while ( v28 && (*(_BYTE *)(v28 + 12) & 3) == 2 );
          v29 = v12;
        }
LABEL_43:
        if ( (*(_BYTE *)(v29 + 4) & 0x10) != 0 )
        {
          v64 = v26;
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), v29);
          v26 = v64;
          if ( (*(_BYTE *)(v29 + 3) & 2) == 0 )
            goto LABEL_105;
        }
        else if ( (*(_BYTE *)(v29 + 3) & 2) == 0 )
        {
          v34 = 0;
          goto LABEL_94;
        }
        v30 = *(_QWORD *)(a1 + 56);
        if ( (*(_BYTE *)(v30 + 21) & 2) != 0 || *(char *)(v30 + 22) < 0 )
        {
          v31 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
          if ( v31 )
          {
            v32 = *v26 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !*v26 || (*v26 & 4) == 0 || (v33 = *v26 & 0xFFFFFFFFFFFFFFF8LL, !v32) )
            {
              v51 = *(_QWORD *)(a1 + 128);
              *(_QWORD *)(a1 + 208) += 32LL;
              v52 = (v51 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              if ( *(_QWORD *)(a1 + 136) >= v52 + 32 && v51 )
              {
                *(_QWORD *)(a1 + 128) = v52 + 32;
                v33 = (v51 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              }
              else
              {
                v71 = v32;
                v68 = v26;
                v63 = sub_986170(a1 + 128, 32, 32, 4, (__int64)v26, v32);
                v32 = v71;
                v26 = v68;
                v33 = v63;
                v52 = v63 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)(v33 + 8) = 0;
              *(_DWORD *)(v33 + 16) = 0;
              *(_QWORD *)(v33 + 24) = 0;
              *(_QWORD *)v33 = v32;
              *(_BYTE *)(v33 + 20) = 0;
              *v26 = v52 | 4;
              v31 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
            }
            if ( *(_DWORD *)(v33 + 16) != v31 )
            {
              v65 = v26;
              sub_14476F0(a1, v29, v33);
              v26 = v65;
            }
            v34 = 4LL * *(unsigned __int8 *)(v33 + 20);
LABEL_54:
            v35 = v73;
            if ( (*(_BYTE *)(v73 + 4) & 0x10) != 0 )
            {
              v69 = v26;
              v66 = v73;
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), v73);
              v35 = v66;
              v26 = v69;
              v36 = *(_BYTE *)(v66 + 3) & 2;
            }
            else
            {
              v36 = *(_BYTE *)(v73 + 3) & 2;
            }
            if ( v36 )
            {
              v37 = *(_QWORD *)(a1 + 56);
              if ( (*(_BYTE *)(v37 + 21) & 2) != 0 || *(char *)(v37 + 22) < 0 )
              {
                v38 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
                if ( v38 )
                {
                  v39 = *v26 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !*v26 || (*v26 & 4) == 0 || (v40 = *v26 & 0xFFFFFFFFFFFFFFF8LL, !v39) )
                  {
                    v53 = *(_QWORD *)(a1 + 128);
                    *(_QWORD *)(a1 + 208) += 32LL;
                    v54 = (v53 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                    if ( *(_QWORD *)(a1 + 136) >= v54 + 32 && v53 )
                    {
                      *(_QWORD *)(a1 + 128) = v54 + 32;
                      v40 = (v53 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                    }
                    else
                    {
                      v72 = v39;
                      v70 = v26;
                      v67 = v35;
                      v62 = sub_986170(a1 + 128, 32, 32, 4, (__int64)v26, v35);
                      v39 = v72;
                      v26 = v70;
                      v40 = v62;
                      v35 = v67;
                      v54 = v62 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                    *(_QWORD *)(v40 + 8) = 0;
                    *(_DWORD *)(v40 + 16) = 0;
                    *(_QWORD *)(v40 + 24) = 0;
                    *(_QWORD *)v40 = v39;
                    *(_BYTE *)(v40 + 20) = 0;
                    *v26 = v54 | 4;
                    v38 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
                  }
                  if ( *(_DWORD *)(v40 + 16) != v38 )
                    sub_14476F0(a1, v35, v40);
                  v41 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v40 + 8) & 4) != 0 )
                  {
                    v42 = *(_QWORD *)v41;
                    v43 = *(unsigned int *)(v41 + 8);
                  }
                  else
                  {
                    v42 = v40 + 8;
                    v43 = v41 != 0;
                  }
LABEL_67:
                  if ( !v28 || (*(_BYTE *)(v28 + 12) & 3) != 0 )
                  {
                    v74.m128i_i64[0] = v34;
                    v74.m128i_i64[1] = v42;
                    v75 = v43;
                  }
                  else
                  {
                    v74.m128i_i64[1] = v42;
                    v75 = v43;
                    v74.m128i_i64[0] = v34 | v28 & 0xFFFFFFFFFFFFFFFBLL;
                    if ( v34 & 0xFFFFFFFFFFFFFFF8LL | v28 & 0xFFFFFFFFFFFFFFF8LL )
                    {
                      if ( !v43 )
                      {
                        v44 = sub_13F1C60((__int64 *)(v34 & 0xFFFFFFFFFFFFFFF8LL | v28 & 0xFFFFFFFFFFFFFFF8LL));
                        if ( v44 )
                          v44 = (__int64 *)v44[2];
LABEL_72:
                        if ( (*(_BYTE *)(a1 + 544) & 0x20) == 0 )
                        {
                          v45 = *((_BYTE *)v44 + 36);
                          v46 = a2[1].m128i_i16[1];
                          if ( (v46 & 4) == 0 && (v45 & 0x40) == 0 )
                          {
                            if ( (v45 & 2) == 0 || (unsigned __int8)sub_145D630((_QWORD *)a1, 22, a3, a4) )
                              return sub_144B170(a1, a2, &v74, a3, a4);
                            goto LABEL_84;
                          }
                          a2[1].m128i_i16[1] = v46 | 4;
                          if ( (v45 & 2) == 0 )
                          {
LABEL_86:
                            sub_FC70B0((__int64)v76, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1282);
                            sub_AEA040((__int64)v76);
                            v15 = *(_BYTE *)(v12 + 3);
                            goto LABEL_11;
                          }
                          v49 = *(_QWORD *)(a1 + 1112);
                          if ( v49 )
                            sub_13DB670((__int64)v76, v49, a3, a4);
                          else
                            sub_14667F0(v76, *(_QWORD *)(a1 + 1144));
                          v50 = v77;
                          if ( !v78 )
                          {
                            if ( *(_QWORD *)(a1 + 1120) )
                              goto LABEL_84;
                            v55 = *(_QWORD *)(a1 + 1168);
                            for ( i = *(_QWORD *)(a1 + 1176); v55 != i; i -= 56 )
                            {
                              v57 = *(_QWORD *)(i - 40);
                              if ( v57 )
                                sub_13DB670((__int64)v76, v57, a3, a4);
                              else
                                sub_14667F0(v76, *(_QWORD *)(i - 24));
                              v50 = v77;
                              if ( v78 )
                                break;
                              if ( *(_QWORD *)(i - 32) )
                                goto LABEL_84;
                            }
                          }
                          if ( v50 == 22 )
                            goto LABEL_86;
                        }
LABEL_84:
                        v15 = *(_BYTE *)(v12 + 3);
                        goto LABEL_11;
                      }
LABEL_71:
                      v44 = *(__int64 **)(*(_QWORD *)(v42 + 8 * v43 - 8) + 16LL);
                      goto LABEL_72;
                    }
                  }
                  if ( !v43 )
                    goto LABEL_84;
                  goto LABEL_71;
                }
              }
            }
LABEL_94:
            v43 = 0;
            v42 = 0;
            goto LABEL_67;
          }
        }
LABEL_105:
        v34 = 0;
        goto LABEL_54;
      }
      v11 = 1;
      v58 = nullptr;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( v25 == -8192 && !v58 )
            v58 = v24;
          v23 = v10 & (v11 + v23);
          v24 = (unsigned __int8 *)(*(_QWORD *)v21 + 16LL * v23);
          v25 = *(_QWORD *)v24;
          if ( v12 == *(_QWORD *)v24 )
            goto LABEL_35;
          if ( v25 == -4096 )
          {
            if ( v58 )
              v24 = v58;
            break;
          }
          v11 = (unsigned int)(v11 + 1);
        }
      }
      v59 = *(_DWORD *)(v21 + 8);
      v76[0] = v24;
      v8 = (unsigned int)(v59 + 1);
      v9 = 3 * v22;
      if ( 4 * (int)v8 < (unsigned int)v9 )
      {
        v60 = v12;
        v9 = v22 - *(_DWORD *)(v21 + 12) - (unsigned int)v8;
        v10 = v22 >> 3;
        if ( (unsigned int)v9 > (unsigned int)v10 )
        {
LABEL_121:
          v61 = *(_QWORD *)v24 == -4096;
          *(_DWORD *)(v21 + 8) = v8;
          if ( !v61 )
            --*(_DWORD *)(v21 + 12);
          *(_QWORD *)v24 = v60;
          v26 = (unsigned __int64 *)(v24 + 8);
          v29 = v73;
          v28 = 0;
          *((_QWORD *)v24 + 1) = 0;
          goto LABEL_43;
        }
LABEL_127:
        sub_12F12D0(v21, v22, v8, v9, v10, v11);
        sub_12EC520((__int64 *)v21, &v73, v76);
        v60 = v73;
        LODWORD(v8) = *(_DWORD *)(v21 + 8) + 1;
        v24 = v76[0];
        goto LABEL_121;
      }
    }
    else
    {
      v76[0] = nullptr;
    }
    v22 *= 2;
    goto LABEL_127;
  }
LABEL_11:
  if ( (v15 & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 544) & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v12 + 5) & 4) != 0 )
        goto LABEL_14;
      goto LABEL_26;
    }
    v20 = sub_FDFE20(a1 + 552, v12, *(_QWORD *)(a1 + 56));
    sub_FC70B0((__int64)v76, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], v20);
    sub_AEC220(v76, (_BYTE *)(*(_QWORD *)(v12 + 16) + 16LL), **(unsigned int **)(v12 + 16));
    sub_AEA040((__int64)v76);
    *(_BYTE *)(v12 + 3) &= ~0x10u;
    sub_145BE00(v12);
  }
  if ( (*(_BYTE *)(v12 + 5) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 544) & 0x20) != 0 )
      goto LABEL_14;
    sub_FC70B0((__int64)v76, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1377);
    sub_AE9DF0(v76, v12, 5u);
    sub_AEA040((__int64)v76);
  }
  v15 = *(_BYTE *)(v12 + 3);
LABEL_26:
  if ( (v15 & 8) == 0 || (*(_BYTE *)(a1 + 544) & 0x20) != 0 )
  {
LABEL_14:
    if ( !*(_BYTE *)(a1 + 861) )
      goto LABEL_29;
    goto LABEL_15;
  }
  sub_FC70B0((__int64)v76, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1256);
  sub_AEA040((__int64)v76);
  if ( !*(_BYTE *)(a1 + 861) )
  {
LABEL_29:
    result = 1;
    if ( a2[1].m128i_i16[0] != 172 )
      return result;
    goto LABEL_16;
  }
LABEL_15:
  if ( (*(_BYTE *)(v12 + 4) & 0x20) == 0 )
    goto LABEL_29;
LABEL_16:
  v16 = *(_BYTE *)(a1 + 544);
  result = (v16 & 8) != 0;
  if ( (v16 & 8) == 0 )
  {
    result = (v16 & 0x20) != 0;
    if ( (v16 & 0x20) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v18 + 21) & 2) != 0 || (result = 1, (*(_BYTE *)(v18 + 105) & 0x40) != 0) )
      {
        result = 1;
        if ( *(__int64 (__fastcall **)(__int64, __m128i *))(a1 + 1152) != sub_1418450 )
        {
          v19 = a2->m128i_i32[0];
          *(_DWORD *)(a1 + 792) = 0;
          *(_BYTE *)(a1 + 860) = 1;
          *(_DWORD *)(a1 + 780) = v19;
          *(_BYTE *)(a1 + 936) = 1;
          *(_QWORD *)(a1 + 1152) = sub_1436080;
        }
      }
    }
  }
  return result;
}
