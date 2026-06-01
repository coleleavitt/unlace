__int64 __fastcall sub_1D29470(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  const __m128i *v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rbx
  int v34; // rax^4
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // r15
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // al
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  __m128 *v56; // rdi
  unsigned __int64 v57; // rsi
  __m128i v58; // xmm2
  __int64 v59; // rsi
  __m128 *v60; // rdi
  _DWORD *v61; // r10
  unsigned int v62; // eax
  char v63; // al
  __int64 v64; // rcx
  __int64 v65; // r8
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r15
  int *v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // rax
  __int64 v86; // [rsp+0h] [rbp-2C8h]
  __int64 v87; // [rsp+0h] [rbp-2C8h]
  __int64 v88; // [rsp+8h] [rbp-2C0h]
  unsigned int v89; // [rsp+8h] [rbp-2C0h]
  _WORD *v90; // [rsp+8h] [rbp-2C0h]
  __int64 v91; // [rsp+10h] [rbp-2B8h]
  __int64 v92; // [rsp+10h] [rbp-2B8h]
  _DWORD *v93; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 v94; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v95; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v96; // [rsp+18h] [rbp-2B0h]
  __int64 v97; // [rsp+18h] [rbp-2B0h]
  unsigned int v98; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v99; // [rsp+24h] [rbp-2A4h]
  void **v100; // [rsp+28h] [rbp-2A0h]
  _DWORD *v101; // [rsp+30h] [rbp-298h]
  int *v102; // [rsp+38h] [rbp-290h]
  __m128i v103; // [rsp+40h] [rbp-288h] BYREF
  __int64 v104; // [rsp+50h] [rbp-278h]
  __int64 v105; // [rsp+68h] [rbp-260h]
  __m128i v106; // [rsp+70h] [rbp-258h] BYREF
  __int64 v107; // [rsp+80h] [rbp-248h]
  __m128i v108; // [rsp+90h] [rbp-238h] BYREF
  void *v109[2]; // [rsp+A0h] [rbp-228h]
  __int128 v110; // [rsp+B0h] [rbp-218h]
  __int128 v111; // [rsp+C0h] [rbp-208h] BYREF
  void *v112[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v113; // [rsp+E0h] [rbp-1E8h]
  __int128 v114; // [rsp+118h] [rbp-1B0h]
  __int64 v115; // [rsp+128h] [rbp-1A0h]
  __int64 v116; // [rsp+130h] [rbp-198h]
  __m128i v117; // [rsp+138h] [rbp-190h]
  __int64 v118; // [rsp+148h] [rbp-180h]
  __int64 v119; // [rsp+150h] [rbp-178h]
  __int64 v120; // [rsp+158h] [rbp-170h]
  __int64 v121; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v123[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v124; // [rsp+280h] [rbp-48h]

  v9 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v13 = *(_QWORD *)a2;
  v14 = v9;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v15 = sub_1D23E30((__int64 **)a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v86 = v10;
    if ( !v15 )
      return 1;
    v13 = *(_QWORD *)a2;
  }
  else
  {
    v86 = 0;
    v15 = 0;
  }
  v16 = v13 >> 16;
  v98 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    v17 = v16;
    v16 = (v16 & 0x20) != 0;
    v98 = *(_DWORD *)(a2 + 16LL * ((v17 & 0x10) != 0) + 8 * v16 + 56);
  }
  v20 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 24), a6, a7, v10, v16, v11, v12);
  if ( !v20 )
    return 1;
  v21 = *(_QWORD *)a2;
  v22 = *(_QWORD *)(a2 + 24);
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
    v23 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
  else
    v23 = v22 | (*(_BYTE *)(v22 + 29) >> 5) & 3;
  ptr[0] = (void *)v23;
  v24 = (const __m128i *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v24 == (const __m128i *)v22 )
  {
    v91 = v20;
    goto LABEL_12;
  }
  v91 = sub_1D1B120((__int64)a1, (__int64)v24, a6, a7, v22, v21, v18, v19);
  if ( !v91 )
    return 1;
  v21 = *(_QWORD *)a2;
