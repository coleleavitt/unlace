__int64 __fastcall sub_1E27680(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  const __m128i *v16; // rcx
  unsigned __int64 v17; // rsi
  const __m128i *v18; // rsi
  __int64 v19; // rdx
  _WORD *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v29; // rdx
  int v30; // rax^4
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // r15
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdi
  unsigned __int64 v45; // rdi
  __m128 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned __int64 v51; // rax
  __m128 *v52; // rdi
  unsigned __int64 v53; // rsi
  __m128i v54; // xmm2
  __int64 v55; // rsi
  __m128 *v56; // rdi
  _DWORD *v57; // r10
  unsigned int v58; // eax
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // r8
  char v62; // al
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r15
  int *v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  char v80; // al
  __int64 v81; // rax
  __int64 v82; // [rsp+0h] [rbp-2C8h]
  __int64 v83; // [rsp+0h] [rbp-2C8h]
  __int64 v84; // [rsp+8h] [rbp-2C0h]
  unsigned int v85; // [rsp+8h] [rbp-2C0h]
  __int64 v86; // [rsp+10h] [rbp-2B8h]
  __int64 v87; // [rsp+10h] [rbp-2B8h]
  _DWORD *v88; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 v89; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v90; // [rsp+18h] [rbp-2B0h]
  __int64 v91; // [rsp+18h] [rbp-2B0h]
  unsigned int v92; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v93; // [rsp+24h] [rbp-2A4h]
  void **v94; // [rsp+28h] [rbp-2A0h]
  _DWORD *v95; // [rsp+30h] [rbp-298h]
  int *v96; // [rsp+38h] [rbp-290h]
  __m128i v97; // [rsp+40h] [rbp-288h] BYREF
  __int64 v98; // [rsp+50h] [rbp-278h]
  __int64 v99; // [rsp+68h] [rbp-260h]
  __m128i v100; // [rsp+70h] [rbp-258h] BYREF
  __int64 v101; // [rsp+80h] [rbp-248h]
  __m128i v102; // [rsp+90h] [rbp-238h] BYREF
  void *v103[2]; // [rsp+A0h] [rbp-228h]
  __int128 v104; // [rsp+B0h] [rbp-218h]
  __int128 v105; // [rsp+C0h] [rbp-208h] BYREF
  void *v106[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v107; // [rsp+E0h] [rbp-1E8h]
  __int128 v108; // [rsp+118h] [rbp-1B0h]
  __int64 v109; // [rsp+128h] [rbp-1A0h]
  __int64 v110; // [rsp+130h] [rbp-198h]
  __m128i v111; // [rsp+138h] [rbp-190h]
  __int64 v112; // [rsp+148h] [rbp-180h]
  __int64 v113; // [rsp+150h] [rbp-178h]
  __int64 v114; // [rsp+158h] [rbp-170h]
  __int64 v115; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v117[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v118; // [rsp+280h] [rbp-48h]

  v9 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = v9;
  v11 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v12 = sub_1E237D0((__int64)a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v82 = v29;
    if ( !v12 )
      return 1;
    v11 = *(_QWORD *)a2;
  }
  else
  {
    v82 = 0;
    v12 = 0;
  }
  v13 = v11 >> 16;
  v92 = 0;
  if ( (v13 & 0x40) != 0 )
    v92 = *(_DWORD *)(a2 + 16LL * ((v13 & 0x10) != 0) + 8LL * ((v13 & 0x20) != 0) + 56);
  v14 = sub_1E0AF30((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( !v14 )
    return 1;
  v15 = *(_QWORD *)a2;
  v16 = *(const __m128i **)(a2 + 24);
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
    v17 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
  else
    v17 = (unsigned __int64)v16 | ((unsigned __int8)v16[1].m128i_i8[13] >> 5) & 3;
  ptr[0] = (void *)v17;
  v18 = (const __m128i *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v18 == v16 )
  {
    v86 = v14;
    goto LABEL_12;
  }
  v86 = sub_1E0AF30((__int64)a1, (__int64)v18);
  if ( !v86 )
    return 1;
  v15 = *(_QWORD *)a2;
LABEL_12:
  v19 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v20 = *(_WORD **)(a2 + 16);
    v18 = (const __m128i *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( v20 == (_WORD *)(v10 & 0xFFFFFFFFFFFFFFFELL) )
    {
      if ( (v15 & 0x100000) != 0 )
      {
        v44 = *(_QWORD *)(a2 + 48);
        v18 = *(const __m128i **)(a2 + 56);
      }
      else
      {
        v18 = nullptr;
        v44 = 0;
      }
      if ( (const __m128i *)v82 == v18 && v12 == v44 )
      {
        v18 = *(const __m128i **)(a2 + 24);
        if ( (const __m128i *)v14 == v18 )
        {
          v45 = (v15 & 0x200000) != 0
              ? *(_QWORD *)(a2 + 16LL * ((v15 & 0x100000) != 0) + 48)
              : v14 | (*(_BYTE *)(v14 + 29) >> 5) & 3;
          ptr[0] = (void *)v45;
          if ( v86 == (v45 & 0xFFFFFFFFFFFFFFF8LL)
            && ((v15 & 0x400000) == 0
             || !*(_DWORD *)(a2 + 16LL * ((v15 & 0x100000) != 0) + 8LL * ((v15 & 0x200000) != 0) + 48)) )
          {
            if ( (*v20 & 0x1FF) != 0x62 || !sub_1AF3130(*(_QWORD *)(v19 + 760), (__int64)v18) )
            {
              v46 = (__m128 *)*a1;
              v27 = a2;
              sub_1911B60(v46, a2, a6, a7);
              return v27;
            }
            v15 = *(_QWORD *)a2;
          }
        }
      }
    }
  }
  v21 = v15 >> 16;
  v118 = 0;
  ptr[1] = (void *)0x800000000LL;
  ptr[0] = v117;
  if ( (v21 & 0x40) == 0 )
    goto LABEL_92;
  v22 = a2 + 16LL * ((v21 & 0x10) != 0) + 8LL * ((v21 & 0x20) != 0);
  if ( !*(_DWORD *)(v22 + 48) )
    goto LABEL_92;
  v23 = 0;
  LODWORD(v118) = *(_DWORD *)(v22 + 48);
  v24 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x400000LL) != 0 )
    v23 = *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 52);
  HIDWORD(v118) = v23;
  if ( (v24 & 0x400000) != 0
    && (v43 = a2 + 16LL * ((v24 & 0x100000) != 0) + 8LL * ((v24 & 0x200000) != 0), *(_DWORD *)(v43 + 48)) )
  {
    v25 = 2LL * *(unsigned int *)(v43 + 60);
  }
  else
  {
    v25 = 0;
  }
  v26 = v24 >> 16;
  if ( (v26 & 0x40) != 0 && (v42 = 8LL * ((v26 & 0x20) != 0), *(_DWORD *)(a2 + v42 + 16LL * ((v26 & 0x10) != 0) + 48)) )
    v18 = (const __m128i *)(a2 + v42 + 16 * (((v26 & 0x10) != 0) + (unsigned __int64)((v26 & 0x40) != 0)) + 48);
  else
    v18 = nullptr;
  if ( !(unsigned __int8)sub_1E25C60(a1, v18, &v18[v25], (__int64)ptr) )
  {
LABEL_92:
    v84 = *a1;
    v30 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v18, *(double *)a6.m128_u64) >> 32;
    v31 = sub_15F0EF0(v84, v30, 0, (__m128i)a6, *(double *)a7.m128_u64);
    v34 = *(unsigned int *)(a2 + 40);
    v35 = *(_QWORD *)(a2 + 32);
    v85 = v31;
    v36 = *(_QWORD *)(a2 + 24);
    v100.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v37 = *(_QWORD *)(v36 + 40);
    v101 = v35;
    v100.m128i_i64[0] = v37;
    if ( !v37
      || (sub_1E20110(&v97, a1, &v100, a6, a7),
          a7 = (__m128)_mm_loadu_si128(&v97),
          v100 = (__m128i)a7,
          v101 = v98,
          v97.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && (v34 = 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0),
            *(_DWORD *)(a2 + v34 + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48)) )
      {
        v94 = ptr;
      }
      else
      {
        v94 = nullptr;
      }
      v38 = (*(_QWORD *)a2 >> 16) & 8LL;
      v39 = WORD1(*(_QWORD *)a2) & 8;
      v93 = v38 != 0;
      v40 = sub_19C4DF0(*a1, (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL), (_DWORD)v38 != 0, v34, v32, v33, a6, a7);
      if ( *(_QWORD *)(v14 + 40) )
      {
        v89 = v40;
        v102 = 0;
        *(_OWORD *)v103 = 0;
        v104 = 0;
        sub_15AB8B0((__int64)&v102, v12, v82);
        if ( (*(_DWORD *)(v89 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v83 = *(_QWORD *)((v89 & 0xFFFFFFFFFFFFFFFELL) + 8), v39)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v89 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v27 = 1;
          goto LABEL_39;
        }
        v54 = _mm_load_si128(&v100);
        v90 = v89 & 0xFFFFFFFFFFFFFFFELL;
        v110 = *a1;
        v106[0] = (void *)0x800000000LL;
        v112 = v101;
        *((_QWORD *)&v105 + 1) = &v106[1];
        v108 = 0;
        v111 = v54;
        v115 = 0x101010000LL;
        *(_QWORD *)&v105 = 0;
        v109 = 0;
        v113 = 0;
        v114 = 3;
        sub_1A395A0((__int64)&v105);
        v55 = v86 | (*(_BYTE *)(v86 + 29) >> 5) & 3;
        v99 = v55;
        sub_1743080((__int64)&v105 + 8, v55);
        LODWORD(v105) = 2;
        sub_1A43500((__int64)&v105);
        v56 = (__m128 *)*a1;
        v57 = (_DWORD *)v90;
        v58 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v58 != 3 && v58 > 1 )
          goto LABEL_80;
        v59 = sub_BFE300(v90);
        v57 = (_DWORD *)v90;
        if ( v59 )
        {
          v62 = *(_BYTE *)(v14 + 28) & 0x7F;
          v63 = (v62 + 80) & 0x7F;
          if ( (unsigned __int8)v63 <= 3u || v62 == 32 )
          {
            v64 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL), v55, v63, v60, v61);
            v69 = sub_F63270(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL), v55, v65, v66, v67, v68);
            v57 = (_DWORD *)v90;
            v73 = (__int64)v69;
            if ( v69 )
            {
              v74 = (int *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                v74 = *(int **)v74;
              if ( !v74 )
              {
                v75 = 0;
LABEL_78:
                v88 = v57;
                v80 = sub_B70650(v73, v75);
                v56 = (__m128 *)*a1;
                if ( !v80 )
                {
                  v27 = sub_190BDA0((__int64)v56, v14, *(_QWORD *)(v14 + 48), 1, *(_DWORD *)(v14 + 24), 0, 0.0, a7);
                  goto LABEL_81;
                }
                v57 = v88;
LABEL_80:
                v27 = (__int64)sub_19CB370(
                                 v56,
                                 v57,
                                 v83,
                                 v85,
                                 v93,
                                 &v102,
                                 (__m128)0LL,
                                 a7,
                                 v92,
                                 0,
                                 (__int64)&v105,
                                 (__int64)v94,
                                 0,
                                 0,
                                 nullptr);
LABEL_81:
                sub_169D230((__int64)&v105);
LABEL_39:
                if ( HIDWORD(v103[1]) )
                  free(v103[0]);
                goto LABEL_24;
              }
              v87 = (__int64)v74;
              v75 = (__int64)(v74 - 16);
              if ( v74 == &dword_40 )
                goto LABEL_78;
              v96 = v74 - 16;
              v95 = (_DWORD *)v90;
              v91 = sub_B91570((__int64)(v69 + 8), v75, (__int64)v74, v70, v71, v72);
              v79 = sub_B91570(v87, v75, v87, v76, v77, v78);
              v57 = v95;
              v75 = (__int64)v96;
              if ( v91 != v79 )
                goto LABEL_78;
            }
          }
        }
        v56 = (__m128 *)*a1;
        goto LABEL_80;
      }
      v47 = sub_18C1370(
              *a1,
              v40 & 0xFFFFFFFFFFFFFFFELL,
              v12,
              *(double *)a6.m128_u64,
              *(double *)a7.m128_u64,
              v86,
              v14,
              v41);
      if ( v47 != 1 )
      {
        v51 = v47 & 0xFFFFFFFFFFFFFFFELL;
        v52 = (__m128 *)*a1;
        v53 = v51;
        if ( v39 || (*(_BYTE *)(v51 + 1) & 6) != 0 )
        {
LABEL_64:
          v105 = 0;
          *(_OWORD *)v106 = 0;
          v107 = 0;
          v102.m128i_i64[0] = (*(_BYTE *)(v86 + 29) >> 5) & 3 | (unsigned __int64)v86;
          v27 = sub_19C4FE0(v52, v53, v93, v85, (__int64)&v105, v14, (__m128)0LL, a7, v102.m128i_i64[0], (__int64)&v100);
          if ( HIDWORD(v106[1]) )
            free(v106[0]);
          goto LABEL_24;
        }
        v81 = sub_1A0BEA0((__int64)v52, v51, v48, v49, v50);
        if ( v81 != 1 )
        {
          v52 = (__m128 *)*a1;
          v53 = v81 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_64;
        }
      }
    }
  }
  v27 = 1;
LABEL_24:
  if ( ptr[0] != v117 )
    free(ptr[0]);
  return v27;
}
