__int64 __fastcall sub_1D02050(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  const __m128i *v16; // rdx
  unsigned __int64 v17; // rsi
  const __m128i *v18; // rsi
  __int64 v19; // r12
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v28; // rdx
  int v29; // rax^4
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // al
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __m128 *v50; // rdi
  unsigned __int64 v51; // rsi
  __m128i v52; // xmm2
  __int64 v53; // rsi
  __m128 *v54; // rdi
  _DWORD *v55; // r10
  unsigned int v56; // eax
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // r8
  char v60; // al
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  int *v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  char v78; // al
  __int64 v79; // rax
  __int64 v80; // [rsp+0h] [rbp-2C8h]
  __int64 v81; // [rsp+0h] [rbp-2C8h]
  __int64 v82; // [rsp+8h] [rbp-2C0h]
  unsigned int v83; // [rsp+8h] [rbp-2C0h]
  _WORD *v84; // [rsp+8h] [rbp-2C0h]
  __int64 v85; // [rsp+10h] [rbp-2B8h]
  __int64 v86; // [rsp+10h] [rbp-2B8h]
  _DWORD *v87; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 v88; // [rsp+18h] [rbp-2B0h]
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

  v9 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = *(_QWORD *)a2;
  v11 = v9;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v12 = sub_1CFE3D0((__int64)a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v80 = v28;
    if ( !v12 )
      return 1;
    v10 = *(_QWORD *)a2;
  }
  else
  {
    v80 = 0;
    v12 = 0;
  }
  v13 = v10 >> 16;
  v92 = 0;
  if ( (v13 & 0x40) != 0 )
    v92 = *(_DWORD *)(a2 + 16LL * ((v13 & 0x10) != 0) + 8LL * ((v13 & 0x20) != 0) + 56);
  v14 = sub_1CB9120((__int64)a1, *(_QWORD *)(a2 + 24));
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
    v85 = v14;
    goto LABEL_12;
  }
  v85 = sub_1CB9120((__int64)a1, (__int64)v18);
  if ( !v85 )
    return 1;
  v15 = *(_QWORD *)a2;