LABEL_12:
  v25 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == (v14 & 0xFFFFFFFFFFFFFFFELL) )
  {
    if ( (v21 & 0x100000) != 0 )
    {
      v48 = *(_QWORD *)(a2 + 48);
      v24 = *(const __m128i **)(a2 + 56);
    }
    else
    {
      v24 = nullptr;
      v48 = 0;
    }
    if ( v15 == v48 && (const __m128i *)v86 == v24 && v20 == *(_QWORD *)(a2 + 24) )
    {
      v95 = v21;
      v90 = *(_WORD **)(a2 + 16);
      v49 = sub_18C0340((_QWORD *)a2);
      v21 = v95;
      ptr[0] = (void *)v49;
      if ( v91 == (v49 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v50 = sub_18C0370((_QWORD *)a2);
        v21 = v95;
        if ( !v50 )
        {
          if ( (*v90 & 0x1FF) != 0x62 || (v24 = (const __m128i *)v20, !sub_1AF3130(*(_QWORD *)(v25 + 760), v20)) )
          {
            v32 = a2;
            sub_1911B60((__m128 *)*a1, a2, a6, a7);
            return v32;
          }
          v21 = *(_QWORD *)a2;
        }
      }
    }
  }
  v26 = v21 >> 16;
  v124 = 0;
  ptr[0] = v123;
  ptr[1] = (void *)0x800000000LL;
  if ( (v26 & 0x40) == 0 )
    goto LABEL_88;
  v27 = a2 + 16LL * ((v26 & 0x10) != 0) + 8LL * ((v26 & 0x20) != 0);
  if ( !*(_DWORD *)(v27 + 48) )
    goto LABEL_88;
  v28 = *(_QWORD *)a2;
  v29 = 0;
  LODWORD(v124) = *(_DWORD *)(v27 + 48);
  if ( (v28 & 0x400000) != 0 )
    v29 = *(_DWORD *)(a2 + 16LL * ((v28 & 0x100000) != 0) + 8LL * ((v28 & 0x200000) != 0) + 52);
  HIDWORD(v124) = v29;
  if ( (v28 & 0x400000) != 0
    && (v47 = a2 + 16LL * ((v28 & 0x100000) != 0) + 8LL * ((v28 & 0x200000) != 0), *(_DWORD *)(v47 + 48)) )
  {
    v30 = 2LL * *(unsigned int *)(v47 + 60);
  }
  else
  {
    v30 = 0;
  }
  v31 = v28 >> 16;
  if ( (v31 & 0x40) != 0 && (v46 = 8LL * ((v31 & 0x20) != 0), *(_DWORD *)(a2 + v46 + 16LL * ((v31 & 0x10) != 0) + 48)) )
    v24 = (const __m128i *)(a2 + v46 + 16 * (((v31 & 0x10) != 0) + (unsigned __int64)((v31 & 0x40) != 0)) + 48);
  else
    v24 = nullptr;
  if ( !(unsigned __int8)sub_1D25BD0((__int64 **)a1, v24, &v24[v30], (__int64)ptr) )
  {
LABEL_88:
    v88 = *a1;
    v34 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v24, *(double *)a6.m128_u64) >> 32;
    v35 = sub_15F0EF0(v88, v34, 0, (__m128i)a6, *(double *)a7.m128_u64);
    v38 = *(unsigned int *)(a2 + 40);
    v39 = *(_QWORD *)(a2 + 32);
    v89 = v35;
    v40 = *(_QWORD *)(a2 + 24);
    v106.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v41 = *(_QWORD *)(v40 + 40);
    v107 = v39;
    v106.m128i_i64[0] = v41;
    if ( !v41
      || (sub_1D204A0(&v103, a1, &v106, a6, a7, v38, v36, v37),
          a7 = (__m128)_mm_loadu_si128(&v103),
          v106 = (__m128i)a7,
          v107 = v104,
          v103.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48) )
      {
        v100 = ptr;
      }
      else
      {
        v100 = nullptr;
      }
      v42 = *(_QWORD *)a2 >> 16;
      v43 = v42 & 8;
      v99 = (v42 & 8) != 0;
      v44 = sub_19C4DF0(*a1, (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL), (v42 & 8) != 0, v42, v36, v37, a6, a7);
      if ( *(_QWORD *)(v20 + 40) )
      {
        v94 = v44;
        v108 = 0;
        *(_OWORD *)v109 = 0;
        v110 = 0;
        sub_15AB8B0((__int64)&v108, v15, v86);
        if ( (*(_DWORD *)(v94 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v87 = *(_QWORD *)((v94 & 0xFFFFFFFFFFFFFFFELL) + 8), v43)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v94 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v32 = 1;
          goto LABEL_39;
        }
        v58 = _mm_load_si128(&v106);
        v96 = v94 & 0xFFFFFFFFFFFFFFFELL;
        v116 = *a1;
        v112[0] = (void *)0x800000000LL;
        v118 = v107;
        *((_QWORD *)&v111 + 1) = &v112[1];
        v114 = 0;
        v117 = v58;
        v121 = 0x101010000LL;
        *(_QWORD *)&v111 = 0;
        v115 = 0;
        v119 = 0;
        v120 = 3;
        sub_1A395A0((__int64)&v111);
        v59 = v91 | (*(_BYTE *)(v91 + 29) >> 5) & 3;
        v105 = v59;
        sub_1743080((__int64)&v111 + 8, v59);
        LODWORD(v111) = 2;
        sub_1A43500((__int64)&v111);
        v60 = (__m128 *)*a1;
        v61 = (_DWORD *)v96;
        v62 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v62 != 3 && v62 > 1 )
          goto LABEL_77;
        v63 = sub_BFE300(v96);
        v61 = (_DWORD *)v96;
        if ( v63 )
        {
          v66 = *(_BYTE *)(v20 + 28) & 0x7F;
          v67 = (v66 + 80) & 0x7F;
          if ( (unsigned __int8)v67 <= 3u || v66 == 32 )
          {
            v68 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v96 + 8) & 0xFFFFFFFFFFFFFFF0LL), v59, v67, v64, v65);
            v73 = sub_F63270(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL), v59, v69, v70, v71, v72);
            v61 = (_DWORD *)v96;
            v77 = (__int64)v73;
            if ( v73 )
            {
              v78 = (int *)(*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
                v78 = *(int **)v78;
              if ( !v78 )
              {
                v79 = 0;
LABEL_75:
                v93 = v61;
                v84 = sub_B70650(v77, v79);
                v60 = (__m128 *)*a1;
                if ( !v84 )
                {
                  v32 = sub_190BDA0((__int64)v60, v20, *(_QWORD *)(v20 + 48), 1, *(_DWORD *)(v20 + 24), 0, 0.0, a7);
                  goto LABEL_78;
                }
                v61 = v93;
LABEL_77:
                v32 = (__int64)sub_19CB370(
                                 v60,
                                 v61,
                                 v87,
                                 v89,
                                 v99,
                                 &v108,
                                 (__m128)0LL,
                                 a7,
                                 v98,
                                 0,
                                 (__int64)&v111,
                                 (__int64)v100,
                                 0,
                                 0,
                                 nullptr);
LABEL_78:
                sub_169D230((__int64)&v111);
LABEL_39:
                if ( HIDWORD(v109[1]) )
                  free(v109[0]);
                goto LABEL_24;
              }
              v92 = (__int64)v78;
              v79 = (__int64)(v78 - 16);
              if ( v78 == &dword_40 )
                goto LABEL_75;
              v102 = v78 - 16;
              v101 = (_DWORD *)v96;
              v97 = sub_B91570((__int64)(v73 + 8), v79, (__int64)v78, v74, v75, v76);
              v83 = sub_B91570(v92, v79, v92, v80, v81, v82);
              v61 = v101;
              v79 = (__int64)v102;
              if ( v97 != v83 )
                goto LABEL_75;
            }
          }
        }
        v60 = (__m128 *)*a1;
        goto LABEL_77;
      }
      v51 = sub_18C1370(
              *a1,
              v44 & 0xFFFFFFFFFFFFFFFELL,
              v15,
              *(double *)a6.m128_u64,
              *(double *)a7.m128_u64,
              v91,
              v20,
              v45);
      if ( v51 != 1 )
      {
        v55 = v51 & 0xFFFFFFFFFFFFFFFELL;
        v56 = (__m128 *)*a1;
        v57 = v55;
        if ( v43 || (*(_BYTE *)(v55 + 1) & 6) != 0 )
        {
LABEL_61:
          v111 = 0;
          *(_OWORD *)v112 = 0;
          v113 = 0;
          v108.m128i_i64[0] = (*(_BYTE *)(v91 + 29) >> 5) & 3 | (unsigned __int64)v91;
          v32 = sub_19C4FE0(v56, v57, v99, v89, (__int64)&v111, v20, (__m128)0LL, a7, v108.m128i_i64[0], (__int64)&v106);
          if ( HIDWORD(v112[1]) )
            free(v112[0]);
          goto LABEL_24;
        }
        v85 = sub_1A0BEA0((__int64)v56, v55, v52, v53, v54);
        if ( v85 != 1 )
        {
          v56 = (__m128 *)*a1;
          v57 = v85 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_61;
        }
      }
    }
  }
  v32 = 1;
LABEL_24:
  if ( ptr[0] != v123 )
    free(ptr[0]);
  return v32;
}
