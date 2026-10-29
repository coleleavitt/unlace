__int64 __fastcall sub_196F070(__int64 *a1, unsigned __int64 *a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  const __m128i *v15; // rsi
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v24; // rdx
  int v25; // rax^4
  int v26; // eax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // r15
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 *v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // esi
  __m128i v41; // xmm2
  __int64 v42; // rsi
  __int64 v43; // rdi
  int v44; // r10d
  unsigned int v45; // eax
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r15
  int *v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  char v67; // al
  __int64 v68; // rax
  __int64 v69; // [rsp+0h] [rbp-2C8h]
  __int64 v70; // [rsp+0h] [rbp-2C8h]
  __int64 v71; // [rsp+8h] [rbp-2C0h]
  int v72; // [rsp+8h] [rbp-2C0h]
  __int64 v73; // [rsp+10h] [rbp-2B8h]
  __int64 v74; // [rsp+10h] [rbp-2B8h]
  int v75; // [rsp+10h] [rbp-2B8h]
  __int64 v76; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v77; // [rsp+18h] [rbp-2B0h]
  __int64 v78; // [rsp+18h] [rbp-2B0h]
  int v79; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v80; // [rsp+24h] [rbp-2A4h]
  void **v81; // [rsp+28h] [rbp-2A0h]
  int v82; // [rsp+30h] [rbp-298h]
  int *v83; // [rsp+38h] [rbp-290h]
  __m128i v84; // [rsp+40h] [rbp-288h] BYREF
  unsigned __int64 v85; // [rsp+50h] [rbp-278h]
  __int64 v86; // [rsp+68h] [rbp-260h]
  __m128i v87; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int64 v88; // [rsp+80h] [rbp-248h]
  __int128 v89; // [rsp+90h] [rbp-238h] BYREF
  void *v90[2]; // [rsp+A0h] [rbp-228h]
  __int128 v91; // [rsp+B0h] [rbp-218h]
  __int128 v92; // [rsp+C0h] [rbp-208h] BYREF
  void *v93[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v94; // [rsp+E0h] [rbp-1E8h]
  __int128 v95; // [rsp+118h] [rbp-1B0h]
  __int64 v96; // [rsp+128h] [rbp-1A0h]
  __int64 v97; // [rsp+130h] [rbp-198h]
  __m128i v98; // [rsp+138h] [rbp-190h]
  unsigned __int64 v99; // [rsp+148h] [rbp-180h]
  __int64 v100; // [rsp+150h] [rbp-178h]
  __int64 v101; // [rsp+158h] [rbp-170h]
  __int64 v102; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v104[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v105; // [rsp+280h] [rbp-48h]

  v6 = sub_1933BC0(a1, a2[2], *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
    return 1;
  v7 = v6;
  v8 = *a2;
  if ( (*a2 & 0x100000) != 0 )
  {
    v9 = sub_1969B50((__int64)a1, a2[6], (void *)a2[7], 0, 0);
    v69 = v24;
    if ( !v9 )
      return 1;
    v8 = *a2;
  }
  else
  {
    v69 = 0;
    v9 = 0;
  }
  v10 = v8 >> 16;
  v79 = 0;
  if ( (v10 & 0x40) != 0 )
    v79 = a2[2 * ((v10 & 0x10) != 0) + 7 + ((v10 & 0x20) != 0)];
  v11 = sub_18CBB50((__int64)a1, a2[3]);
  if ( !v11 )
    return 1;
  v12 = *a2;
  v13 = a2[3];
  if ( (*a2 & 0x200000) != 0 )
    v14 = a2[2 * ((*a2 & 0x100000) != 0) + 6];
  else
    v14 = v13 | (*(_BYTE *)(v13 + 29) >> 5) & 3;
  ptr[0] = (void *)v14;
  v15 = (const __m128i *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15 != (const __m128i *)v13 )
  {
    v73 = sub_18CBB50((__int64)a1, (__int64)v15);
    if ( v73 )
    {
      v12 = *a2;
      goto LABEL_12;
    }
    return 1;
  }
  v73 = v11;
LABEL_12:
  v16 = v12 >> 16;
  v105 = 0;
  ptr[1] = (void *)0x800000000LL;
  ptr[0] = v104;
  if ( (v16 & 0x40) == 0 )
    goto LABEL_74;
  v17 = (__int64 *)&a2[2 * ((v16 & 0x10) != 0) + ((v16 & 0x20) != 0)];
  if ( !*((_DWORD *)v17 + 12) )
    goto LABEL_74;
  v18 = 0;
  LODWORD(v105) = *((_DWORD *)v17 + 12);
  v19 = *a2;
  if ( (*a2 & 0x400000) != 0 )
    v18 = HIDWORD(a2[2 * ((*a2 & 0x100000) != 0) + 6 + ((*a2 & 0x200000) != 0)]);
  HIDWORD(v105) = v18;
  if ( (v19 & 0x400000) != 0
    && (v36 = (__int64 *)&a2[2 * ((v19 & 0x100000) != 0) + ((v19 & 0x200000) != 0)], *((_DWORD *)v36 + 12)) )
  {
    v20 = 2LL * *((unsigned int *)v36 + 15);
  }
  else
  {
    v20 = 0;
  }
  v21 = v19 >> 16;
  if ( (v21 & 0x40) != 0 && (v35 = (v21 & 0x20) != 0, LODWORD(a2[2 * ((v21 & 0x10) != 0) + 6 + v35])) )
    v15 = (const __m128i *)&a2[2 * ((v21 & 0x10) != 0) + 6 + 2 * (unsigned __int64)((v21 & 0x40) != 0) + v35];
  else
    v15 = nullptr;
  if ( !(unsigned __int8)sub_196BD30(a1, v15, &v15[v20], (__int64)ptr) )
  {
LABEL_74:
    v71 = *a1;
    v25 = (unsigned __int64)sub_EEC8C0(a2[2], (__int64)v15, *(double *)a3.m128_u64) >> 32;
    v26 = sub_15F0EF0(v71, v25, 0, (__m128i)a3, *(double *)a4.m128_u64);
    v27 = a2[4];
    v72 = v26;
    v28 = a2[3];
    v87.m128i_i32[2] = *((_DWORD *)a2 + 10);
    v29 = *(_QWORD *)(v28 + 40);
    v88 = v27;
    v87.m128i_i64[0] = v29;
    if ( !v29
      || (sub_19431F0(&v84, a1, &v87, a3, a4),
          a4 = (__m128)_mm_loadu_si128(&v84),
          v87 = (__m128i)a4,
          v88 = v85,
          v84.m128i_i64[0]) )
    {
      if ( (*a2 & 0x400000) != 0 && LODWORD(a2[2 * ((*a2 & 0x100000) != 0) + 6 + ((*a2 & 0x200000) != 0)]) )
        v81 = ptr;
      else
        v81 = nullptr;
      v30 = (*a2 >> 16) & 8;
      v31 = WORD1(*a2) & 8;
      v80 = v30 != 0;
      v32 = sub_19C4DF0(*a1, v7 & 0xFFFFFFFFFFFFFFFELL, (_DWORD)v30 != 0);
      if ( *(_QWORD *)(v11 + 40) )
      {
        v76 = v32;
        v89 = 0;
        *(_OWORD *)v90 = 0;
        v91 = 0;
        sub_15AB8B0((__int64)&v89, v9, v69);
        if ( (*(_DWORD *)(v76 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v70 = *(_QWORD *)((v76 & 0xFFFFFFFFFFFFFFFELL) + 8), v31)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v76 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v22 = 1;
          goto LABEL_37;
        }
        v41 = _mm_load_si128(&v87);
        v77 = v76 & 0xFFFFFFFFFFFFFFFELL;
        v97 = *a1;
        v93[0] = (void *)0x800000000LL;
        v99 = v88;
        *((_QWORD *)&v92 + 1) = &v93[1];
        v95 = 0;
        v98 = v41;
        v102 = 0x101010000LL;
        *(_QWORD *)&v92 = 0;
        v96 = 0;
        v100 = 0;
        v101 = 3;
        sub_1A395A0(&v92);
        v42 = v73 | (*(_BYTE *)(v73 + 29) >> 5) & 3;
        v86 = v42;
        sub_1743080((__int64)&v92 + 8, v42);
        LODWORD(v92) = 2;
        sub_1A43500(&v92);
        v43 = *a1;
        v44 = v77;
        v45 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v45 != 3 && v45 > 1 )
          goto LABEL_65;
        v46 = sub_BFE300(v77);
        v44 = v77;
        if ( v46 )
        {
          v49 = *(_BYTE *)(v11 + 28) & 0x7F;
          v50 = (v49 + 80) & 0x7F;
          if ( (unsigned __int8)v50 <= 3u || v49 == 32 )
          {
            v51 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL), v42, v50, v47, v48);
            v56 = sub_F63270(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL), v42, v52, v53, v54, v55);
            v44 = v77;
            v60 = (__int64)v56;
            if ( v56 )
            {
              v61 = (int *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
                v61 = *(int **)v61;
              if ( !v61 )
              {
                v62 = 0;
LABEL_63:
                v75 = v44;
                v67 = sub_B70650(v60, v62);
                v43 = *a1;
                if ( !v67 )
                {
                  v22 = sub_190BDA0(v43, v11, *(_QWORD *)(v11 + 48), 1, *(_DWORD *)(v11 + 24), 0, 0.0, a4);
                  goto LABEL_66;
                }
                v44 = v75;
LABEL_65:
                v22 = sub_19CB370(
                        v43,
                        v44,
                        v70,
                        v72,
                        v80,
                        (unsigned int)&v89,
                        v79,
                        0,
                        (__int64)&v92,
                        (__int64)v81,
                        0,
                        0,
                        0);
LABEL_66:
                sub_169D230((__int64)&v92);
LABEL_37:
                if ( HIDWORD(v90[1]) )
                  free(v90[0]);
                goto LABEL_22;
              }
              v74 = (__int64)v61;
              v62 = (__int64)(v61 - 16);
              if ( v61 == &dword_40 )
                goto LABEL_63;
              v83 = v61 - 16;
              v82 = v77;
              v78 = sub_B91570((__int64)(v56 + 8), v62, (__int64)v61, v57, v58, v59);
              v66 = sub_B91570(v74, v62, v74, v63, v64, v65);
              v44 = v82;
              v62 = (__int64)v83;
              if ( v78 != v66 )
                goto LABEL_63;
            }
          }
        }
        v43 = *a1;
        goto LABEL_65;
      }
      v37 = sub_18C03D0(
              *a1,
              v32 & 0xFFFFFFFFFFFFFFFELL,
              v9,
              v11,
              v33,
              v34,
              *(double *)a3.m128_u64,
              *(double *)a4.m128_u64);
      if ( v37 != 1 )
      {
        v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
        v39 = *a1;
        v40 = v38;
        if ( v31 || (*(_BYTE *)(v38 + 1) & 6) != 0 )
        {
LABEL_50:
          v92 = 0;
          *(_OWORD *)v93 = 0;
          v94 = 0;
          *(_QWORD *)&v89 = (*(_BYTE *)(v73 + 29) >> 5) & 3 | (unsigned __int64)v73;
          v22 = sub_19C4FE0(v39, v40, v80, v72, (unsigned int)&v92, v11, v89, (__int64)&v87);
          if ( HIDWORD(v93[1]) )
            free(v93[0]);
          goto LABEL_22;
        }
        v68 = sub_1A0BEA0(v39, v38);
        if ( v68 != 1 )
        {
          v39 = *a1;
          v40 = v68 & 0xFFFFFFFE;
          goto LABEL_50;
        }
      }
    }
  }
  v22 = 1;
LABEL_22:
  if ( ptr[0] != v104 )
    free(ptr[0]);
  return v22;
}
