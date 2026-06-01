char __fastcall sub_1A95370(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rsi
  __int64 v21; // r15
  size_t v22; // rax
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // rax
  const char *v26; // rax
  size_t v27; // rdx
  size_t v28; // r15
  __int64 v29; // rax
  __int64 v30; // r14
  char v31; // al
  bool v32; // zf
  size_t v33; // r8
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  char *v42; // rdi
  unsigned int v44; // [rsp+8h] [rbp-250h]
  unsigned __int64 v45; // [rsp+10h] [rbp-248h]
  __int64 *src; // [rsp+20h] [rbp-238h]
  __int64 v47; // [rsp+28h] [rbp-230h]
  size_t v48; // [rsp+28h] [rbp-230h]
  size_t v49; // [rsp+28h] [rbp-230h]
  __int64 v50[3]; // [rsp+30h] [rbp-228h] BYREF
  void *v51; // [rsp+48h] [rbp-210h]
  __int64 v52; // [rsp+58h] [rbp-200h] BYREF
  __int64 v53; // [rsp+70h] [rbp-1E8h] BYREF
  int v54; // [rsp+78h] [rbp-1E0h]
  int v55; // [rsp+7Ch] [rbp-1DCh]
  __int64 v56; // [rsp+80h] [rbp-1D8h]
  char v57; // [rsp+88h] [rbp-1D0h]
  _QWORD v58[10]; // [rsp+90h] [rbp-1C8h] BYREF
  int v59; // [rsp+E0h] [rbp-178h]
  char v60; // [rsp+E8h] [rbp-170h]
  __int64 v61; // [rsp+F0h] [rbp-168h]
  void *ptr; // [rsp+100h] [rbp-158h] BYREF
  __m128i si128; // [rsp+108h] [rbp-150h]
  _BYTE v64[120]; // [rsp+118h] [rbp-140h] BYREF
  __int16 v65; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+198h] [rbp-C0h]
  __int16 v67; // [rsp+1A0h] [rbp-B8h]
  __int64 v68; // [rsp+1A8h] [rbp-B0h]
  __int16 v69; // [rsp+1B0h] [rbp-A8h]
  __int64 v70; // [rsp+1B8h] [rbp-A0h]
  __int16 v71; // [rsp+1C0h] [rbp-98h]
  __int64 v72; // [rsp+1C8h] [rbp-90h]
  __int16 v73; // [rsp+1D0h] [rbp-88h]
  __int64 v74; // [rsp+1D8h] [rbp-80h]
  __int16 v75; // [rsp+1E0h] [rbp-78h]
  __int64 v76; // [rsp+1E8h] [rbp-70h]
  __int16 v77; // [rsp+1F0h] [rbp-68h]
  __int64 v78; // [rsp+1F8h] [rbp-60h]
  __int16 v79; // [rsp+200h] [rbp-58h]
  __int64 v80; // [rsp+208h] [rbp-50h]
  __int16 v81; // [rsp+210h] [rbp-48h]
  __int64 v82; // [rsp+218h] [rbp-40h]

  LOBYTE(v3) = *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6;
  if ( (_BYTE)v3 != 1 )
  {
    v3 = sub_B8E970((__int64)(a2 + 6));
    v8 = (_QWORD *)v3;
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0xE )
      {
LABEL_8:
        v9 = v8[6];
        if ( !v9 )
          goto LABEL_18;
        if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
        {
          v13 = sub_B8C3D0(v8[6], (__int64)a2, v4, v5, v6, v7);
          v4 = *v13;
          v5 = *v13 + 8LL * *((unsigned int *)v13 + 2);
          if ( *v13 >= v5 )
          {
            for ( ; v4 != v5; v5 += 8LL )
            {
              if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) == 266 )
                goto LABEL_18;
            }
          }
          else
          {
            v14 = (__int64 *)*v13;
            while ( 1 )
            {
              v4 = *v14;
              if ( *(_WORD *)(*v14 + 36) == 266 )
                break;
              if ( (__int64 *)v5 == ++v14 )
                goto LABEL_10;
            }
            if ( (__int64 *)v5 != v14 )
              goto LABEL_18;
          }
        }
