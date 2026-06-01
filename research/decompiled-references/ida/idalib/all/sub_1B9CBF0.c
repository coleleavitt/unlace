__int64 __fastcall sub_1B9CBF0(
        __int64 *a1,
        unsigned __int64 *a2,
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
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  const __m128i *v18; // rsi
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v27; // rdx
  int v28; // rax^4
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  __m128 *v47; // rdi
  unsigned __int64 v48; // rsi
  __m128i v49; // xmm2
  __int64 v50; // rsi
  __m128 *v51; // rdi
  _DWORD *v52; // r10
  unsigned int v53; // eax
  char v54; // al
  __int64 v55; // rcx
  __int64 v56; // r8
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r15
  int *v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  char v75; // al
  __int64 v76; // rax
  __int64 v77; // [rsp+0h] [rbp-2C8h]
  __int64 v78; // [rsp+0h] [rbp-2C8h]
  __int64 v79; // [rsp+8h] [rbp-2C0h]
  unsigned int v80; // [rsp+8h] [rbp-2C0h]
  __int64 v81; // [rsp+10h] [rbp-2B8h]
  __int64 v82; // [rsp+10h] [rbp-2B8h]
  _DWORD *v83; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 v84; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v85; // [rsp+18h] [rbp-2B0h]
  __int64 v86; // [rsp+18h] [rbp-2B0h]
  unsigned int v87; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v88; // [rsp+24h] [rbp-2A4h]
  void **v89; // [rsp+28h] [rbp-2A0h]
  _DWORD *v90; // [rsp+30h] [rbp-298h]
  int *v91; // [rsp+38h] [rbp-290h]
  __m128i v92; // [rsp+40h] [rbp-288h] BYREF
  unsigned __int64 v93; // [rsp+50h] [rbp-278h]
  __int64 v94; // [rsp+68h] [rbp-260h]
  __m128i v95; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-248h]
  __m128i v97; // [rsp+90h] [rbp-238h] BYREF
  void *v98[2]; // [rsp+A0h] [rbp-228h]
  __int128 v99; // [rsp+B0h] [rbp-218h]
  __int128 v100; // [rsp+C0h] [rbp-208h] BYREF
  void *v101[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v102; // [rsp+E0h] [rbp-1E8h]
  __int128 v103; // [rsp+118h] [rbp-1B0h]
  __int64 v104; // [rsp+128h] [rbp-1A0h]
  __int64 v105; // [rsp+130h] [rbp-198h]
  __m128i v106; // [rsp+138h] [rbp-190h]
  unsigned __int64 v107; // [rsp+148h] [rbp-180h]
  __int64 v108; // [rsp+150h] [rbp-178h]
  __int64 v109; // [rsp+158h] [rbp-170h]
  __int64 v110; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v112[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v113; // [rsp+280h] [rbp-48h]

  v9 = sub_1B7CAD0(a1, (unsigned __int16 *)a2[2], a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = v9;
  v11 = *a2;
  if ( (*a2 & 0x100000) != 0 )
  {
    v12 = sub_1B979C0(a1, a2[6], (void *)a2[7], 0, 0);
    v77 = v27;
    if ( !v12 )
      return 1;
    v11 = *a2;
  }
  else
  {
    v77 = 0;
    v12 = 0;
  }
  v13 = v11 >> 16;
  v87 = 0;
  if ( (v13 & 0x40) != 0 )
    v87 = a2[2 * ((v13 & 0x10) != 0) + 7 + ((v13 & 0x20) != 0)];
  v14 = sub_1B04070((__int64)a1, a2[3]);
  if ( !v14 )
    return 1;
  v15 = *a2;
  v16 = a2[3];
  if ( (*a2 & 0x200000) != 0 )
    v17 = a2[2 * ((*a2 & 0x100000) != 0) + 6];
  else
    v17 = v16 | (*(_BYTE *)(v16 + 29) >> 5) & 3;
  ptr[0] = (void *)v17;
  v18 = (const __m128i *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v18 != (const __m128i *)v16 )
  {
    v81 = sub_1B04070((__int64)a1, (__int64)v18);
    if ( v81 )
    {
      v15 = *a2;
      goto LABEL_12;
    }
    return 1;
  }
  v81 = v14;
LABEL_12:
  v19 = v15 >> 16;
  v113 = 0;
  ptr[1] = (void *)0x800000000LL;
  ptr[0] = v112;
  if ( (v19 & 0x40) == 0 )
    goto LABEL_74;
  v20 = (__int64 *)&a2[2 * ((v19 & 0x10) != 0) + ((v19 & 0x20) != 0)];
  if ( !*((_DWORD *)v20 + 12) )
    goto LABEL_74;
  v21 = 0;
  LODWORD(v113) = *((_DWORD *)v20 + 12);
  v22 = *a2;
  if ( (*a2 & 0x400000) != 0 )
    v21 = HIDWORD(a2[2 * ((*a2 & 0x100000) != 0) + 6 + ((*a2 & 0x200000) != 0)]);
  HIDWORD(v113) = v21;
  if ( (v22 & 0x400000) != 0
    && (v41 = (__int64 *)&a2[2 * ((v22 & 0x100000) != 0) + ((v22 & 0x200000) != 0)], *((_DWORD *)v41 + 12)) )
  {
    v23 = 2LL * *((unsigned int *)v41 + 15);
  }
  else
  {
    v23 = 0;
  }
  v24 = v22 >> 16;
  if ( (v24 & 0x40) != 0 && (v40 = (v24 & 0x20) != 0, LODWORD(a2[2 * ((v24 & 0x10) != 0) + 6 + v40])) )
    v18 = (const __m128i *)&a2[2 * ((v24 & 0x10) != 0) + 6 + 2 * (unsigned __int64)((v24 & 0x40) != 0) + v40];
  else
    v18 = nullptr;
  if ( !(unsigned __int8)sub_1B997D0(a1, v18, &v18[v23], (__int64)ptr) )
  {
LABEL_74:
    v79 = *a1;
    v28 = (unsigned __int64)sub_EEC8C0(a2[2], (__int64)v18, *(double *)a6.m128_u64) >> 32;
    v29 = sub_15F0EF0(v79, v28, 0, (__m128i)a6, *(double *)a7.m128_u64);
    v32 = *((unsigned int *)a2 + 10);
    v33 = a2[4];
    v80 = v29;
    v34 = a2[3];
    v95.m128i_i32[2] = *((_DWORD *)a2 + 10);
    v35 = *(_QWORD *)(v34 + 40);
    v96 = v33;
    v95.m128i_i64[0] = v35;
    if ( !v35
      || (sub_1B91AC0(&v92, a1, &v95, a6, a7),
          a7 = (__m128)_mm_loadu_si128(&v92),
          v95 = (__m128i)a7,
          v96 = v93,
          v92.m128i_i64[0]) )
    {
      if ( (*a2 & 0x400000) != 0
        && (v32 = 16LL * ((*a2 & 0x100000) != 0), *(_DWORD *)((char *)&a2[((*a2 & 0x200000) != 0) + 6] + v32)) )
      {
        v89 = ptr;
      }
      else
      {
        v89 = nullptr;
      }
      v36 = (*a2 >> 16) & 8;
      v37 = WORD1(*a2) & 8;
      v88 = v36 != 0;
      v38 = sub_19C4DF0(*a1, (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL), (_DWORD)v36 != 0, v32, v30, v31, a6, a7);
      if ( *(_QWORD *)(v14 + 40) )
      {
        v84 = v38;
        v97 = 0;
        *(_OWORD *)v98 = 0;
        v99 = 0;
        sub_15AB8B0((__int64)&v97, v12, v77);
        if ( (*(_DWORD *)(v84 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v78 = *(_QWORD *)((v84 & 0xFFFFFFFFFFFFFFFELL) + 8), v37)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v84 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v25 = 1;
          goto LABEL_37;
        }
        v49 = _mm_load_si128(&v95);
        v85 = v84 & 0xFFFFFFFFFFFFFFFELL;
        v105 = *a1;
        v101[0] = (void *)0x800000000LL;
        v107 = v96;
        *((_QWORD *)&v100 + 1) = &v101[1];
        v103 = 0;
        v106 = v49;
        v110 = 0x101010000LL;
        *(_QWORD *)&v100 = 0;
        v104 = 0;
        v108 = 0;
        v109 = 3;
        sub_1A395A0((__int64)&v100);
        v50 = v81 | (*(_BYTE *)(v81 + 29) >> 5) & 3;
        v94 = v50;
        sub_1743080((__int64)&v100 + 8, v50);
        LODWORD(v100) = 2;
        sub_1A43500((__int64)&v100);
        v51 = (__m128 *)*a1;
        v52 = (_DWORD *)v85;
        v53 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v53 != 3 && v53 > 1 )
          goto LABEL_65;
        v54 = sub_BFE300(v85);
        v52 = (_DWORD *)v85;
        if ( v54 )
        {
          v57 = *(_BYTE *)(v14 + 28) & 0x7F;
          v58 = (v57 + 80) & 0x7F;
          if ( (unsigned __int8)v58 <= 3u || v57 == 32 )
          {
            v59 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF0LL), v50, v58, v55, v56);
            v64 = sub_F63270(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL), v50, v60, v61, v62, v63);
            v52 = (_DWORD *)v85;
            v68 = (__int64)v64;
            if ( v64 )
            {
              v69 = (int *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                v69 = *(int **)v69;
              if ( !v69 )
              {
                v70 = 0;
LABEL_63:
                v83 = v52;
                v75 = sub_B70650(v68, v70);
                v51 = (__m128 *)*a1;
                if ( !v75 )
                {
                  v25 = sub_190BDA0((__int64)v51, v14, *(_QWORD *)(v14 + 48), 1, *(_DWORD *)(v14 + 24), 0, 0.0, a7);
                  goto LABEL_66;
                }
                v52 = v83;
LABEL_65:
                v25 = (__int64)sub_19CB370(
                                 v51,
                                 v52,
                                 v78,
                                 v80,
                                 v88,
                                 &v97,
                                 (__m128)0LL,
                                 a7,
                                 v87,
                                 0,
                                 (__int64)&v100,
                                 (__int64)v89,
                                 0,
                                 0,
                                 nullptr);
LABEL_66:
                sub_169D230((__int64)&v100);
LABEL_37:
                if ( HIDWORD(v98[1]) )
                  free(v98[0]);
                goto LABEL_22;
              }
              v82 = (__int64)v69;
              v70 = (__int64)(v69 - 16);
              if ( v69 == &dword_40 )
                goto LABEL_63;
              v91 = v69 - 16;
              v90 = (_DWORD *)v85;
              v86 = sub_B91570((__int64)(v64 + 8), v70, (__int64)v69, v65, v66, v67);
              v74 = sub_B91570(v82, v70, v82, v71, v72, v73);
              v52 = v90;
              v70 = (__int64)v91;
              if ( v86 != v74 )
                goto LABEL_63;
            }
          }
        }
        v51 = (__m128 *)*a1;
        goto LABEL_65;
      }
      v42 = sub_18C1370(
              *a1,
              v38 & 0xFFFFFFFFFFFFFFFELL,
              v12,
              *(double *)a6.m128_u64,
              *(double *)a7.m128_u64,
              v81,
              v14,
              v39);
      if ( v42 != 1 )
      {
        v46 = v42 & 0xFFFFFFFFFFFFFFFELL;
        v47 = (__m128 *)*a1;
        v48 = v46;
        if ( v37 || (*(_BYTE *)(v46 + 1) & 6) != 0 )
        {
LABEL_50:
          v100 = 0;
          *(_OWORD *)v101 = 0;
          v102 = 0;
          v97.m128i_i64[0] = (*(_BYTE *)(v81 + 29) >> 5) & 3 | (unsigned __int64)v81;
          v25 = sub_19C4FE0(v47, v48, v88, v80, (__int64)&v100, v14, (__m128)0LL, a7, v97.m128i_i64[0], (__int64)&v95);
          if ( HIDWORD(v101[1]) )
            free(v101[0]);
          goto LABEL_22;
        }
        v76 = sub_1A0BEA0((__int64)v47, v46, v43, v44, v45);
        if ( v76 != 1 )
        {
          v47 = (__m128 *)*a1;
          v48 = v76 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_50;
        }
      }
    }
  }
  v25 = 1;
LABEL_22:
  if ( ptr[0] != v112 )
    free(ptr[0]);
  return v25;
}
