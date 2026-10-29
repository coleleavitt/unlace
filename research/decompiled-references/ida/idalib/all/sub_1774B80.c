__int64 __fastcall sub_1774B80(__int64 *a1, __int64 a2, __m128 a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  const __m128i *v13; // rcx
  unsigned __int64 v14; // rsi
  const __m128i *v15; // rsi
  __int64 v16; // rdx
  _WORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v26; // rdx
  int v27; // rax^4
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // r15
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // esi
  __m128i v44; // xmm2
  __int64 v45; // rsi
  __int64 v46; // rdi
  int v47; // r10d
  unsigned int v48; // eax
  char v49; // al
  __int64 v50; // rcx
  __int64 v51; // r8
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r15
  int *v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rax
  __int64 v72; // [rsp+0h] [rbp-2C8h]
  __int64 v73; // [rsp+0h] [rbp-2C8h]
  __int64 v74; // [rsp+8h] [rbp-2C0h]
  __int64 v75; // [rsp+10h] [rbp-2B8h]
  __int64 v76; // [rsp+10h] [rbp-2B8h]
  int v77; // [rsp+10h] [rbp-2B8h]
  __int64 v78; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v79; // [rsp+18h] [rbp-2B0h]
  __int64 v80; // [rsp+18h] [rbp-2B0h]
  int v81; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v82; // [rsp+24h] [rbp-2A4h]
  void **v83; // [rsp+28h] [rbp-2A0h]
  int v84; // [rsp+30h] [rbp-298h]
  int *v85; // [rsp+38h] [rbp-290h]
  __m128i v86; // [rsp+40h] [rbp-288h] BYREF
  __int64 v87; // [rsp+50h] [rbp-278h]
  __int64 v88; // [rsp+68h] [rbp-260h]
  __m128i v89; // [rsp+70h] [rbp-258h] BYREF
  __int64 v90; // [rsp+80h] [rbp-248h]
  __int128 v91; // [rsp+90h] [rbp-238h] BYREF
  void *v92[2]; // [rsp+A0h] [rbp-228h]
  __int128 v93; // [rsp+B0h] [rbp-218h]
  __int128 v94; // [rsp+C0h] [rbp-208h] BYREF
  void *v95[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v96; // [rsp+E0h] [rbp-1E8h]
  __int128 v97; // [rsp+118h] [rbp-1B0h]
  __int64 v98; // [rsp+128h] [rbp-1A0h]
  __int64 v99; // [rsp+130h] [rbp-198h]
  __m128i v100; // [rsp+138h] [rbp-190h]
  __int64 v101; // [rsp+148h] [rbp-180h]
  __int64 v102; // [rsp+150h] [rbp-178h]
  __int64 v103; // [rsp+158h] [rbp-170h]
  __int64 v104; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v106[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v107; // [rsp+280h] [rbp-48h]

  v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v6 == 1 )
    return 1;
  v7 = v6;
  v8 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v9 = sub_176EE90(a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v72 = v26;
    if ( !v9 )
      return 1;
    v8 = *(_QWORD *)a2;
  }
  else
  {
    v72 = 0;
    v9 = 0;
  }
  v10 = v8 >> 16;
  v81 = 0;
  if ( (v10 & 0x40) != 0 )
    v81 = *(_DWORD *)(a2 + 16LL * ((v10 & 0x10) != 0) + 8LL * ((v10 & 0x20) != 0) + 56);
  v11 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( !v11 )
    return 1;
  v12 = *(_QWORD *)a2;
  v13 = *(const __m128i **)(a2 + 24);
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
    v14 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
  else
    v14 = (unsigned __int64)v13 | ((unsigned __int8)v13[1].m128i_i8[13] >> 5) & 3;
  ptr[0] = (void *)v14;
  v15 = (const __m128i *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15 == v13 )
  {
    v75 = v11;
    goto LABEL_12;
  }
  v75 = sub_17473B0((__int64)a1, (__int64)v15);
  if ( !v75 )
    return 1;
  v12 = *(_QWORD *)a2;
LABEL_12:
  v16 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v17 = *(_WORD **)(a2 + 16);
    v15 = (const __m128i *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( v17 == (_WORD *)(v7 & 0xFFFFFFFFFFFFFFFELL) )
    {
      if ( (v12 & 0x100000) != 0 )
      {
        v37 = *(_QWORD *)(a2 + 48);
        v15 = *(const __m128i **)(a2 + 56);
      }
      else
      {
        v15 = nullptr;
        v37 = 0;
      }
      if ( (const __m128i *)v72 == v15 && v9 == v37 )
      {
        v15 = *(const __m128i **)(a2 + 24);
        if ( (const __m128i *)v11 == v15 )
        {
          v38 = (v12 & 0x200000) != 0
              ? *(_QWORD *)(a2 + 16LL * ((v12 & 0x100000) != 0) + 48)
              : v11 | (*(_BYTE *)(v11 + 29) >> 5) & 3;
          ptr[0] = (void *)v38;
          if ( v75 == (v38 & 0xFFFFFFFFFFFFFFF8LL)
            && ((v12 & 0x400000) == 0
             || !*(_DWORD *)(a2 + 16LL * ((v12 & 0x100000) != 0) + 8LL * ((v12 & 0x200000) != 0) + 48)) )
          {
            if ( (*v17 & 0x1FF) != 0x62 || !(unsigned __int8)sub_1AF3130(*(_QWORD *)(v16 + 760)) )
            {
              v39 = *a1;
              v24 = a2;
              sub_1911B60(v39, a2);
              return v24;
            }
            v12 = *(_QWORD *)a2;
          }
        }
      }
    }
  }
  v18 = v12 >> 16;
  v107 = 0;
  ptr[1] = (void *)0x800000000LL;
  ptr[0] = v106;
  if ( (v18 & 0x40) == 0 )
    goto LABEL_92;
  v19 = a2 + 16LL * ((v18 & 0x10) != 0) + 8LL * ((v18 & 0x20) != 0);
  if ( !*(_DWORD *)(v19 + 48) )
    goto LABEL_92;
  v20 = 0;
  LODWORD(v107) = *(_DWORD *)(v19 + 48);
  v21 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x400000LL) != 0 )
    v20 = *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 52);
  HIDWORD(v107) = v20;
  if ( (v21 & 0x400000) != 0
    && (v36 = a2 + 16LL * ((v21 & 0x100000) != 0) + 8LL * ((v21 & 0x200000) != 0), *(_DWORD *)(v36 + 48)) )
  {
    v22 = 2LL * *(unsigned int *)(v36 + 60);
  }
  else
  {
    v22 = 0;
  }
  v23 = v21 >> 16;
  if ( (v23 & 0x40) != 0 && (v35 = 8LL * ((v23 & 0x20) != 0), *(_DWORD *)(a2 + v35 + 16LL * ((v23 & 0x10) != 0) + 48)) )
    v15 = (const __m128i *)(a2 + v35 + 16 * (((v23 & 0x10) != 0) + (unsigned __int64)((v23 & 0x40) != 0)) + 48);
  else
    v15 = nullptr;
  if ( !(unsigned __int8)sub_1771010(a1, v15, &v15[v22], (__int64)ptr) )
  {
LABEL_92:
    v74 = *a1;
    v27 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v15, *(double *)a3.m128_u64) >> 32;
    v28 = sub_15F0EF0(v74, v27, 0, (__m128i)a3, a4);
    v29 = *(_QWORD *)(a2 + 32);
    LODWORD(v74) = v28;
    v30 = *(_QWORD *)(a2 + 24);
    v89.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v31 = *(_QWORD *)(v30 + 40);
    v90 = v29;
    v89.m128i_i64[0] = v31;
    if ( !v31 || (sub_176AF20(&v86, a1, &v89, a3), v89 = _mm_loadu_si128(&v86), v90 = v87, v86.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48) )
      {
        v83 = ptr;
      }
      else
      {
        v83 = nullptr;
      }
      v32 = (*(_QWORD *)a2 >> 16) & 8LL;
      v33 = WORD1(*(_QWORD *)a2) & 8;
      v82 = v32 != 0;
      v34 = sub_19C4DF0(*a1, v7 & 0xFFFFFFFFFFFFFFFELL, (_DWORD)v32 != 0);
      if ( *(_QWORD *)(v11 + 40) )
      {
        v78 = v34;
        v91 = 0;
        *(_OWORD *)v92 = 0;
        v93 = 0;
        sub_15AB8B0((__int64)&v91, v9, v72);
        if ( (*(_DWORD *)(v78 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v73 = *(_QWORD *)((v78 & 0xFFFFFFFFFFFFFFFELL) + 8), v33)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v78 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v24 = 1;
          goto LABEL_39;
        }
        v44 = _mm_load_si128(&v89);
        v79 = v78 & 0xFFFFFFFFFFFFFFFELL;
        v99 = *a1;
        v95[0] = (void *)0x800000000LL;
        v101 = v90;
        *((_QWORD *)&v94 + 1) = &v95[1];
        v97 = 0;
        v100 = v44;
        v104 = 0x101010000LL;
        *(_QWORD *)&v94 = 0;
        v98 = 0;
        v102 = 0;
        v103 = 3;
        sub_1A395A0(&v94);
        v45 = v75 | (*(_BYTE *)(v75 + 29) >> 5) & 3;
        v88 = v45;
        sub_1743080((__int64)&v94 + 8, v45);
        LODWORD(v94) = 2;
        sub_1A43500(&v94);
        v46 = *a1;
        v47 = v79;
        v48 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v48 != 3 && v48 > 1 )
          goto LABEL_80;
        v49 = sub_BFE300(v79);
        v47 = v79;
        if ( v49 )
        {
          v52 = *(_BYTE *)(v11 + 28) & 0x7F;
          v53 = (v52 + 80) & 0x7F;
          if ( (unsigned __int8)v53 <= 3u || v52 == 32 )
          {
            v54 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v79 + 8) & 0xFFFFFFFFFFFFFFF0LL), v45, v53, v50, v51);
            v59 = sub_F63270(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL), v45, v55, v56, v57, v58);
            v47 = v79;
            v63 = (__int64)v59;
            if ( v59 )
            {
              v64 = (int *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
                v64 = *(int **)v64;
              if ( !v64 )
              {
                v65 = 0;
LABEL_78:
                v77 = v47;
                v70 = sub_B70650(v63, v65);
                v46 = *a1;
                if ( !v70 )
                {
                  v24 = sub_190BDA0(v46, v11, *(_QWORD *)(v11 + 48), 1, *(unsigned int *)(v11 + 24), 0, v73, v74);
                  goto LABEL_81;
                }
                v47 = v77;
LABEL_80:
                v24 = sub_19CB370(
                        v46,
                        v47,
                        v73,
                        v74,
                        v82,
                        (unsigned int)&v91,
                        v81,
                        0,
                        (__int64)&v94,
                        (__int64)v83,
                        0,
                        0,
                        0);
LABEL_81:
                sub_169D230((__int64)&v94);
LABEL_39:
                if ( HIDWORD(v92[1]) )
                  free(v92[0]);
                goto LABEL_24;
              }
              v76 = (__int64)v64;
              v65 = (__int64)(v64 - 16);
              if ( v64 == &dword_40 )
                goto LABEL_78;
              v85 = v64 - 16;
              v84 = v79;
              v80 = sub_B91570((__int64)(v59 + 8), v65, (__int64)v64, v60, v61, v62);
              v69 = sub_B91570(v76, v65, v76, v66, v67, v68);
              v47 = v84;
              v65 = (__int64)v85;
              if ( v80 != v69 )
                goto LABEL_78;
            }
          }
        }
        v46 = *a1;
        goto LABEL_80;
      }
      v40 = sub_18C1370(*a1, v34 & 0xFFFFFFFFFFFFFFFELL, v9, v75, v11);
      if ( v40 != 1 )
      {
        v41 = v40 & 0xFFFFFFFFFFFFFFFELL;
        v42 = *a1;
        v43 = v41;
        if ( v33 || (*(_BYTE *)(v41 + 1) & 6) != 0 )
        {
LABEL_64:
          v94 = 0;
          *(_OWORD *)v95 = 0;
          v96 = 0;
          *(_QWORD *)&v91 = (*(_BYTE *)(v75 + 29) >> 5) & 3 | (unsigned __int64)v75;
          v24 = sub_19C4FE0(v42, v43, v82, v74, (unsigned int)&v94, v11, v91, (__int64)&v89);
          if ( HIDWORD(v95[1]) )
            free(v95[0]);
          goto LABEL_24;
        }
        v71 = sub_1A0BEA0(v42, v41);
        if ( v71 != 1 )
        {
          v42 = *a1;
          v43 = v71 & 0xFFFFFFFE;
          goto LABEL_64;
        }
      }
    }
  }
  v24 = 1;
LABEL_24:
  if ( ptr[0] != v106 )
    free(ptr[0]);
  return v24;
}