LABEL_10:
        if ( (*(_BYTE *)(v9 + 73) & 0x40) == 0 )
        {
          v10 = v8[8];
          if ( !v10 || (*(_BYTE *)(v10 + 58) & 0x10) != 0 )
          {
            v11 = *(_QWORD *)(v9 + 104);
            if ( v11 )
            {
              v12 = sub_BA8080(*(_QWORD *)(v9 + 104), (__int64)a2, v4, v5, v6, v7);
              v4 = (unsigned int)(v12 - 1);
              if ( (unsigned int)v4 <= 1 || (unsigned int)(v12 - 4) <= 1 )
              {
                v15 = sub_168B6E0((__int64)a1);
                v16 = 3439;
                if ( (*(_BYTE *)(v15 + 107) & 4) == 0 )
                  v16 = 6672;
                sub_168B9F0((__int64)&v65, a1, *(_DWORD *)(v9 + 24), v16, 0);
                v17 = v11;
                sub_15F7200(&v65);
                LODWORD(v45) = 0;
                v44 = *(_DWORD *)(v9 + 24);
                do
                {
                  v18 = *(_QWORD *)v17;
                  if ( (*(_BYTE *)(v17 + 29) & 2) == 0 )
                  {
                    v19 = (_QWORD *)(*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                    if ( (*(_QWORD *)(v17 + 16) & 4) != 0 )
                      v19 = (_QWORD *)*v19;
                    v20 = (_QWORD *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
                      v20 = (_QWORD *)*v20;
                    if ( v20 == v19 )
                    {
                      v44 = *(_DWORD *)(v17 + 24);
                      v45 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v18 + 16))(v17) >> 32;
                      v18 = *(_QWORD *)v17;
                    }
                  }
                  v17 = (*(__int64 (__fastcall **)(__int64))(v18 + 40))(v17);
                }
                while ( v11 != v17 && v17 != 0 );
                v21 = *(_QWORD *)(*a1 + 240);
                v65 = 189;
                v67 = 22;
                v69 = 22;
                v66 = 0;
                v68 = 0;
                v70 = 0;
                v22 = j__strlen("objc_method_family");
                v23 = sub_6F3470(v21 + 552, "objc_method_family", v22);
                v74 = 0;
                v71 = 5;
                v73 = 22;
                v72 = v23;
                v24 = j__strlen("none");
                v25 = sub_6F3470(v21 + 552, "none", v24);
                v75 = 5;
                v76 = v25;
                v77 = 23;
                v78 = 0;
                v79 = 23;
                v80 = 0;
                v81 = 23;
                v82 = 0;
                v26 = (const char *)sub_145F790(v21, v44, &v65, 9);
                v28 = v27;
                if ( !v27 )
                {
                  v28 = 41;
                  v26 = "__attribute__((objc_method_family(none)))";
                }
                src = (__int64 *)v26;
                sub_168B9F0((__int64)&ptr, a1, v44, 0x16C5u, 0);
                a2 = v50;
                v50[0] = *(_QWORD *)(v11 + 40);
                v29 = sub_15894B0((__int64)&ptr, v50);
                v30 = v29;
                if ( *(_BYTE *)(v29 + 120) )
                {
                  a2 = src;
                  sub_AEC220((unsigned __int8 **)(v29 + 32), src, v28);
                }
                else if ( *(_BYTE *)(v29 + 132) )
                {
                  v47 = sub_168B9E0((_QWORD *)v29);
                  v40 = *(_QWORD *)(v30 + 16);
                  if ( v40 )
                    v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 32LL))(*(_QWORD *)(v30 + 16));
                  v53 = v40;
                  v41 = sub_1587BC0(v47, &v53, v36, v37, v38, v39);
                  a2 = src;
                  sub_AEC220((unsigned __int8 **)(*v41 + 32LL * *(unsigned int *)(v30 + 128) + 8), src, v28);
                }
                v53 = *(_QWORD *)v30;
                v54 = *(_DWORD *)(v30 + 8);
                v55 = *(_DWORD *)(v30 + 12);
                v56 = *(_QWORD *)(v30 + 16);
                v31 = *(_BYTE *)(v30 + 24);
                v60 = 0;
                v32 = *(_BYTE *)(v30 + 120) == 0;
                v57 = v31;
                if ( !v32 )
                {
                  a2 = (__int64 *)(v30 + 32);
                  sub_FC70F0((__int64)v58, v30 + 32);
                  v58[9] = *(_QWORD *)(v30 + 104);
                  v35 = *(_DWORD *)(v30 + 112);
                  v60 = 1;
                  v59 = v35;
                }
                v61 = *(_QWORD *)(v30 + 128);
                sub_15F7200(&ptr);
                if ( !(_DWORD)v45 )
                  goto LABEL_49;
                v33 = j__strlen(" ");
                si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
                ptr = v64;
                if ( v33 > 0x40 )
                {
                  v49 = v33;
                  sub_2236E10(&ptr, v64, v33, 1);
                  v33 = v49;
                  v42 = (char *)ptr + si128.m128i_i64[0];
                }
                else
                {
                  v34 = 64;
                  if ( !v33 )
                  {
LABEL_53:
                    si128.m128i_i64[0] = v33;
                    if ( v28 + v33 > v34 )
                    {
                      sub_2236E10(&ptr, v64, v28 + v33, 1);
                      v33 = si128.m128i_i64[0];
                    }
                    memcpy((char *)ptr + v33, src, v28);
                    si128.m128i_i64[0] += v28;
                    sub_9EC740((__int64)v50, v45, ptr, si128.m128i_i64[0], 0);
                    a2 = v50;
                    sub_1589170((__int64)&v53, v50);
                    if ( v51 != &v52 )
                      operator delete(v51);
                    if ( ptr != v64 )
                      free(ptr);
LABEL_49:
                    sub_15F7200(&v53);
                    goto LABEL_18;
                  }
                  v42 = v64;
                }
                v48 = v33;
                memcpy(v42, " ", v33);
                v34 = si128.m128i_u64[1];
                v33 = si128.m128i_i64[0] + v48;
                goto LABEL_53;
              }
            }
          }
        }
LABEL_18:
        while ( 1 )
        {
          v3 = v8[1] & 0xFFFFFFFFFFFFFFF8LL;
          v8 = (_QWORD *)v3;
          if ( !v3 )
            break;
          if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0xE )
            goto LABEL_8;
        }
      }
      else
      {
        while ( 1 )
        {
          v3 = v8[1] & 0xFFFFFFFFFFFFFFF8LL;
          v8 = (_QWORD *)v3;
          if ( !v3 )
            break;
          if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0xE )
            goto LABEL_8;
        }
      }
    }
  }
  return v3;
}
