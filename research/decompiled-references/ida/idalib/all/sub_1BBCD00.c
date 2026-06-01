__int64 __fastcall sub_1BBCD00(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
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
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v28; // rdx
  int v29; // rax^4
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdx
  unsigned __int64 v46; // rdi
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
  __m128 *v82; // rdi
  __int64 v83; // [rsp+0h] [rbp-2C8h]
  __int64 v84; // [rsp+0h] [rbp-2C8h]
  __int64 v85; // [rsp+8h] [rbp-2C0h]
  unsigned int v86; // [rsp+8h] [rbp-2C0h]
  __int64 v87; // [rsp+10h] [rbp-2B8h]
  __int64 v88; // [rsp+10h] [rbp-2B8h]
  _DWORD *v89; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 v90; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v91; // [rsp+18h] [rbp-2B0h]
  __int64 v92; // [rsp+18h] [rbp-2B0h]
  unsigned int v93; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v94; // [rsp+24h] [rbp-2A4h]
  void **v95; // [rsp+28h] [rbp-2A0h]
  _DWORD *v96; // [rsp+30h] [rbp-298h]
  int *v97; // [rsp+38h] [rbp-290h]
  __m128i v98; // [rsp+40h] [rbp-288h] BYREF
  __int64 v99; // [rsp+50h] [rbp-278h]
  __int64 v100; // [rsp+68h] [rbp-260h]
  __m128i v101; // [rsp+70h] [rbp-258h] BYREF
  __int64 v102; // [rsp+80h] [rbp-248h]
  __m128i v103; // [rsp+90h] [rbp-238h] BYREF
  void *v104[2]; // [rsp+A0h] [rbp-228h]
  __int128 v105; // [rsp+B0h] [rbp-218h]
  __int128 v106; // [rsp+C0h] [rbp-208h] BYREF
  void *v107[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v108; // [rsp+E0h] [rbp-1E8h]
  __int128 v109; // [rsp+118h] [rbp-1B0h]
  __int64 v110; // [rsp+128h] [rbp-1A0h]
  __int64 v111; // [rsp+130h] [rbp-198h]
  __m128i v112; // [rsp+138h] [rbp-190h]
  __int64 v113; // [rsp+148h] [rbp-180h]
  __int64 v114; // [rsp+150h] [rbp-178h]
  __int64 v115; // [rsp+158h] [rbp-170h]
  __int64 v116; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v118[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v119; // [rsp+280h] [rbp-48h]

  v9 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = v9;
  v11 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v12 = sub_1BB75E0(a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v83 = v28;
    if ( !v12 )
      return 1;
    v11 = *(_QWORD *)a2;
  }
  else
  {
    v83 = 0;
    v12 = 0;
  }
  v13 = v11 >> 16;
  v93 = 0;
  if ( (v13 & 0x40) != 0 )
    v93 = *(_DWORD *)(a2 + 16LL * ((v13 & 0x10) != 0) + 8LL * ((v13 & 0x20) != 0) + 56);
  v14 = sub_1B03C10((__int64)a1, *(_QWORD *)(a2 + 24));
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
    v87 = v14;
    goto LABEL_12;
  }
  v87 = sub_1B03C10((__int64)a1, (__int64)v18);
  if ( !v87 )
    return 1;
  v15 = *(_QWORD *)a2;
LABEL_12:
  v19 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v18 = *(const __m128i **)(a2 + 16);
    if ( v18 == (const __m128i *)(v10 & 0xFFFFFFFFFFFFFFFELL) )
    {
      if ( (v15 & 0x100000) != 0 )
      {
        v44 = *(_QWORD *)(a2 + 48);
        v43 = *(_QWORD *)(a2 + 56);
      }
      else
      {
        v43 = 0;
        v44 = 0;
      }
      if ( v83 == v43 && v12 == v44 )
      {
        v45 = *(_QWORD *)(a2 + 24);
        if ( v14 == v45 )
        {
          v46 = (v15 & 0x200000) != 0
              ? *(_QWORD *)(a2 + 16LL * ((v15 & 0x100000) != 0) + 48)
              : v14 | (*(_BYTE *)(v14 + 29) >> 5) & 3;
          ptr[0] = (void *)v46;
          if ( v87 == (v46 & 0xFFFFFFFFFFFFFFF8LL)
            && ((v15 & 0x400000) == 0
             || !*(_DWORD *)(a2 + 16LL * ((v15 & 0x100000) != 0) + 8LL * ((v15 & 0x200000) != 0) + 48)) )
          {
            if ( (v18->m128i_i16[0] & 0x1FF) != 0x62
              || (*(_BYTE *)(v45 + 28) & 0x7Fu) - 49 > 2
              || (v18 = *(const __m128i **)(*(_QWORD *)(v19 + 760) + 8LL),
                  sub_1AF1480(
                    (__int64)ptr,
                    (__int64)v18,
                    v45,
                    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE6990,
                    (__int64)&v106,
                    v18[1716].m128i_i32[0] != 106,
                    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1AE9800,
                    (__int64)&v103),
                  HIDWORD(ptr[0]) == 106) )
            {
              v82 = (__m128 *)*a1;
              v26 = a2;
              sub_1911B60(v82, a2, a6, a7);
              return v26;
            }
            v15 = *(_QWORD *)a2;
          }
        }
      }
    }
  }
  v20 = v15 >> 16;
  v119 = 0;
  ptr[0] = v118;
  ptr[1] = (void *)0x800000000LL;
  if ( (v20 & 0x40) == 0 )
    goto LABEL_93;
  v21 = a2 + 16LL * ((v20 & 0x10) != 0) + 8LL * ((v20 & 0x20) != 0);
  if ( !*(_DWORD *)(v21 + 48) )
    goto LABEL_93;
  v22 = 0;
  LODWORD(v119) = *(_DWORD *)(v21 + 48);
  v23 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x400000LL) != 0 )
    v22 = *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 52);
  HIDWORD(v119) = v22;
  if ( (v23 & 0x400000) != 0
    && (v42 = a2 + 16LL * ((v23 & 0x100000) != 0) + 8LL * ((v23 & 0x200000) != 0), *(_DWORD *)(v42 + 48)) )
  {
    v24 = 2LL * *(unsigned int *)(v42 + 60);
  }
  else
  {
    v24 = 0;
  }
  v25 = v23 >> 16;
  if ( (v25 & 0x40) != 0 && (v41 = 8LL * ((v25 & 0x20) != 0), *(_DWORD *)(a2 + v41 + 16LL * ((v25 & 0x10) != 0) + 48)) )
    v18 = (const __m128i *)(a2 + v41 + 16 * (((v25 & 0x10) != 0) + (unsigned __int64)((v25 & 0x40) != 0)) + 48);
  else
    v18 = nullptr;
  if ( !(unsigned __int8)sub_1BB9400(a1, v18, &v18[v24], (__int64)ptr) )
  {
LABEL_93:
    v85 = *a1;
    v29 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v18, *(double *)a6.m128_u64) >> 32;
    v30 = sub_15F0EF0(v85, v29, 0, (__m128i)a6, *(double *)a7.m128_u64);
    v33 = *(unsigned int *)(a2 + 40);
    v34 = *(_QWORD *)(a2 + 32);
    v86 = v30;
    v35 = *(_QWORD *)(a2 + 24);
    v101.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v36 = *(_QWORD *)(v35 + 40);
    v102 = v34;
    v101.m128i_i64[0] = v36;
    if ( !v36
      || (sub_1BB3800(&v98, a1, &v101, a6, a7),
          a7 = (__m128)_mm_loadu_si128(&v98),
          v101 = (__m128i)a7,
          v102 = v99,
          v98.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && (v33 = 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0),
            *(_DWORD *)(a2 + v33 + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48)) )
      {
        v95 = ptr;
      }
      else
      {
        v95 = nullptr;
      }
      v37 = (*(_QWORD *)a2 >> 16) & 8LL;
      v38 = WORD1(*(_QWORD *)a2) & 8;
      v94 = v37 != 0;
      v39 = sub_19C4DF0(*a1, (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL), (_DWORD)v37 != 0, v33, v31, v32, a6, a7);
      if ( *(_QWORD *)(v14 + 40) )
      {
        v90 = v39;
        v103 = 0;
        *(_OWORD *)v104 = 0;
        v105 = 0;
        sub_15AB8B0((__int64)&v103, v12, v83);
        if ( (*(_DWORD *)(v90 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v84 = *(_QWORD *)((v90 & 0xFFFFFFFFFFFFFFFELL) + 8), v38)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v90 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v26 = 1;
          goto LABEL_39;
        }
        v54 = _mm_load_si128(&v101);
        v91 = v90 & 0xFFFFFFFFFFFFFFFELL;
        v111 = *a1;
        v107[0] = (void *)0x800000000LL;
        v113 = v102;
        *((_QWORD *)&v106 + 1) = &v107[1];
        v109 = 0;
        v112 = v54;
        v116 = 0x101010000LL;
        *(_QWORD *)&v106 = 0;
        v110 = 0;
        v114 = 0;
        v115 = 3;
        sub_1A395A0((__int64)&v106);
        v55 = v87 | (*(_BYTE *)(v87 + 29) >> 5) & 3;
        v100 = v55;
        sub_1743080((__int64)&v106 + 8, v55);
        LODWORD(v106) = 2;
        sub_1A43500((__int64)&v106);
        v56 = (__m128 *)*a1;
        v57 = (_DWORD *)v91;
        v58 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v58 != 3 && v58 > 1 )
          goto LABEL_82;
        v59 = sub_BFE300(v91);
        v57 = (_DWORD *)v91;
        if ( v59 )
        {
          v62 = *(_BYTE *)(v14 + 28) & 0x7F;
          v63 = (v62 + 80) & 0x7F;
          if ( (unsigned __int8)v63 <= 3u || v62 == 32 )
          {
            v64 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF0LL), v55, v63, v60, v61);
            v69 = sub_F63270(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL), v55, v65, v66, v67, v68);
            v57 = (_DWORD *)v91;
            v73 = (__int64)v69;
            if ( v69 )
            {
              v74 = (int *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                v74 = *(int **)v74;
              if ( !v74 )
              {
                v75 = 0;
LABEL_80:
                v89 = v57;
                v80 = sub_B70650(v73, v75);
                v56 = (__m128 *)*a1;
                if ( !v80 )
                {
                  v26 = sub_190BDA0((__int64)v56, v14, *(_QWORD *)(v14 + 48), 1, *(_DWORD *)(v14 + 24), 0, 0.0, a7);
                  goto LABEL_83;
                }
                v57 = v89;
LABEL_82:
                v26 = (__int64)sub_19CB370(
                                 v56,
                                 v57,
                                 v84,
                                 v86,
                                 v94,
                                 &v103,
                                 (__m128)0LL,
                                 a7,
                                 v93,
                                 0,
                                 (__int64)&v106,
                                 (__int64)v95,
                                 0,
                                 0,
                                 nullptr);
LABEL_83:
                sub_169D230((__int64)&v106);
LABEL_39:
                if ( HIDWORD(v104[1]) )
                  free(v104[0]);
                goto LABEL_24;
              }
              v88 = (__int64)v74;
              v75 = (__int64)(v74 - 16);
              if ( v74 == &dword_40 )
                goto LABEL_80;
              v97 = v74 - 16;
              v96 = (_DWORD *)v91;
              v92 = sub_B91570((__int64)(v69 + 8), v75, (__int64)v74, v70, v71, v72);
              v79 = sub_B91570(v88, v75, v88, v76, v77, v78);
              v57 = v96;
              v75 = (__int64)v97;
              if ( v92 != v79 )
                goto LABEL_80;
            }
          }
        }
        v56 = (__m128 *)*a1;
        goto LABEL_82;
      }
      v47 = sub_18C1370(
              *a1,
              v39 & 0xFFFFFFFFFFFFFFFELL,
              v12,
              *(double *)a6.m128_u64,
              *(double *)a7.m128_u64,
              v87,
              v14,
              v40);
      if ( v47 != 1 )
      {
        v51 = v47 & 0xFFFFFFFFFFFFFFFELL;
        v52 = (__m128 *)*a1;
        v53 = v51;
        if ( v38 || (*(_BYTE *)(v51 + 1) & 6) != 0 )
        {
LABEL_66:
          v106 = 0;
          *(_OWORD *)v107 = 0;
          v108 = 0;
          v103.m128i_i64[0] = (*(_BYTE *)(v87 + 29) >> 5) & 3 | (unsigned __int64)v87;
          v26 = sub_19C4FE0(v52, v53, v94, v86, (__int64)&v106, v14, (__m128)0LL, a7, v103.m128i_i64[0], (__int64)&v101);
          if ( HIDWORD(v107[1]) )
            free(v107[0]);
          goto LABEL_24;
        }
        v81 = sub_1A0BEA0((__int64)v52, v51, v48, v49, v50);
        if ( v81 != 1 )
        {
          v52 = (__m128 *)*a1;
          v53 = v81 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_66;
        }
      }
    }
  }
  v26 = 1;
LABEL_24:
  if ( ptr[0] != v118 )
    free(ptr[0]);
  return v26;
}
