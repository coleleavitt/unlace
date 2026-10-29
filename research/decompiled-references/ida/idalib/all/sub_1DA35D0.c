__int64 __fastcall sub_1DA35D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  const __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  const __m128i *v17; // rsi
  __int64 v18; // rax
  _WORD *v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // edx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v28; // rdx
  __int64 v29; // rbx
  int v30; // rax^4
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // r13
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __m128 *v51; // rdi
  unsigned __int64 v52; // rsi
  __int64 v53; // rax
  __m128i v54; // xmm2
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rdx
  __m128 *v58; // rdi
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  char v62; // al
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  char v78; // al
  __int64 v79; // rax
  __int64 v80; // [rsp+0h] [rbp-2C8h]
  __int64 v81; // [rsp+0h] [rbp-2C8h]
  __int64 v82; // [rsp+8h] [rbp-2C0h]
  unsigned __int8 v83; // [rsp+8h] [rbp-2C0h]
  __int64 v84; // [rsp+8h] [rbp-2C0h]
  unsigned int v85; // [rsp+14h] [rbp-2B4h]
  __int64 v86; // [rsp+18h] [rbp-2B0h]
  __int64 v87; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v88; // [rsp+20h] [rbp-2A8h]
  _QWORD *v89; // [rsp+20h] [rbp-2A8h]
  unsigned int v90; // [rsp+28h] [rbp-2A0h]
  void **v91; // [rsp+30h] [rbp-298h]
  int *v92; // [rsp+38h] [rbp-290h]
  __m128i v93; // [rsp+40h] [rbp-288h] BYREF
  __int64 v94; // [rsp+50h] [rbp-278h]
  unsigned __int64 v95; // [rsp+68h] [rbp-260h]
  __m128i v96; // [rsp+70h] [rbp-258h] BYREF
  __int64 v97; // [rsp+80h] [rbp-248h]
  __m128i v98; // [rsp+90h] [rbp-238h] BYREF
  void *v99[2]; // [rsp+A0h] [rbp-228h]
  __int128 v100; // [rsp+B0h] [rbp-218h]
  __int128 v101; // [rsp+C0h] [rbp-208h] BYREF
  void *v102[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v103; // [rsp+E0h] [rbp-1E8h]
  __int128 v104; // [rsp+118h] [rbp-1B0h]
  __int64 v105; // [rsp+128h] [rbp-1A0h]
  __int64 v106; // [rsp+130h] [rbp-198h]
  __m128i v107; // [rsp+138h] [rbp-190h]
  __int64 v108; // [rsp+148h] [rbp-180h]
  __int64 v109; // [rsp+150h] [rbp-178h]
  __int64 v110; // [rsp+158h] [rbp-170h]
  __int64 v111; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v113[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v114; // [rsp+280h] [rbp-48h]

  v9 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = *(_QWORD *)a2;
  v11 = v9;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v80 = sub_1D9F590((__int64)a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v82 = v28;
    if ( !v80 )
      return 1;
    v10 = *(_QWORD *)a2;
  }
  else
  {
    v82 = 0;
    v80 = 0;
  }
  v12 = v10 >> 16;
  v85 = 0;
  if ( (v12 & 0x40) != 0 )
    v85 = *(_DWORD *)(a2 + 16LL * ((v12 & 0x10) != 0) + 8LL * ((v12 & 0x20) != 0) + 56);
  v13 = sub_1D86580((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( !v13 )
    return 1;
  v14 = *(_QWORD *)a2;
  v15 = *(const __m128i **)(a2 + 24);
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
    v16 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
  else
    v16 = (unsigned __int64)v15 | ((unsigned __int8)v15[1].m128i_i8[13] >> 5) & 3;
  ptr[0] = (void *)v16;
  v17 = (const __m128i *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15 == v17 )
  {
    v86 = v13;
    goto LABEL_12;
  }
  v86 = sub_1D86580((__int64)a1, (__int64)v17);
  if ( !v86 )
    return 1;
  v14 = *(_QWORD *)a2;
LABEL_12:
  v18 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v19 = *(_WORD **)(a2 + 16);
    if ( v19 == (_WORD *)(v11 & 0xFFFFFFFFFFFFFFFELL) )
    {
      if ( (v14 & 0x100000) != 0 )
      {
        v17 = *(const __m128i **)(a2 + 48);
        v44 = *(_QWORD *)(a2 + 56);
      }
      else
      {
        v44 = 0;
        v17 = nullptr;
      }
      if ( v82 == v44 && (const __m128i *)v80 == v17 )
      {
        v17 = *(const __m128i **)(a2 + 24);
        if ( (const __m128i *)v13 == v17 )
        {
          v45 = (v14 & 0x200000) != 0
              ? *(_QWORD *)(a2 + 16LL * ((v14 & 0x100000) != 0) + 48)
              : v13 | (*(_BYTE *)(v13 + 29) >> 5) & 3;
          ptr[0] = (void *)v45;
          if ( v86 == (v45 & 0xFFFFFFFFFFFFFFF8LL)
            && ((v14 & 0x400000) == 0
             || !*(_DWORD *)(a2 + 16LL * ((v14 & 0x100000) != 0) + 8LL * ((v14 & 0x200000) != 0) + 48)) )
          {
            if ( (*v19 & 0x1FF) != 0x62 || !sub_1AF3130(*(_QWORD *)(v18 + 760), (__int64)v17) )
            {
              v26 = a2;
              sub_1911B60((__m128 *)*a1, a2, a6, a7);
              return v26;
            }
            v14 = *(_QWORD *)a2;
          }
        }
      }
    }
  }
  v20 = v14 >> 16;
  v114 = 0;
  ptr[0] = v113;
  ptr[1] = (void *)0x800000000LL;
  if ( (v20 & 0x40) == 0 )
    goto LABEL_93;
  v21 = a2 + 16LL * ((v20 & 0x10) != 0) + 8LL * ((v20 & 0x20) != 0);
  if ( !*(_DWORD *)(v21 + 48) )
    goto LABEL_93;
  v22 = *(_QWORD *)a2;
  v23 = 0;
  LODWORD(v114) = *(_DWORD *)(v21 + 48);
  if ( (v22 & 0x400000) != 0 )
    v23 = *(_DWORD *)(a2 + 16LL * ((v22 & 0x100000) != 0) + 8LL * ((v22 & 0x200000) != 0) + 52);
  HIDWORD(v114) = v23;
  if ( (v22 & 0x400000) != 0
    && (v43 = a2 + 16LL * ((v22 & 0x100000) != 0) + 8LL * ((v22 & 0x200000) != 0), *(_DWORD *)(v43 + 48)) )
  {
    v24 = 2LL * *(unsigned int *)(v43 + 60);
  }
  else
  {
    v24 = 0;
  }
  v25 = v22 >> 16;
  if ( (v25 & 0x40) != 0 && (v42 = 8LL * ((v25 & 0x20) != 0), *(_DWORD *)(a2 + v42 + 16LL * ((v25 & 0x10) != 0) + 48)) )
    v17 = (const __m128i *)(a2 + v42 + 16 * (((v25 & 0x10) != 0) + (unsigned __int64)((v25 & 0x40) != 0)) + 48);
  else
    v17 = nullptr;
  if ( !(unsigned __int8)sub_1DA1000(a1, v17, &v17[v24], (__int64)ptr) )
  {
LABEL_93:
    v29 = *a1;
    v30 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v17, *(double *)a6.m128_u64) >> 32;
    v31 = sub_15F0EF0(v29, v30, 0, (__m128i)a6, *(double *)a7.m128_u64);
    v34 = *(unsigned int *)(a2 + 40);
    v35 = *(_QWORD *)(a2 + 32);
    v90 = v31;
    v36 = *(_QWORD *)(a2 + 24);
    v96.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v37 = *(_QWORD *)(v36 + 40);
    v97 = v35;
    v96.m128i_i64[0] = v37;
    if ( !v37
      || (sub_1D9B710(&v93, a1, &v96, a6, a7),
          a7 = (__m128)_mm_loadu_si128(&v93),
          v96 = (__m128i)a7,
          v97 = v94,
          v93.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48) )
      {
        v91 = ptr;
      }
      else
      {
        v91 = nullptr;
      }
      v38 = (*(_QWORD *)a2 >> 16) & 8LL;
      v39 = sub_19C4DF0(*a1, (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL), (_DWORD)v38 != 0, v34, v32, v33, a6, a7);
      if ( *(_QWORD *)(v13 + 40) )
      {
        v88 = v39;
        v98 = 0;
        *(_OWORD *)v99 = 0;
        v100 = 0;
        sub_15AB8B0((__int64)&v98, v80, v82);
        v41 = v88 & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(_DWORD *)(v88 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v81 = *(_QWORD *)((v88 & 0xFFFFFFFFFFFFFFFELL) + 8), (_BYTE)v38)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v88 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v26 = 1;
          goto LABEL_39;
        }
        v53 = *a1;
        v54 = _mm_load_si128(&v96);
        v102[0] = (void *)0x800000000LL;
        v106 = v53;
        *((_QWORD *)&v101 + 1) = &v102[1];
        v108 = v97;
        v111 = 0x101010000LL;
        *(_QWORD *)&v101 = 0;
        v104 = 0;
        v105 = 0;
        v107 = v54;
        v109 = 0;
        v110 = 3;
        sub_1A395A0((__int64)&v101);
        v83 = *(_BYTE *)(v86 + 29);
        v55 = LODWORD(v102[0]);
        v56 = (v83 >> 5) & 3 | (unsigned __int64)v86;
        v95 = v56;
        v57 = LODWORD(v102[0]) + 1LL;
        if ( v57 > HIDWORD(v102[0]) )
        {
          sub_2237220((char *)&v101 + 8, &v102[1], v57, 8);
          v55 = LODWORD(v102[0]);
          v56 = (v83 >> 5) & 3 | (unsigned __int64)v86;
        }
        *(_QWORD *)(*((_QWORD *)&v101 + 1) + 8 * v55) = v56;
        LODWORD(v101) = 2;
        ++LODWORD(v102[0]);
        sub_1A43500((__int64)&v101);
        v58 = (__m128 *)*a1;
        v59 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v59 != 3 && v59 > 1 )
          goto LABEL_81;
        if ( (unsigned __int8)sub_BFE300(v41) )
        {
          v62 = *(_BYTE *)(v13 + 28) & 0x7F;
          v63 = (v62 + 80) & 0x7F;
          if ( (unsigned __int8)v63 <= 3u || v62 == 32 )
          {
            v64 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v102[1], v63, v60, v61);
            v69 = sub_F63270(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v102[1], v65, v66, v67, v68);
            if ( v69 )
            {
              v72 = (int *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
                v72 = *(int **)v72;
              if ( !v72 )
              {
                v73 = 0;
                goto LABEL_80;
              }
              v84 = (__int64)v72;
              v73 = (__int64)(v72 - 16);
              if ( v72 == &dword_40
                || (v92 = v72 - 16,
                    v89 = v69,
                    v87 = sub_B91570((__int64)(v69 + 8), v73, (__int64)v69, (__int64)v72, v70, v71),
                    v77 = sub_B91570(v84, v73, v74, v84, v75, v76),
                    v69 = v89,
                    v73 = (__int64)v92,
                    v87 != v77) )
              {
LABEL_80:
                v78 = sub_B70650((__int64)v69, v73);
                v58 = (__m128 *)*a1;
                if ( !v78 )
                {
                  v26 = sub_190BDA0((__int64)v58, v13, *(_QWORD *)(v13 + 48), 1, *(_DWORD *)(v13 + 24), 0, 0.0, a7);
                  goto LABEL_82;
                }
LABEL_81:
                v26 = (__int64)sub_19CB370(
                                 v58,
                                 (_DWORD *)v41,
                                 v81,
                                 v90,
                                 (_DWORD)v38 != 0,
                                 &v98,
                                 (__m128)0LL,
                                 a7,
                                 v85,
                                 0,
                                 (__int64)&v101,
                                 (__int64)v91,
                                 0,
                                 0,
                                 nullptr);
LABEL_82:
                sub_169D230((__int64)&v101);
LABEL_39:
                if ( HIDWORD(v99[1]) )
                  free(v99[0]);
                goto LABEL_24;
              }
            }
          }
        }
        v58 = (__m128 *)*a1;
        goto LABEL_81;
      }
      v46 = sub_18C1370(
              *a1,
              v39 & 0xFFFFFFFFFFFFFFFELL,
              v80,
              *(double *)a6.m128_u64,
              *(double *)a7.m128_u64,
              v86,
              v13,
              v40);
      if ( v46 != 1 )
      {
        v50 = v46 & 0xFFFFFFFFFFFFFFFELL;
        v51 = (__m128 *)*a1;
        v52 = v50;
        if ( (_BYTE)v38 || (*(_BYTE *)(v50 + 1) & 6) != 0 )
        {
LABEL_64:
          v101 = 0;
          *(_OWORD *)v102 = 0;
          v103 = 0;
          v98.m128i_i64[0] = (*(_BYTE *)(v86 + 29) >> 5) & 3 | (unsigned __int64)v86;
          v26 = sub_19C4FE0(
                  v51,
                  v52,
                  (_DWORD)v38 != 0,
                  v90,
                  (__int64)&v101,
                  v13,
                  (__m128)0LL,
                  a7,
                  v98.m128i_i64[0],
                  (__int64)&v96);
          if ( HIDWORD(v102[1]) )
            free(v102[0]);
          goto LABEL_24;
        }
        v79 = sub_1A0BEA0((__int64)v51, v50, v47, v48, v49);
        if ( v79 != 1 )
        {
          v51 = (__m128 *)*a1;
          v52 = v79 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_64;
        }
      }
    }
  }
  v26 = 1;
LABEL_24:
  if ( ptr[0] != v113 )
    free(ptr[0]);
  return v26;
}