LABEL_12:
  v19 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == (v11 & 0xFFFFFFFFFFFFFFFELL) )
  {
    if ( (v15 & 0x100000) != 0 )
    {
      v42 = *(_QWORD *)(a2 + 48);
      v18 = *(const __m128i **)(a2 + 56);
    }
    else
    {
      v18 = nullptr;
      v42 = 0;
    }
    if ( v12 == v42 && (const __m128i *)v80 == v18 && v14 == *(_QWORD *)(a2 + 24) )
    {
      v89 = v15;
      v84 = *(_WORD **)(a2 + 16);
      v43 = sub_18C0340((_QWORD *)a2);
      v15 = v89;
      ptr[0] = (void *)v43;
      if ( v85 == (v43 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v44 = sub_18C0370((_QWORD *)a2);
        v15 = v89;
        if ( !v44 )
        {
          if ( (*v84 & 0x1FF) != 0x62 || (v18 = (const __m128i *)v14, !sub_1AF3130(*(_QWORD *)(v19 + 760), v14)) )
          {
            v26 = a2;
            sub_1911B60((__m128 *)*a1, a2, a6, a7);
            return v26;
          }
          v15 = *(_QWORD *)a2;
        }
      }
    }
  }
  v20 = v15 >> 16;
  v118 = 0;
  ptr[0] = v117;
  ptr[1] = (void *)0x800000000LL;
  if ( (v20 & 0x40) == 0 )
    goto LABEL_88;
  v21 = a2 + 16LL * ((v20 & 0x10) != 0) + 8LL * ((v20 & 0x20) != 0);
  if ( !*(_DWORD *)(v21 + 48) )
    goto LABEL_88;
  v22 = *(_QWORD *)a2;
  v23 = 0;
  LODWORD(v118) = *(_DWORD *)(v21 + 48);
  if ( (v22 & 0x400000) != 0 )
    v23 = *(_DWORD *)(a2 + 16LL * ((v22 & 0x100000) != 0) + 8LL * ((v22 & 0x200000) != 0) + 52);
  HIDWORD(v118) = v23;
  if ( (v22 & 0x400000) != 0
    && (v41 = a2 + 16LL * ((v22 & 0x100000) != 0) + 8LL * ((v22 & 0x200000) != 0), *(_DWORD *)(v41 + 48)) )
  {
    v24 = 2LL * *(unsigned int *)(v41 + 60);
  }
  else
  {
    v24 = 0;
  }
  v25 = v22 >> 16;
  if ( (v25 & 0x40) != 0 && (v40 = 8LL * ((v25 & 0x20) != 0), *(_DWORD *)(a2 + v40 + 16LL * ((v25 & 0x10) != 0) + 48)) )
    v18 = (const __m128i *)(a2 + v40 + 16 * (((v25 & 0x10) != 0) + (unsigned __int64)((v25 & 0x40) != 0)) + 48);
  else
    v18 = nullptr;
  if ( !(unsigned __int8)sub_1D004D0((unsigned int *)a1, v18, &v18[v24], (__int64)ptr) )
  {
LABEL_88:
    v82 = *a1;
    v29 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v18, *(double *)a6.m128_u64) >> 32;
    v30 = sub_15F0EF0(v82, v29, 0, (__m128i)a6, *(double *)a7.m128_u64);
    v33 = *(_QWORD *)(a2 + 32);
    v83 = v30;
    v34 = *(_QWORD *)(a2 + 24);
    v100.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v35 = *(_QWORD *)(v34 + 40);
    v101 = v33;
    v100.m128i_i64[0] = v35;
    if ( !v35
      || (sub_1CF74E0(&v97, (__int64)a1, &v100, a6, a7),
          a7 = (__m128)_mm_loadu_si128(&v97),
          v100 = (__m128i)a7,
          v101 = v98,
          v97.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48) )
      {
        v94 = ptr;
      }
      else
      {
        v94 = nullptr;
      }
      v36 = *(_QWORD *)a2 >> 16;
      v37 = v36 & 8;
      v93 = (v36 & 8) != 0;
      v38 = sub_19C4DF0(*a1, (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL), (v36 & 8) != 0, v36, v31, v32, a6, a7);
      if ( *(_QWORD *)(v14 + 40) )
      {
        v88 = v38;
        v102 = 0;
        *(_OWORD *)v103 = 0;
        v104 = 0;
        sub_15AB8B0((__int64)&v102, v12, v80);
        if ( (*(_DWORD *)(v88 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v81 = *(_QWORD *)((v88 & 0xFFFFFFFFFFFFFFFELL) + 8), v37)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v88 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v26 = 1;
          goto LABEL_39;
        }
        v52 = _mm_load_si128(&v100);
        v90 = v88 & 0xFFFFFFFFFFFFFFFELL;
        v110 = *a1;
        v106[0] = (void *)0x800000000LL;
        v112 = v101;
        *((_QWORD *)&v105 + 1) = &v106[1];
        v108 = 0;
        v111 = v52;
        v115 = 0x101010000LL;
        *(_QWORD *)&v105 = 0;
        v109 = 0;
        v113 = 0;
        v114 = 3;
        sub_1A395A0((__int64)&v105);
        v53 = v85 | (*(_BYTE *)(v85 + 29) >> 5) & 3;
        v99 = v53;
        sub_1743080((__int64)&v105 + 8, v53);
        LODWORD(v105) = 2;
        sub_1A43500((__int64)&v105);
        v54 = (__m128 *)*a1;
        v55 = (_DWORD *)v90;
        v56 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v56 != 3 && v56 > 1 )
          goto LABEL_77;
        v57 = sub_BFE300(v90);
        v55 = (_DWORD *)v90;
        if ( v57 )
        {
          v60 = *(_BYTE *)(v14 + 28) & 0x7F;
          v61 = (v60 + 80) & 0x7F;
          if ( (unsigned __int8)v61 <= 3u || v60 == 32 )
          {
            v62 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL), v53, v61, v58, v59);
            v67 = sub_F63270(*(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL), v53, v63, v64, v65, v66);
            v55 = (_DWORD *)v90;
            v71 = (__int64)v67;
            if ( v67 )
            {
              v72 = (int *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                v72 = *(int **)v72;
              if ( !v72 )
              {
                v73 = 0;
LABEL_75:
                v87 = v55;
                v78 = sub_B70650(v71, v73);
                v54 = (__m128 *)*a1;
                if ( !v78 )
                {
                  v26 = sub_190BDA0((__int64)v54, v14, *(_QWORD *)(v14 + 48), 1, *(_DWORD *)(v14 + 24), 0, 0.0, a7);
                  goto LABEL_78;
                }
                v55 = v87;
LABEL_77:
                v26 = (__int64)sub_19CB370(
                                 v54,
                                 v55,
                                 v81,
                                 v83,
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
LABEL_78:
                sub_169D230((__int64)&v105);
LABEL_39:
                if ( HIDWORD(v103[1]) )
                  free(v103[0]);
                goto LABEL_24;
              }
              v86 = (__int64)v72;
              v73 = (__int64)(v72 - 16);
              if ( v72 == &dword_40 )
                goto LABEL_75;
              v96 = v72 - 16;
              v95 = (_DWORD *)v90;
              v91 = sub_B91570((__int64)(v67 + 8), v73, (__int64)v72, v68, v69, v70);
              v77 = sub_B91570(v86, v73, v86, v74, v75, v76);
              v55 = v95;
              v73 = (__int64)v96;
              if ( v91 != v77 )
                goto LABEL_75;
            }
          }
        }
        v54 = (__m128 *)*a1;
        goto LABEL_77;
      }
      v45 = sub_18C1370(
              *a1,
              v38 & 0xFFFFFFFFFFFFFFFELL,
              v12,
              *(double *)a6.m128_u64,
              *(double *)a7.m128_u64,
              v85,
              v14,
              v39);
      if ( v45 != 1 )
      {
        v49 = v45 & 0xFFFFFFFFFFFFFFFELL;
        v50 = (__m128 *)*a1;
        v51 = v49;
        if ( v37 || (*(_BYTE *)(v49 + 1) & 6) != 0 )
        {
LABEL_61:
          v105 = 0;
          *(_OWORD *)v106 = 0;
          v107 = 0;
          v102.m128i_i64[0] = (*(_BYTE *)(v85 + 29) >> 5) & 3 | (unsigned __int64)v85;
          v26 = sub_19C4FE0(v50, v51, v93, v83, (__int64)&v105, v14, (__m128)0LL, a7, v102.m128i_i64[0], (__int64)&v100);
          if ( HIDWORD(v106[1]) )
            free(v106[0]);
          goto LABEL_24;
        }
        v79 = sub_1A0BEA0((__int64)v50, v49, v46, v47, v48);
        if ( v79 != 1 )
        {
          v50 = (__m128 *)*a1;
          v51 = v79 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_61;
        }
      }
    }
  }
  v26 = 1;
LABEL_24:
  if ( ptr[0] != v117 )
    free(ptr[0]);
  return v26;
}
