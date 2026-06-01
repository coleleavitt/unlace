__int64 __fastcall sub_1991E10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  const __m128i *v13; // rdx
  unsigned __int64 v14; // rsi
  const __m128i *v15; // rsi
  _WORD *v16; // r12
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v26; // rdx
  int v27; // rax^4
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  bool v39; // al
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  int v45; // esi
  __m128i v46; // xmm2
  __int64 v47; // rsi
  __int64 v48; // rdi
  int v49; // r10d
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // r8
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r15
  int *v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // [rsp+0h] [rbp-2C8h]
  __int64 v75; // [rsp+0h] [rbp-2C8h]
  __int64 v76; // [rsp+8h] [rbp-2C0h]
  int v77; // [rsp+8h] [rbp-2C0h]
  unsigned __int64 v78; // [rsp+8h] [rbp-2C0h]
  __int64 v79; // [rsp+10h] [rbp-2B8h]
  __int64 v80; // [rsp+10h] [rbp-2B8h]
  int v81; // [rsp+10h] [rbp-2B8h]
  __int64 v82; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v83; // [rsp+18h] [rbp-2B0h]
  __int64 v84; // [rsp+18h] [rbp-2B0h]
  int v85; // [rsp+20h] [rbp-2A8h]
  _BOOL4 v86; // [rsp+24h] [rbp-2A4h]
  void **v87; // [rsp+28h] [rbp-2A0h]
  int v88; // [rsp+30h] [rbp-298h]
  int *v89; // [rsp+38h] [rbp-290h]
  __m128i v90; // [rsp+40h] [rbp-288h] BYREF
  __int64 v91; // [rsp+50h] [rbp-278h]
  __int64 v92; // [rsp+68h] [rbp-260h]
  __m128i v93; // [rsp+70h] [rbp-258h] BYREF
  __int64 v94; // [rsp+80h] [rbp-248h]
  __int128 v95; // [rsp+90h] [rbp-238h] BYREF
  void *v96[2]; // [rsp+A0h] [rbp-228h]
  __int128 v97; // [rsp+B0h] [rbp-218h]
  __int128 v98; // [rsp+C0h] [rbp-208h] BYREF
  void *v99[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int128 v100; // [rsp+E0h] [rbp-1E8h]
  __int128 v101; // [rsp+118h] [rbp-1B0h]
  __int64 v102; // [rsp+128h] [rbp-1A0h]
  __int64 v103; // [rsp+130h] [rbp-198h]
  __m128i v104; // [rsp+138h] [rbp-190h]
  __int64 v105; // [rsp+148h] [rbp-180h]
  __int64 v106; // [rsp+150h] [rbp-178h]
  __int64 v107; // [rsp+158h] [rbp-170h]
  __int64 v108; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v110[256]; // [rsp+180h] [rbp-148h] BYREF
  __int64 v111; // [rsp+280h] [rbp-48h]

  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
    return 1;
  v7 = *(_QWORD *)a2;
  v8 = v6;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v9 = sub_198CB00((__int64)a1, *(_QWORD *)(a2 + 48), *(void **)(a2 + 56), 0, 0);
    v74 = v26;
    if ( !v9 )
      return 1;
    v7 = *(_QWORD *)a2;
  }
  else
  {
    v74 = 0;
    v9 = 0;
  }
  v10 = v7 >> 16;
  v85 = 0;
  if ( (v10 & 0x40) != 0 )
    v85 = *(_DWORD *)(a2 + 16LL * ((v10 & 0x10) != 0) + 8LL * ((v10 & 0x20) != 0) + 56);
  v11 = sub_18CBE40((__int64)a1, *(_QWORD *)(a2 + 24));
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
  if ( v15 != v13 )
  {
    v79 = sub_18CBE40((__int64)a1, (__int64)v15);
    if ( v79 )
    {
      v16 = *(_WORD **)(a2 + 16);
      v17 = v8 & 0xFFFFFFFFFFFFFFFELL;
      v12 = *(_QWORD *)a2;
      if ( (_WORD *)v17 != v16 )
        goto LABEL_12;
LABEL_41:
      if ( (v12 & 0x100000) != 0 )
      {
        v36 = *(_QWORD *)(a2 + 48);
        v37 = *(_QWORD *)(a2 + 56);
      }
      else
      {
        v37 = 0;
        v36 = 0;
      }
      if ( v9 == v36 && v74 == v37 && v11 == *(_QWORD *)(a2 + 24) )
      {
        v78 = v12;
        v38 = sub_18C0340((_QWORD *)a2);
        v12 = v78;
        ptr[0] = (void *)v38;
        if ( v79 == (v38 & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v39 = sub_18C0370((_QWORD *)a2);
          v12 = v78;
          if ( !v39 )
          {
            if ( (*v16 & 0x1FF) != 0x62
              || (v15 = (const __m128i *)v11, !(unsigned __int8)sub_1AF3130(*(_QWORD *)(*a1 + 760))) )
            {
              v24 = a2;
              sub_1911B60((__m128 *)*a1, a2, a3, a4);
              return v24;
            }
            v12 = *(_QWORD *)a2;
          }
        }
      }
      goto LABEL_12;
    }
    return 1;
  }
  v16 = *(_WORD **)(a2 + 16);
  v17 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v79 = v11;
  if ( (_WORD *)v17 == v16 )
    goto LABEL_41;
LABEL_12:
  v18 = v12 >> 16;
  v111 = 0;
  ptr[0] = v110;
  ptr[1] = (void *)0x800000000LL;
  if ( (v18 & 0x40) == 0 )
    goto LABEL_86;
  v19 = a2 + 16LL * ((v18 & 0x10) != 0) + 8LL * ((v18 & 0x20) != 0);
  if ( !*(_DWORD *)(v19 + 48) )
    goto LABEL_86;
  v20 = *(_QWORD *)a2;
  v21 = 0;
  LODWORD(v111) = *(_DWORD *)(v19 + 48);
  if ( (v20 & 0x400000) != 0 )
    v21 = *(_DWORD *)(a2 + 16LL * ((v20 & 0x100000) != 0) + 8LL * ((v20 & 0x200000) != 0) + 52);
  HIDWORD(v111) = v21;
  if ( (v20 & 0x400000) != 0
    && (v41 = a2 + 16LL * ((v20 & 0x100000) != 0) + 8LL * ((v20 & 0x200000) != 0), *(_DWORD *)(v41 + 48)) )
  {
    v22 = 2LL * *(unsigned int *)(v41 + 60);
  }
  else
  {
    v22 = 0;
  }
  v23 = v20 >> 16;
  if ( (v23 & 0x40) != 0 && (v40 = 8LL * ((v23 & 0x20) != 0), *(_DWORD *)(a2 + v40 + 16LL * ((v23 & 0x10) != 0) + 48)) )
    v15 = (const __m128i *)(a2 + v40 + 16 * (((v23 & 0x10) != 0) + (unsigned __int64)((v23 & 0x40) != 0)) + 48);
  else
    v15 = nullptr;
  if ( !(unsigned __int8)sub_198ECE0(a1, v15, &v15[v22], (__int64)ptr) )
  {
LABEL_86:
    v76 = *a1;
    v27 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a2 + 16), (__int64)v15, *(double *)a3.m128_u64) >> 32;
    v28 = sub_15F0EF0(v76, v27, 0, (__m128i)a3, *(double *)a4.m128_u64);
    v29 = *(_QWORD *)(a2 + 32);
    v77 = v28;
    v30 = *(_QWORD *)(a2 + 24);
    v93.m128i_i32[2] = *(_DWORD *)(a2 + 40);
    v31 = *(_QWORD *)(v30 + 40);
    v94 = v29;
    v93.m128i_i64[0] = v31;
    if ( !v31
      || (sub_1989150(&v90, a1, &v93, a3, a4),
          a4 = (__m128)_mm_loadu_si128(&v90),
          v93 = (__m128i)a4,
          v94 = v91,
          v90.m128i_i64[0]) )
    {
      if ( (*(_QWORD *)a2 & 0x400000LL) != 0
        && *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 48) )
      {
        v87 = ptr;
      }
      else
      {
        v87 = nullptr;
      }
      v32 = WORD1(*(_QWORD *)a2) & 8;
      v86 = v32 != 0;
      v33 = sub_19C4DF0(*a1, v17, v32 != 0);
      if ( *(_QWORD *)(v11 + 40) )
      {
        v82 = v33;
        v95 = 0;
        *(_OWORD *)v96 = 0;
        v97 = 0;
        sub_15AB8B0((__int64)&v95, v9, v74);
        if ( (*(_DWORD *)(v82 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0
          || (v75 = *(_QWORD *)((v82 & 0xFFFFFFFFFFFFFFFELL) + 8), (_BYTE)v32)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v82 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v24 = 1;
          goto LABEL_37;
        }
        v46 = _mm_load_si128(&v93);
        v83 = v82 & 0xFFFFFFFFFFFFFFFELL;
        v103 = *a1;
        v99[0] = (void *)0x800000000LL;
        v105 = v94;
        *((_QWORD *)&v98 + 1) = &v99[1];
        v101 = 0;
        v104 = v46;
        v108 = 0x101010000LL;
        *(_QWORD *)&v98 = 0;
        v102 = 0;
        v106 = 0;
        v107 = 3;
        sub_1A395A0(&v98);
        v47 = v79 | (*(_BYTE *)(v79 + 29) >> 5) & 3;
        v92 = v47;
        sub_1743080((__int64)&v98 + 8, v47);
        LODWORD(v98) = 2;
        sub_1A43500(&v98);
        v48 = *a1;
        v49 = v83;
        v50 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
        if ( v50 != 3 && v50 > 1 )
          goto LABEL_75;
        v51 = sub_BFE300(v83);
        v49 = v83;
        if ( v51 )
        {
          v54 = *(_BYTE *)(v11 + 28) & 0x7F;
          v55 = (v54 + 80) & 0x7F;
          if ( (unsigned __int8)v55 <= 3u || v54 == 32 )
          {
            v56 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v83 + 8) & 0xFFFFFFFFFFFFFFF0LL), v47, v55, v52, v53);
            v61 = sub_F63270(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL), v47, v57, v58, v59, v60);
            v49 = v83;
            v65 = (__int64)v61;
            if ( v61 )
            {
              v66 = (int *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
                v66 = *(int **)v66;
              if ( !v66 )
              {
                v67 = 0;
LABEL_73:
                v81 = v49;
                v72 = sub_B70650(v65, v67);
                v48 = *a1;
                if ( !v72 )
                {
                  v24 = sub_190BDA0(v48, v11, *(_QWORD *)(v11 + 48), 1, *(_DWORD *)(v11 + 24), 0, 0.0, a4);
                  goto LABEL_76;
                }
                v49 = v81;
LABEL_75:
                v24 = sub_19CB370(
                        v48,
                        v49,
                        v75,
                        v77,
                        v86,
                        (unsigned int)&v95,
                        v85,
                        0,
                        (__int64)&v98,
                        (__int64)v87,
                        0,
                        0,
                        0);
LABEL_76:
                sub_169D230((__int64)&v98);
LABEL_37:
                if ( HIDWORD(v96[1]) )
                  free(v96[0]);
                goto LABEL_22;
              }
              v80 = (__int64)v66;
              v67 = (__int64)(v66 - 16);
              if ( v66 == &dword_40 )
                goto LABEL_73;
              v89 = v66 - 16;
              v88 = v83;
              v84 = sub_B91570((__int64)(v61 + 8), v67, (__int64)v66, v62, v63, v64);
              v71 = sub_B91570(v80, v67, v80, v68, v69, v70);
              v49 = v88;
              v67 = (__int64)v89;
              if ( v84 != v71 )
                goto LABEL_73;
            }
          }
        }
        v48 = *a1;
        goto LABEL_75;
      }
      v42 = sub_18C03D0(
              *a1,
              v33 & 0xFFFFFFFFFFFFFFFELL,
              v9,
              v11,
              v34,
              v35,
              *(double *)a3.m128_u64,
              *(double *)a4.m128_u64);
      if ( v42 != 1 )
      {
        v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
        v44 = *a1;
        v45 = v43;
        if ( (_BYTE)v32 || (*(_BYTE *)(v43 + 1) & 6) != 0 )
        {
LABEL_60:
          v98 = 0;
          *(_OWORD *)v99 = 0;
          v100 = 0;
          *(_QWORD *)&v95 = (*(_BYTE *)(v79 + 29) >> 5) & 3 | (unsigned __int64)v79;
          v24 = sub_19C4FE0(v44, v45, v86, v77, (unsigned int)&v98, v11, v95, (__int64)&v93);
          if ( HIDWORD(v99[1]) )
            free(v99[0]);
          goto LABEL_22;
        }
        v73 = sub_1A0BEA0(v44, v43);
        if ( v73 != 1 )
        {
          v44 = *a1;
          v45 = v73 & 0xFFFFFFFE;
          goto LABEL_60;
        }
      }
    }
  }
  v24 = 1;
LABEL_22:
  if ( ptr[0] != v110 )
    free(ptr[0]);
  return v24;
}
