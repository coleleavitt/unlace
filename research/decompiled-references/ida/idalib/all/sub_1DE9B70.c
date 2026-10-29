__int64 __fastcall sub_1DE9B70(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int16 *v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  _WORD *v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  int v30; // edx
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rbp
  __int64 v35; // rdx
  __int64 v36; // rbx
  int v37; // rax^4
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // r13
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  __m128 *v58; // rdi
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  __m128i v61; // xmm2
  __int64 v62; // rax
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rdx
  __m128 *v65; // rdi
  unsigned int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // r8
  char v69; // al
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _QWORD *v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  int *v79; // rcx
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  char v85; // al
  __int64 v86; // rax
  __int64 v87; // [rsp+0h] [rbp-2C8h]
  __int64 v88; // [rsp+0h] [rbp-2C8h]
  __int64 v89; // [rsp+8h] [rbp-2C0h]
  unsigned __int8 v90; // [rsp+8h] [rbp-2C0h]
  __int64 v91; // [rsp+8h] [rbp-2C0h]
  unsigned int v92; // [rsp+14h] [rbp-2B4h]
  unsigned __int64 v93; // [rsp+18h] [rbp-2B0h]
  __int64 v94; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v95; // [rsp+20h] [rbp-2A8h]
  _QWORD *v96; // [rsp+20h] [rbp-2A8h]
  unsigned int v97; // [rsp+28h] [rbp-2A0h]
  void **v98; // [rsp+30h] [rbp-298h]
  int *v99; // [rsp+38h] [rbp-290h]
  __m128i v100; // [rsp+40h] [rbp-288h] BYREF
  __int64 v101; // [rsp+50h] [rbp-278h]
  unsigned __int64 v102; // [rsp+68h] [rbp-260h]
  __m128i v103; // [rsp+70h] [rbp-258h] BYREF
  __int64 v104; // [rsp+80h] [rbp-248h]
  __m128i v105; // [rsp+90h] [rbp-238h] BYREF
  void *v106[2]; // [rsp+A0h] [rbp-228h]
  __int128 v107; // [rsp+B0h] [rbp-218h]
  __int128 v108; // [rsp+C0h] [rbp-208h] BYREF
  void *v109[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v110; // [rsp+E0h] [rbp-1E8h]
  __int128 v111; // [rsp+118h] [rbp-1B0h]
  __int64 v112; // [rsp+128h] [rbp-1A0h]
  __int64 v113; // [rsp+130h] [rbp-198h]
  __m128i v114; // [rsp+138h] [rbp-190h]
  __int64 v115; // [rsp+148h] [rbp-180h]
  __int64 v116; // [rsp+150h] [rbp-178h]
  __int64 v117; // [rsp+158h] [rbp-170h]
  __int64 v118; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v120[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v121; // [rsp+280h] [rbp-48h]

  v10 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = *(_QWORD *)a2;
  v15 = v10;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v87 = sub_1DD3CF0((__int64)a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v89 = v35;
    if ( !v87 )
      return 1;
    v14 = *(_QWORD *)a2;
  }
  else
  {
    v89 = 0;
    v87 = 0;
  }
  v16 = v14 >> 16;
  v92 = 0;
  if ( (v16 & 0x40) != 0 )
    v92 = *(_DWORD *)(a2 + 16LL * ((v16 & 0x10) != 0) + 8LL * ((v16 & 0x20) != 0) + 56);
  v17 = *(unsigned int *)(a2 + 40);
  v20 = sub_1DD8310((__int64)a1, v17, *(_QWORD *)(a2 + 24), v11, v12, v13, a7, a8);
  if ( !v20 )
    return 1;
  v21 = *(_QWORD *)a2;
  v22 = *(_QWORD *)(a2 + 24);
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
    v23 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
  else
    v23 = v22 | (*(_BYTE *)(v22 + 29) >> 5) & 3;
  ptr[0] = (void *)v23;
  v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v22 == v24 )
  {
    v93 = v20;
    goto LABEL_12;
  }
  v17 = *(unsigned int *)(a2 + 40);
  v93 = sub_1DD8310((__int64)a1, v17, v24, v22, v18, v19, a7, a8);
  if ( !v93 )
    return 1;
  v21 = *(_QWORD *)a2;
LABEL_12:
  v25 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v26 = *(_WORD **)(a2 + 16);
    if ( v26 == (_WORD *)((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL) )
    {
      if ( (v21 & 0x100000) != 0 )
      {
        v17 = *(_QWORD *)(a2 + 48);
        v51 = *(_QWORD *)(a2 + 56);
      }
      else
      {
        v51 = 0;
        v17 = 0;
      }
      if ( v89 == v51 && v87 == v17 )
      {
        v17 = *(_QWORD *)(a2 + 24);
        if ( v20 == v17 )
        {
          v52 = (v21 & 0x200000) != 0
              ? *(_QWORD *)(a2 + 16LL * ((v21 & 0x100000) != 0) + 48)
              : v20 | (*(_BYTE *)(v20 + 29) >> 5) & 3;
          ptr[0] = (void *)v52;
          if ( v93 == (v52 & 0xFFFFFFFFFFFFFFF8LL)
            && ((v21 & 0x400000) == 0
             || !*(_DWORD *)(a2 + 16LL * ((v21 & 0x100000) != 0) + 8LL * ((v21 & 0x200000) != 0) + 48)) )
          {
            if ( (*v26 & 0x1FF) != 0x62 || !sub_1AF3130(*(_QWORD *)(v25 + 760), v17) )
            {
              v33 = a2;
              sub_1911B60((__m128 *)*a1, a2, a7, a8);
              return v33;
            }
            v21 = *(_QWORD *)a2;
          }
        }
      }
    }
  }
  v27 = v21 >> 16;
  v121 = 0;
  ptr[0] = v120;
  ptr[1] = (void *)0x800000000LL;
  if ( (v27 & 0x40) == 0 )
    goto LABEL_93;
  v28 = a2 + 16LL * ((v27 & 0x10) != 0) + 8LL * ((v27 & 0x20) != 0);
  if ( !*(_DWORD *)(v28 + 48) )
    goto LABEL_93;
  v29 = *(_QWORD *)a2;
  v30 = 0;
  LODWORD(v121) = *(_DWORD *)(v28 + 48);
  if ( (v29 & 0x400000) != 0 )
    v30 = *(_DWORD *)(a2 + 16LL * ((v29 & 0x100000) != 0) + 8LL * ((v29 & 0x200000) != 0) + 52);
  HIDWORD(v121) = v30;
  if ( (v29 & 0x400000) != 0
    && (v50 = a2 + 16LL * ((v29 & 0x100000) != 0) + 8LL * ((v29 & 0x200000) != 0), *(_DWORD *)(v50 + 48)) )
  {
    v31 = 32LL * *(unsigned int *)(v50 + 60);
  }
  else
  {
    v31 = 0;
  }
  v32 = v29 >> 16;
  if ( (v32 & 0x40) != 0 && (v49 = 8LL * ((v32 & 0x20) != 0), *(_DWORD *)(a2 + v49 + 16LL * ((v32 & 0x10) != 0) + 48)) )
    v17 = a2 + v49 + 16 * (((v32 & 0x10) != 0) + (unsigned __int64)((v32 & 0x40) != 0)) + 48;
  else
    v17 = 0;
  if ( !(unsigned __int8)sub_1DD6C30(a1, (const __m128i *)v17, (const __m128i *)(v17 + v31), (__int64)ptr, a7, a8) )
  {
LABEL_93:
    v36 = *a1;
    v37 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), v17, *(double *)a7.m128_u64) >> 32;
    v38 = sub_15F0EF0(v36, v37, 0, (__m128i)a7, *(double *)a8.m128_u64);
    v41 = *(unsigned int *)(a2 + 40);
    v42 = *(_QWORD *)(a2 + 32);
    v97 = v38;
    v43 = *(_QWORD *)(a2 + 24);
    v103.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v44 = *(_QWORD *)(v43 + 40);
    v104 = v42;
    v103.m128i_i64[0] = v44;
    if ( !v44
      || (sub_1DD8C40(&v100, (__int64)a1, &v103, a7, a8, v41, v39, v40),
          a8 = (__m128)_mm_loadu_si128(&v100),
          v103 = (__m128i)a8,
          v104 = v101,
          v100.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48) )
      {
        v98 = ptr;
      }
      else
      {
        v98 = nullptr;
      }
      v45 = (*(_QWORD *)a2 >> 16) & 8LL;
      v46 = sub_19C4DF0(
              *a1,
              (_QWORD *)((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL),
              (_DWORD)v45 != 0,
              v41,
              v39,
              v40,
              a7,
              a8);
      if ( *(_QWORD *)(v20 + 40) )
      {
        v95 = v46;
        v105 = 0;
        *(_OWORD *)v106 = 0;
        v107 = 0;
        sub_15AB8B0((__int64)&v105, v87, v89);
        v48 = v95 & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(_DWORD *)(v95 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v88 = *(_QWORD *)((v95 & 0xFFFFFFFFFFFFFFFELL) + 8), (_BYTE)v45)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v95 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v33 = 1;
          goto LABEL_39;
        }
        v60 = *a1;
        v61 = _mm_load_si128(&v103);
        v109[0] = (void *)0x800000000LL;
        v113 = v60;
        *((_QWORD *)&v108 + 1) = &v109[1];
        v115 = v104;
        v118 = 0x101010000LL;
        *(_QWORD *)&v108 = 0;
        v111 = 0;
        v112 = 0;
        v114 = v61;
        v116 = 0;
        v117 = 3;
        sub_1A395A0((__int64)&v108);
        v90 = *(_BYTE *)(v93 + 29);
        v62 = LODWORD(v109[0]);
        v63 = (v90 >> 5) & 3 | v93;
        v102 = v63;
        v64 = LODWORD(v109[0]) + 1LL;
        if ( v64 > HIDWORD(v109[0]) )
        {
          sub_2237220((char *)&v108 + 8, &v109[1], v64, 8);
          v62 = LODWORD(v109[0]);
          v63 = (v90 >> 5) & 3 | v93;
        }
        *(_QWORD *)(*((_QWORD *)&v108 + 1) + 8 * v62) = v63;
        LODWORD(v108) = 2;
        ++LODWORD(v109[0]);
        sub_1A43500((__int64)&v108);
        v65 = (__m128 *)*a1;
        v66 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v66 != 3 && v66 > 1 )
          goto LABEL_81;
        if ( (unsigned __int8)sub_BFE300(v48) )
        {
          v69 = *(_BYTE *)(v20 + 28) & 0x7F;
          v70 = (v69 + 80) & 0x7F;
          if ( (unsigned __int8)v70 <= 3u || v69 == 32 )
          {
            v71 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v109[1], v70, v67, v68);
            v76 = sub_F63270(*(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v109[1], v72, v73, v74, v75);
            if ( v76 )
            {
              v79 = (int *)(*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
                v79 = *(int **)v79;
              if ( !v79 )
              {
                v80 = 0;
                goto LABEL_80;
              }
              v91 = (__int64)v79;
              v80 = (__int64)(v79 - 16);
              if ( v79 == &dword_40
                || (v99 = v79 - 16,
                    v96 = v76,
                    v94 = sub_B91570((__int64)(v76 + 8), v80, (__int64)v76, (__int64)v79, v77, v78),
                    v84 = sub_B91570(v91, v80, v81, v91, v82, v83),
                    v76 = v96,
                    v80 = (__int64)v99,
                    v94 != v84) )
              {
LABEL_80:
                v85 = sub_B70650((__int64)v76, v80);
                v65 = (__m128 *)*a1;
                if ( !v85 )
                {
                  v33 = sub_190BDA0((__int64)v65, v20, *(_QWORD *)(v20 + 48), 1, *(_DWORD *)(v20 + 24), 0, 0.0, a8);
                  goto LABEL_82;
                }
LABEL_81:
                v33 = (__int64)sub_19CB370(
                                 v65,
                                 (_DWORD *)v48,
                                 v88,
                                 v97,
                                 (_DWORD)v45 != 0,
                                 &v105,
                                 (__m128)0LL,
                                 a8,
                                 v92,
                                 0,
                                 (__int64)&v108,
                                 (__int64)v98,
                                 0,
                                 0,
                                 nullptr);
LABEL_82:
                sub_169D230((__int64)&v108);
LABEL_39:
                if ( HIDWORD(v106[1]) )
                  free(v106[0]);
                goto LABEL_24;
              }
            }
          }
        }
        v65 = (__m128 *)*a1;
        goto LABEL_81;
      }
      v53 = sub_18C1370(
              *a1,
              v46 & 0xFFFFFFFFFFFFFFFELL,
              v87,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              v93,
              v20,
              v47);
      if ( v53 != 1 )
      {
        v57 = v53 & 0xFFFFFFFFFFFFFFFELL;
        v58 = (__m128 *)*a1;
        v59 = v57;
        if ( (_BYTE)v45 || (*(_BYTE *)(v57 + 1) & 6) != 0 )
        {
LABEL_64:
          v108 = 0;
          *(_OWORD *)v109 = 0;
          v110 = 0;
          v105.m128i_i64[0] = (*(_BYTE *)(v93 + 29) >> 5) & 3 | v93;
          v33 = sub_19C4FE0(
                  v58,
                  v59,
                  (_DWORD)v45 != 0,
                  v97,
                  (__int64)&v108,
                  v20,
                  (__m128)0LL,
                  a8,
                  v105.m128i_i64[0],
                  (__int64)&v103);
          if ( HIDWORD(v109[1]) )
            free(v109[0]);
          goto LABEL_24;
        }
        v86 = sub_1A0BEA0((__int64)v58, v57, v54, v55, v56);
        if ( v86 != 1 )
        {
          v58 = (__m128 *)*a1;
          v59 = v86 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_64;
        }
      }
    }
  }
  v33 = 1;
LABEL_24:
  if ( ptr[0] != v120 )
    free(ptr[0]);
  return v33;
}
