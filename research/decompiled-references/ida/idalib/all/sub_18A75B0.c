__m128i *__fastcall sub_18A75B0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        __m128 a7,
        __m128i a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        unsigned int a15,
        const void *a16,
        int a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v22; // rax
  __int64 v23; // r13
  _QWORD *v24; // r15
  unsigned int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __m128i *v37; // rbp
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned int **v41; // rax
  unsigned int *v42; // r9
  __int64 v43; // rdi
  char v44; // al
  __int64 *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __m128i *v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __m128i *v63; // rdx
  __int64 v64; // r13
  __int64 v65; // rcx
  unsigned int *v66; // rax
  __int64 v67; // r14
  int v68; // edx
  int v69; // esi
  int v70; // edx
  unsigned int *v71; // rax
  unsigned int v72; // ecx
  int v73; // esi
  __int64 v74; // rdx
  __int64 *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbp
  unsigned int *v80; // r12
  __int64 v81; // rsi
  _QWORD *v82; // rax
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r14
  __int64 *v89; // rdx
  unsigned int *v91; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v92; // [rsp+18h] [rbp-F0h]
  unsigned int v93; // [rsp+1Ch] [rbp-ECh]
  unsigned __int64 v94; // [rsp+20h] [rbp-E8h]
  __int64 v95[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v96; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+48h] [rbp-C0h]
  __int64 v99; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+58h] [rbp-B0h]

  v92 = a3;
  v95[0] = a4;
  v22 = sub_168B6C0((__int64)a1);
  v23 = *a1;
  v24 = (_QWORD *)v22;
  v25 = sub_1A3A250(*a1);
  v26 = *(_QWORD *)(*a1 + 192);
  v27 = sub_1A5B7C0(v23, v26, v95[0], a5, 0, v25);
  if ( v27
    && ((v31 = v27, (*(_BYTE *)(v27 + 28) & 0x7F) == 0x14)
     || (sub_168B9F0((__int64)&ptr, a1, a5, 0x1328u, 0),
         sub_169D880((__int64)&ptr, v95),
         sub_15F7200(&ptr),
         v26 = (__int64)a1,
         sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(v31 + 24), 0x71u, 0),
         sub_15F7200(&ptr),
         (*(_BYTE *)(v31 + 28) & 0x7F) == 0x14)) )
  {
    v32 = *(_QWORD *)(v31 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v31 + 40) & 7) != 0 )
      v32 = 0;
    if ( v95[0] != v32 )
      v95[0] = v32;
    v33 = sub_BAE550((__int64 *)v31, v26, 0, v28, v29, v30);
    if ( v33 )
    {
      if ( a6 )
      {
        if ( (unsigned __int8)sub_18A64C0(*a1, v33, (__int64)a6, 1, v34, v33, a7, a8) )
          a6 = nullptr;
      }
      else
      {
        v91 = (unsigned int *)v33;
        sub_168B9F0((__int64)&ptr, a1, a5, 0x1118u, 0);
        sub_169D880((__int64)&ptr, v95);
        sub_15F7200(&ptr);
        sub_168B9F0((__int64)&ptr, a1, *v91, 0x188Bu, 0);
        sub_169D880((__int64)&ptr, v95);
        sub_15F7200(&ptr);
        v76 = &v99;
        v98 = 0x400000000LL;
        v77 = v91[2];
        ptr = &v99;
        v78 = (__int64)&v91[2 * v77 + 4];
        if ( (unsigned int *)v78 == v91 + 4 )
        {
          v87 = 0;
        }
        else
        {
          v93 = a5;
          v79 = v78;
          v80 = v91 + 4;
          v91 = (unsigned int *)v31;
          do
          {
            v88 = *(_QWORD *)v80;
            v89 = (__int64 *)(*(_QWORD *)(*(_QWORD *)v80 + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(*(_QWORD *)v80 + 80LL) & 4) != 0 )
              v81 = v89[1];
            else
              v81 = *v89;
            v82 = sub_A81910(v24, v81, 0);
            v83 = *(_QWORD *)(v88 + 40) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v88 + 40) & 7) != 0 )
              v83 = 0;
            v84 = sub_BA8720(
                    (__int64)v24,
                    *(_QWORD *)(*a1 + 544),
                    *(_BYTE *)(v88 + 89) >> 6,
                    0,
                    *(_WORD *)(v88 + 88) & 0x3FFF,
                    0,
                    v83,
                    0,
                    (__int64)v82);
            v85 = (unsigned int)v98;
            v86 = (unsigned int)v98 + 1LL;
            if ( v86 > HIDWORD(v98) )
            {
              v94 = v84;
              sub_2237220(&ptr, &v99, v86, 8);
              v85 = (unsigned int)v98;
              v84 = v94;
            }
            v80 += 2;
            *((_QWORD *)ptr + v85) = v84;
            v87 = (unsigned int)(v98 + 1);
            LODWORD(v98) = v98 + 1;
          }
          while ( (unsigned int *)v79 != v80 );
          v31 = (__int64)v91;
          a5 = v93;
          v76 = (__int64 *)ptr;
        }
        a6 = sub_BA9D60((__int64)v24, 0, v76, v87, 0);
        if ( ptr != &v99 )
          free(ptr);
      }
    }
    v37 = (__m128i *)sub_BAF1C0(v24, *(_QWORD *)(*a1 + 544), v92, v95[0], (__int64)a6, v31, a5, 0);
    v40 = *(_QWORD *)(v31 + 120);
    if ( !v40 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v31 + 96) + 88LL), *(_QWORD *)(v31 + 96), v35, v36, v38, v39);
      v40 = *(_QWORD *)(v31 + 120);
    }
    v41 = (unsigned int **)(v40 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v41 )
    {
      v42 = *v41;
      if ( *v41 )
      {
        if ( a19 && (v43 = *a1, v91 = *v41, v44 = sub_1E61520(v43, v91, &ptr, 0), v42 = v91, !v44) )
        {
          v91 = (unsigned int *)v37;
          a7 = _mm_loadh_ps((const double *)&v91);
          *(_BYTE *)(a19 + 1) = 1;
          *(__m128 *)(a19 + 8) = a7;
        }
        else
        {
          v91 = v42;
          sub_168B9F0((__int64)&ptr, a1, v92, 0xE80u, 0);
          v96 = *(_QWORD *)(v31 + 40);
          sub_15894B0((__int64)&ptr, &v96);
          sub_15F7200(&ptr);
          sub_168B9F0((__int64)&ptr, a1, v91[6], 0x71u, 0);
          sub_15F7200(&ptr);
          sub_B88650((__int64)v37, 1);
        }
      }
    }
    v45 = (__int64 *)*a1;
    LOWORD(ptr) = 1;
    sub_1836B60(v45, v45[24], v37, a18, &ptr, a7, a8);
    sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v37);
    sub_167AF90(*a1, (__int64)v37, v46, v47, v48, v49, (__m128i)a7, *(double *)a8.m128i_i64);
    sub_17C44D0((__int64 *)*a1, v37->m128i_i64, v31, 1u);
  }
  else
  {
    v52 = (__m128i *)sub_BAF1C0(v24, *(_QWORD *)(*a1 + 544), v92, v95[0], (__int64)a6, 0, a5, 0);
    v53 = (__int64 *)*a1;
    v37 = v52;
    LOWORD(ptr) = 1;
    sub_1836B60(v53, v53[24], v52, a18, &ptr, a7, a8);
    sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v37);
    sub_167AF90(*a1, (__int64)v37, v54, v55, v56, v57, (__m128i)a7, *(double *)a8.m128i_i64);
  }
  sub_17B7670(*a1, (__int64)v37, *(_QWORD *)(*a1 + 192), 1, v50, v51);
  if ( !a19 || !*(_BYTE *)(a19 + 1) )
  {
    v62 = v37[7].m128i_i64[1];
    if ( !v62 )
    {
      sub_A794E0((__int64 *)(v37[6].m128i_i64[0] + 88), v37[6].m128i_i64[0], v58, v59, v60, v61);
      v62 = v37[7].m128i_i64[1];
    }
    if ( (v62 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      sub_BAB340((__int64)v37);
    if ( a9 )
      goto LABEL_28;
LABEL_33:
    *(_DWORD *)((v37[7].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) + 80) = a5;
    if ( !a15 )
      goto LABEL_32;
LABEL_34:
    sub_1893F00(*a1, (__int64)v37, a14, a15, (__int64)a16);
    sub_BA9FB0((v37[7].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) + 16, a14, a15, a16, (__int64)v24);
    *(_DWORD *)((v37[7].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) + 80) = a17;
    goto LABEL_32;
  }
  sub_BA9B60((__int64)v37);
  if ( !a9 )
    goto LABEL_33;
  if ( v37 )
  {
LABEL_28:
    v63 = v37 + 3;
    goto LABEL_29;
  }
  v63 = nullptr;
LABEL_29:
  v64 = *a1;
  v65 = *(_QWORD *)(*a1 + 9944);
  v66 = *(unsigned int **)(*a1 + 512);
  *(_QWORD *)(v64 + 512) = 0;
  v67 = *(_QWORD *)(v64 + 544);
  v100 = v65;
  LODWORD(v65) = *(_DWORD *)(v64 + 80);
  *(_QWORD *)(v64 + 544) = v63;
  v68 = *(_DWORD *)(v64 + 40);
  v69 = *(_DWORD *)(v64 + 2632);
  v93 = v65;
  *(_DWORD *)(v64 + 80) = v68;
  v70 = *(_DWORD *)(v64 + 3688);
  v91 = v66;
  LODWORD(v94) = v69;
  *(_DWORD *)(v64 + 2632) = v70;
  *(_QWORD *)(v64 + 9944) = 0;
  sub_189BB90(a1, a2, v92, v37, v95[0], a5, a9, a10, a11, a12, a13);
  if ( v67 )
  {
    v71 = v91;
    v72 = v93;
    *(_QWORD *)(v64 + 544) = v67;
    v73 = v94;
    *(_QWORD *)(v64 + 512) = v71;
    v74 = v100;
    *(_DWORD *)(v64 + 80) = v72;
    *(_QWORD *)(v64 + 9944) = v74;
    *(_DWORD *)(v64 + 2632) = v73;
  }
  if ( a15 )
    goto LABEL_34;
LABEL_32:
  sub_18954B0(a1, (__int64)v37);
  sub_1A865C0(a1, v37);
  return v37;
}
