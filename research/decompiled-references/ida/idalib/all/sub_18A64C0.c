__int64 __fastcall sub_18A64C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // rax^4
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbp
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // edx
  unsigned __int8 v35; // r15
  __int64 v36; // rax
  _BYTE *v37; // rcx
  unsigned __int8 v38; // r15
  _BYTE *v39; // rax
  char v40; // dl
  bool v41; // zf
  char v42; // al
  const char *v43; // rsi
  size_t v44; // rax
  int v45; // edx
  __m128 *v46; // rdi
  unsigned __int64 v47; // rdx
  void *v48; // rdi
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  unsigned int v51; // r15d
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  const __m128i *v63; // rdx
  __m128 *v64; // rdi
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  const __m128i *v68; // rdx
  size_t v69; // rax
  __m128i *v70; // rax
  unsigned int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  size_t v76; // rdx
  int v77; // eax
  __int8 *v78; // r15
  int v79; // edx
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  _BYTE *v83; // rcx
  __int64 v84; // rdx
  __int64 *v85; // rax
  __int64 v86; // rsi
  _QWORD *v87; // rax
  __int64 *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rcx
  _QWORD *v94; // rax
  unsigned int v95; // r12d
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r13
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r13
  __int64 v115; // rax
  _QWORD *v116; // rax
  size_t v117; // rdx
  __int64 v122; // [rsp+28h] [rbp-210h]
  __m128 *v123; // [rsp+30h] [rbp-208h] BYREF
  __int64 *v124; // [rsp+38h] [rbp-200h]
  _BYTE *v125; // [rsp+40h] [rbp-1F8h]
  __m128 *v126; // [rsp+48h] [rbp-1F0h] BYREF
  __int8 *v127; // [rsp+50h] [rbp-1E8h]
  __int8 *v128; // [rsp+58h] [rbp-1E0h]
  bool v129; // [rsp+66h] [rbp-1D2h] BYREF
  bool v130; // [rsp+67h] [rbp-1D1h] BYREF
  __int64 v131; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v132; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v133; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v134; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v135; // [rsp+88h] [rbp-1B0h] BYREF
  void *v136; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v137; // [rsp+98h] [rbp-1A0h]
  void *src; // [rsp+B0h] [rbp-188h] BYREF
  size_t n; // [rsp+B8h] [rbp-180h]
  __m128 v140; // [rsp+C0h] [rbp-178h] BYREF
  __int16 v141; // [rsp+D0h] [rbp-168h]
  unsigned __int64 v142; // [rsp+E0h] [rbp-158h] BYREF
  int v143; // [rsp+E8h] [rbp-150h]
  _BYTE v144[12]; // [rsp+ECh] [rbp-14Ch]
  void *dest; // [rsp+F8h] [rbp-140h]
  __m128 v146; // [rsp+100h] [rbp-138h] BYREF
  char v147; // [rsp+118h] [rbp-120h]
  __int64 v148; // [rsp+148h] [rbp-F0h]
  int v149; // [rsp+150h] [rbp-E8h]
  char v150; // [rsp+158h] [rbp-E0h]
  __int64 v151; // [rsp+160h] [rbp-D8h]
  void *v152; // [rsp+170h] [rbp-C8h] BYREF
  __int128 v153; // [rsp+178h] [rbp-C0h] BYREF
  void *v154; // [rsp+188h] [rbp-B0h]
  __m128 v155; // [rsp+190h] [rbp-A8h] BYREF
  char v156; // [rsp+1A8h] [rbp-90h]
  char v157; // [rsp+1E8h] [rbp-50h]
  unsigned int v158; // [rsp+1F0h] [rbp-48h]
  char v159; // [rsp+1F4h] [rbp-44h]

  v9 = *(unsigned int *)(a2 + 8);
  v10 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v9 != (_DWORD)v10 )
  {
    if ( (unsigned int)v9 < (unsigned int)v10 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v9 + 16) + 24LL);
    }
    else
    {
      *(double *)a7.m128_u64 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 8 * v10 + 8) + 16LL))(*(_QWORD *)(a3 + 8 * v10 + 8));
      v12 = sub_15F0EF0(a1, v11, 0, (__m128i)a7, *(double *)a8.m128i_i64);
    }
    sub_168B9F0((__int64)&v152, (__int64 *)(a1 + 8), v12, 0x1134u, 0);
    if ( v157 )
    {
      sub_AE9DF0((unsigned __int8 **)&v155, a4, 3u);
    }
    else if ( v159 )
    {
      v98 = sub_168B9E0(&v152);
      v101 = *((_QWORD *)&v153 + 1);
      if ( *((_QWORD *)&v153 + 1) )
        v101 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v153 + 1) + 32LL))(*((_QWORD *)&v153 + 1));
      v142 = v101;
      v102 = sub_1587BC0(v98, (__int64 *)&v142, v96, v97, v99, v100);
      sub_AE9DF0((unsigned __int8 **)(*v102 + 32LL * v158 + 8), a4, 3u);
    }
    LOBYTE(src) = *(_DWORD *)(a3 + 8) > *(_DWORD *)(a2 + 8);
    v13 = sub_1588420((__int64)&v152, (unsigned __int8 *)&src);
    v14 = *(_DWORD *)(a2 + 8);
    v15 = v13;
    if ( *(_BYTE *)(v13 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v13 + 32), v14, 3u);
      v95 = *(_DWORD *)(a3 + 8);
      if ( !*(_BYTE *)(v15 + 120) )
        goto LABEL_131;
    }
    else
    {
      if ( !*(_BYTE *)(v13 + 132) )
      {
LABEL_8:
        sub_15F7200(&v152);
        return 1;
      }
      v107 = sub_168B9E0((_QWORD *)v13);
      v108 = *(_QWORD *)(v15 + 16);
      if ( v108 )
        v108 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v108 + 32LL))(*(_QWORD *)(v15 + 16));
      v142 = v108;
      v109 = sub_1587BC0(v107, (__int64 *)&v142, v103, v104, v105, v106);
      sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * *(unsigned int *)(v15 + 128) + 8), v14, 3u);
      v95 = *(_DWORD *)(a3 + 8);
      if ( !*(_BYTE *)(v15 + 120) )
      {
LABEL_131:
        if ( *(_BYTE *)(v15 + 132) )
        {
          v114 = sub_168B9E0((_QWORD *)v15);
          v115 = *(_QWORD *)(v15 + 16);
          if ( v115 )
            v115 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v115 + 32LL))(*(_QWORD *)(v15 + 16));
          v142 = v115;
          v116 = sub_1587BC0(v114, (__int64 *)&v142, v110, v111, v112, v113);
          sub_AE9DF0((unsigned __int8 **)(*v116 + 32LL * *(unsigned int *)(v15 + 128) + 8), v95, 3u);
        }
        goto LABEL_8;
      }
    }
    sub_AE9DF0((unsigned __int8 **)(v15 + 32), v95, 3u);
    goto LABEL_8;
  }
  v17 = 0;
  v122 = (unsigned int)(v9 - 1);
  if ( (_DWORD)v9 )
  {
    v128 = &v155.m128_i8[8];
    while ( 1 )
    {
      v21 = *(_QWORD *)(a2 + 8 * v17 + 16);
      v22 = *(_QWORD *)(a3 + 8 * v17 + 16);
      v23 = *(_BYTE *)(v21 + 89) >> 6;
      v24 = *(unsigned __int8 *)(v22 + 89);
      LOBYTE(v24) = (unsigned __int8)v24 >> 6;
      if ( (_BYTE)v24 == v23 )
        goto LABEL_23;
      if ( a4 != 1 && !(_BYTE)v24 )
      {
        *(_BYTE *)(v22 + 89) = *(_BYTE *)(v22 + 89) & 0x3F | (v23 << 6);
        goto LABEL_23;
      }
      if ( v23 )
        goto LABEL_37;
      v27 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      v28 = *(_QWORD *)(v21 + 16) & 4LL;
      if ( (*(_QWORD *)(v21 + 16) & 4) == 0 )
        break;
      v29 = *(_QWORD *)v27;
      if ( (*(_BYTE *)(*(_QWORD *)v27 + 8LL) & 0x7F) != 0x14 )
        goto LABEL_23;
      v30 = *(_QWORD *)(v29 + 72);
      if ( !v30 )
        goto LABEL_92;
LABEL_32:
      v31 = 0;
      v32 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v32 )
      {
        v31 = *v32;
        v33 = *v32 + 48;
        if ( v31 )
          v31 = v33;
      }
      if ( !v28 )
      {
        if ( v31 != v27 )
          goto LABEL_23;
LABEL_37:
        v34 = *(_DWORD *)(v22 + 92);
        if ( !v34 )
          v34 = *(_DWORD *)(v22 + 56);
        v124 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)&v152, (__int64 *)(a1 + 8), v34, 0x113Cu, 0);
        v35 = *(_BYTE *)(v22 + 89) >> 6;
        if ( v157 )
        {
          sub_AE9DF0((unsigned __int8 **)&v155, v35, 3u);
        }
        else if ( v159 )
        {
          v88 = (__int64 *)sub_168B9E0(&v152);
          v92 = *((_QWORD *)&v153 + 1);
          if ( *((_QWORD *)&v153 + 1) )
          {
            v93 = **((_QWORD **)&v153 + 1);
            v123 = (__m128 *)v88;
            v92 = (*(__int64 (__fastcall **)(_QWORD))(v93 + 32))(*((_QWORD *)&v153 + 1));
            v88 = (__int64 *)v123;
          }
          v142 = v92;
          v94 = sub_1587BC0((__int64)v88, (__int64 *)&v142, (__int64)v88, v89, v90, v91);
          sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v158 + 8), v35, 3u);
        }
        v136 = *(void **)(v22 + 40);
        v123 = (__m128 *)&v136;
        v36 = sub_15894B0((__int64)&v152, (__int64 *)&v136);
        v37 = (_BYTE *)v36;
        v38 = *(_BYTE *)(v21 + 89) >> 6;
        if ( *(_BYTE *)(v36 + 120) )
        {
          v125 = (_BYTE *)v36;
          sub_AE9DF0((unsigned __int8 **)(v36 + 32), v38, 3u);
          v37 = v125;
        }
        else if ( *(_BYTE *)(v36 + 132) )
        {
          v125 = (_BYTE *)v36;
          v80 = sub_168B9E0((_QWORD *)v36);
          v83 = v125;
          v84 = v80;
          v85 = *((__int64 **)v125 + 2);
          if ( v85 )
          {
            v86 = *v85;
            v126 = (__m128 *)v84;
            v85 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v86 + 32))(v85);
            v84 = (__int64)v126;
            v83 = v125;
          }
          v125 = v83;
          v142 = (unsigned __int64)v85;
          v87 = sub_1587BC0(v84, (__int64 *)&v142, v84, (__int64)v83, v81, v82);
          sub_AE9DF0((unsigned __int8 **)(*v87 + 32LL * *((unsigned int *)v125 + 32) + 8), v38, 3u);
          v37 = v125;
        }
        src = *(void **)(v21 + 40);
        v39 = (_BYTE *)sub_15894B0((__int64)v37, (__int64 *)&src);
        v142 = *(_QWORD *)v39;
        v143 = *((_DWORD *)v39 + 2);
        *(_DWORD *)v144 = *((_DWORD *)v39 + 3);
        *(_QWORD *)&v144[4] = *((_QWORD *)v39 + 2);
        v40 = v39[24];
        v150 = 0;
        v41 = v39[120] == 0;
        LOBYTE(dest) = v40;
        if ( !v41 )
        {
          v125 = v39;
          sub_FC70F0((__int64)&v146, (__int64)(v39 + 32));
          v39 = v125;
          v148 = *((_QWORD *)v125 + 13);
          v79 = *((_DWORD *)v125 + 28);
          v150 = 1;
          v149 = v79;
        }
        v151 = *((_QWORD *)v39 + 16);
        sub_15F7200(&v152);
        v42 = *(_BYTE *)(v21 + 89) >> 6;
        if ( v42 )
        {
          if ( *(_BYTE *)(v21 + 89) >> 6 != 3 )
          {
            v43 = "__contravariant";
            if ( v42 == 1 )
              v43 = "__covariant";
            v125 = v43;
            v44 = j__strlen(v43);
            if ( *(_BYTE *)(v22 + 89) >> 6 )
            {
              v45 = *(_DWORD *)(v22 + 92);
              *(_QWORD *)((char *)&v153 + 4) = 0;
              BYTE12(v153) = 0;
              v154 = v128;
              LODWORD(v152) = v45;
              HIDWORD(v152) = v45;
              src = &v140;
              v123 = &v140;
              v155.m128_u64[0] = 0;
              v155.m128_i8[8] = 0;
              v156 = 0;
              LOBYTE(v153) = 1;
              sub_18948E0(&src, v125, (__int64)&v125[v44]);
              v46 = (__m128 *)v154;
              if ( src == v123 )
              {
                v117 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *(_BYTE *)v154 = v140.m128_i8[0];
                  else
                    memcpy(v154, src, n);
                  v117 = n;
                  v46 = (__m128 *)v154;
                }
                v155.m128_u64[0] = v117;
                v46->m128_i8[v117] = 0;
                v46 = (__m128 *)src;
              }
              else
              {
                if ( v154 == v128 )
                {
                  v123 = (__m128 *)v140.m128_u64[0];
                  v154 = src;
                  a7 = _mm_loadh_ps((const double *)&v123);
                  v155 = a7;
                }
                else
                {
                  v123 = (__m128 *)v140.m128_u64[0];
                  v47 = v155.m128_u64[1];
                  v154 = src;
                  a7 = _mm_loadh_ps((const double *)&v123);
                  v155 = a7;
                  if ( v46 )
                  {
                    src = v46;
                    v140.m128_u64[0] = v47;
                    goto LABEL_54;
                  }
                }
                v46 = &v140;
                src = &v140;
              }
LABEL_54:
              n = 0;
              v46->m128_i8[0] = 0;
              if ( src != &v140 )
                operator delete(src);
              sub_1589170((__int64)&v142, &v152);
              v48 = v154;
              if ( v154 != v128 )
LABEL_57:
                operator delete(v48);
            }
            else
            {
              src = v125;
              v141 = 773;
              n = v44;
              v140.m128_u64[0] = (unsigned __int64)" ";
              sub_2253560(v123, &src);
              sub_9EC740((__int64)&v152, *(_DWORD *)(v22 + 56), v136, v137, 0);
              sub_1589170((__int64)&v142, &v152);
              if ( v154 != v128 )
                operator delete(v154);
              v48 = v136;
              if ( v136 != &v123[1] )
                goto LABEL_57;
            }
          }
        }
        else
        {
          v77 = *(_DWORD *)(v22 + 92);
          v78 = v128;
          *(_QWORD *)((char *)&v153 + 4) = 0;
          BYTE12(v153) = 0;
          v154 = v128;
          v155.m128_u64[0] = 0;
          v155.m128_i8[8] = 0;
          v156 = 0;
          LODWORD(v152) = v77;
          HIDWORD(v152) = v77;
          LOBYTE(v153) = 1;
          sub_1589170((__int64)&v142, &v152);
          v48 = v154;
          if ( v154 != v78 )
            goto LABEL_57;
        }
        sub_15F7200(&v142);
        sub_168B9F0((__int64)&v152, v124, *(_DWORD *)(v21 + 24), 0x180Cu, 0);
        v142 = *(_QWORD *)(v21 + 40);
        sub_15894B0((__int64)&v152, (__int64 *)&v142);
        sub_15F7200(&v152);
        *(_BYTE *)(v22 + 89) = *(_BYTE *)(v21 + 89) & 0xC0 | *(_BYTE *)(v22 + 89) & 0x3F;
        goto LABEL_23;
      }
      if ( v31 == *(_QWORD *)v27 )
        goto LABEL_37;
LABEL_23:
      v25 = *(_QWORD *)(v22 + 80);
      v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v25 & 4) != 0 )
      {
        v18 = v26[1];
        v19 = (__int64 *)(*(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v21 + 80) & 4) == 0 )
        {
LABEL_12:
          v20 = *v19;
          goto LABEL_13;
        }
      }
      else
      {
        v18 = *v26;
        v19 = (__int64 *)(*(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v21 + 80) & 4) == 0 )
          goto LABEL_12;
      }
      v20 = v19[1];
LABEL_13:
      if ( (*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v20) & 7) == (*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v18) & 7) )
        goto LABEL_17;
      if ( *(_DWORD *)(v22 + 96) )
      {
        v49 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v25 & 4) != 0 )
          v49 = (_QWORD *)*v49;
        v50 = (_QWORD *)*v49;
        *(_QWORD *)&v153 = v49 + 1;
        v152 = v50;
        LODWORD(v126) = sub_F6CE20((__int64 *)&v152);
        v51 = sub_F6CCB0((__int64 *)&v152, a7);
        v124 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)&v152, (__int64 *)(a1 + 8), v51, 0x1135u, 0);
        v52 = *(_QWORD *)(v22 + 80);
        if ( (v52 & 4) != 0 )
          v53 = *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v53 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
        v131 = v53;
        v54 = sub_162B6D0((__int64)&v152, &v131);
        v132 = *(_QWORD *)(v22 + 40);
        v55 = sub_15894B0(v54, &v132);
        v129 = *(_DWORD *)(v21 + 96) != 0;
        v56 = sub_1588420(v55, (unsigned __int8 *)&v129);
        v57 = *(_QWORD *)(v21 + 80);
        if ( (v57 & 4) != 0 )
          v58 = *(_QWORD *)((v57 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v58 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
        v133 = v58;
        v59 = sub_162B6D0(v56, &v133);
        v130 = *(_QWORD *)(v21 + 40) == *(_QWORD *)(v22 + 40);
        v60 = sub_1588420(v59, (unsigned __int8 *)&v130);
        v134 = *(_QWORD *)(v21 + 40);
        v125 = (_BYTE *)sub_15894B0(v60, &v134);
        v61 = *(_QWORD *)(v21 + 80);
        if ( (v61 & 4) != 0 )
          v62 = *(_QWORD *)((v61 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v62 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF8LL);
        v135 = v62;
        v123 = (__m128 *)&v136;
        v63 = (const __m128i *)(*(_QWORD *)(a1 + 248) + 17464LL);
        v127 = *(__int8 **)(a1 + 248);
        sub_F785A0((__int64)&v136, (unsigned __int64 *)&v135, v63);
        v142 = __PAIR64__((unsigned int)v126, v51);
        *(_QWORD *)v144 = 0;
        dest = &v146.m128_u16[4];
        v127 = &v146.m128_i8[8];
        src = &v140;
        v126 = &v140;
        v144[8] = 0;
        v146.m128_u64[0] = 0;
        v146.m128_i8[8] = 0;
        v147 = 0;
        LOBYTE(v143) = 1;
        sub_18948E0(&src, v136, (__int64)v136 + v137);
        v64 = (__m128 *)dest;
        if ( src == v126 )
        {
          v76 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v140.m128_i8[0];
            else
              memcpy(dest, src, n);
            v76 = n;
            v64 = (__m128 *)dest;
          }
          v146.m128_u64[0] = v76;
          v64->m128_i8[v76] = 0;
          v64 = (__m128 *)src;
          goto LABEL_71;
        }
        if ( dest == v127 )
        {
          v126 = (__m128 *)v140.m128_u64[0];
          dest = src;
          a7 = _mm_loadh_ps((const double *)&v126);
          v146 = a7;
        }
        else
        {
          v126 = (__m128 *)v140.m128_u64[0];
          v65 = v146.m128_u64[1];
          dest = src;
          a7 = _mm_loadh_ps((const double *)&v126);
          v146 = a7;
          if ( v64 )
          {
            src = v64;
            v140.m128_u64[0] = v65;
LABEL_71:
            n = 0;
            v64->m128_i8[0] = 0;
            if ( src != &v140 )
              operator delete(src);
            sub_1589170((__int64)v125, &v142);
            if ( dest != &v146.m128_u16[4] )
              operator delete(dest);
            if ( v136 != &v123[1] )
              operator delete(v136);
            sub_15F7200(&v152);
            sub_168B9F0((__int64)&v152, v124, *(_DWORD *)(v21 + 24), 0x180Cu, 0);
            v142 = *(_QWORD *)(v21 + 40);
            sub_15894B0((__int64)&v152, (__int64 *)&v142);
            sub_15F7200(&v152);
            goto LABEL_16;
          }
        }
        v64 = &v140;
        src = &v140;
        goto LABEL_71;
      }
      if ( a4 <= 1 )
      {
        LODWORD(v124) = sub_15F0EF0(a1, *(_DWORD *)(v22 + 24), 0, (__m128i)a7, *(double *)a8.m128i_i64);
        v66 = *(_QWORD *)(v21 + 80);
        if ( (v66 & 4) != 0 )
          v67 = *(_QWORD *)((v66 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v67 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
        v142 = v67;
        v68 = (const __m128i *)(*(_QWORD *)(a1 + 248) + 17464LL);
        v123 = *(__m128 **)(a1 + 248);
        sub_F785A0((__int64)&v152, &v142, v68);
        v69 = j__strlen(" : ");
        v70 = (__m128i *)sub_99BDC0(&v152, 0, 0, " : ", v69);
        src = &v140;
        if ( (__m128i *)v70->m128i_i64[0] == &v70[1] )
        {
          a8 = _mm_loadu_si128(v70 + 1);
          v140 = (__m128)a8;
        }
        else
        {
          src = (void *)v70->m128i_i64[0];
          v140.m128_u64[0] = v70[1].m128i_u64[0];
        }
        n = v70->m128i_u64[1];
        v70->m128i_i64[0] = (__int64)v70[1].m128i_i64;
        v70->m128i_i64[1] = 0;
        v70[1].m128i_i8[0] = 0;
        if ( v152 != (char *)&v153 + 8 )
          operator delete(v152);
        v71 = *(_DWORD *)(v22 + 24);
        v123 = (__m128 *)(a1 + 8);
        sub_168B9F0((__int64)&v152, (__int64 *)(a1 + 8), v71, 0x1137u, 0);
        v72 = *(_QWORD *)(v21 + 80);
        if ( (v72 & 4) != 0 )
          v73 = *(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v73 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF8LL);
        v135 = v73;
        v74 = sub_162B6D0((__int64)&v152, &v135);
        v136 = *(void **)(v22 + 40);
        v75 = sub_15894B0(v74, (__int64 *)&v136);
        LOBYTE(v134) = (a4 ^ 1) & 1;
        v125 = (_BYTE *)sub_1588420(v75, (unsigned __int8 *)&v134);
        sub_9EC740((__int64)&v142, (int)v124, src, n, 0);
        sub_1589170((__int64)v125, &v142);
        if ( dest != &v146.m128_u16[4] )
          operator delete(dest);
        sub_15F7200(&v152);
        sub_168B9F0((__int64)&v152, (__int64 *)v123, *(_DWORD *)(v21 + 24), 0x180Cu, 0);
        v142 = *(_QWORD *)(v21 + 40);
        sub_15894B0((__int64)&v152, (__int64 *)&v142);
        sub_15F7200(&v152);
        if ( src != &v140 )
          operator delete(src);
      }
LABEL_16:
      sub_A819C0(*(_QWORD **)(a1 + 248), v21, v22);
LABEL_17:
      if ( v122 == v17 )
        return 0;
      ++v17;
    }
    v29 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v27 + 8) & 0x7F) != 0x14 )
      goto LABEL_23;
    v30 = *(_QWORD *)(v27 + 72);
    if ( v30 )
      goto LABEL_32;
LABEL_92:
    sub_A794E0((__int64 *)(*(_QWORD *)(v29 + 48) + 88LL), *(_QWORD *)(v29 + 48), v30, v24, a5, a6);
    v30 = *(_QWORD *)(v29 + 72);
    v28 = *(_QWORD *)(v21 + 16) & 4LL;
    v27 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_32;
  }
  return 0;
}
