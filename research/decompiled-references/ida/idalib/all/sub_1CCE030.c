__int64 __fastcall sub_1CCE030(
        unsigned __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        __int64 a10,
        int a11)
{
  __int64 v13; // rbx
  char v14; // al
  unsigned int v15; // r12d
  unsigned __int64 v18; // r12
  __int64 *v19; // r13
  _QWORD *v20; // rdi
  char v21; // al
  unsigned int v22; // eax
  __int64 *v23; // r13
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int32 v31; // ecx
  unsigned __int64 v32; // rsi
  __int32 v33; // eax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  int v44; // edx
  void *v45; // rax
  __int64 *v46; // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned int v49; // r14d
  __int64 *v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  void **v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 *v59; // rsi
  __int64 v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // eax
  char *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r12
  void **v66; // rbp
  int v67; // r8d
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r12d
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // r10
  __int64 v80; // rcx
  __int64 *v81; // r8
  __int64 v82; // rdi
  __int64 v83; // r11
  __int64 v84; // rax
  __int64 v85; // r9
  unsigned __int64 v86; // r15
  unsigned __int64 v87; // r13
  unsigned __int64 v88; // rcx
  _QWORD *v89; // rax
  __int64 *v90; // r10
  unsigned int v91; // r13d
  unsigned __int64 v92; // rax
  int v93; // eax
  __m128i si128; // xmm2
  __int64 v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rax
  __int64 v98; // r8
  void *v99; // rax
  int v100; // [rsp+0h] [rbp-1B8h]
  unsigned int v101; // [rsp+8h] [rbp-1B0h]
  unsigned int v102; // [rsp+8h] [rbp-1B0h]
  __int64 *v103; // [rsp+8h] [rbp-1B0h]
  __int64 v104; // [rsp+8h] [rbp-1B0h]
  __m128 v105; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned __int64 *v106; // [rsp+20h] [rbp-198h]
  __int64 *v107; // [rsp+28h] [rbp-190h]
  __m128i v108; // [rsp+30h] [rbp-188h] BYREF
  __int64 v109; // [rsp+40h] [rbp-178h] BYREF
  __m128i v110; // [rsp+50h] [rbp-168h] BYREF
  __int64 v111; // [rsp+60h] [rbp-158h]
  void *v112[2]; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v113[12]; // [rsp+80h] [rbp-138h] BYREF
  int v114; // [rsp+E0h] [rbp-D8h]
  char v115; // [rsp+E4h] [rbp-D4h]
  void *v116[2]; // [rsp+F0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+100h] [rbp-B8h] BYREF
  __int128 v118; // [rsp+110h] [rbp-A8h]
  void *v119; // [rsp+140h] [rbp-78h] BYREF
  __int64 v120; // [rsp+148h] [rbp-70h]
  __int64 v121; // [rsp+150h] [rbp-68h] BYREF
  __int64 v122; // [rsp+158h] [rbp-60h]
  int v123; // [rsp+160h] [rbp-58h]
  char v124; // [rsp+164h] [rbp-54h]
  __int64 v125; // [rsp+168h] [rbp-50h]

  v13 = a2;
  v14 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v14 == 67 )
    return (unsigned int)sub_1CCD9C0(a1, a2, a3, a10, a10 + 112, a7, (__m128i)a8);
  if ( v14 == 47 )
  {
    v18 = *(_QWORD *)(a2 + 48);
    if ( *(_BYTE *)(a2 + 80) && *(_BYTE *)(a2 + 81) )
      v18 = *(_QWORD *)(a2 + 16LL * a9 + 88);
    v19 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0 || (*(_BYTE *)(a4 + 28) & 0x7F) == 0x44 )
      goto LABEL_13;
    v20 = (_QWORD *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
      v20 = (_QWORD *)*v20;
    v101 = a6;
    v100 = a5;
    v21 = sub_B8E180((unsigned __int64)v20);
    a6 = v101;
    if ( v21 )
      goto LABEL_13;
    v67 = a2;
    v68 = *(_QWORD *)a10;
    v69 = *(unsigned int *)(a10 + 8);
    v106 = (unsigned __int64 *)v112;
    sub_1DC3910((unsigned int)v112, a1, v100, a4, v67, v100, v68, v69);
    if ( !LOBYTE(v112[1]) )
    {
      v70 = *(unsigned int *)(a10 + 8);
      v71 = *(_QWORD *)a10;
      v123 = 0;
      v116[0] = ptr;
      v116[1] = (void *)0x400000000LL;
      v124 = 0;
      sub_1CB3AC0((__int64)v116, a4, v71, v70, 1u);
      v73 = *v19;
      if ( *(_BYTE *)(*v19 + 16) == 38
        || (v95 = *(_QWORD *)(*(_QWORD *)(v73 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v95 + 16) == 38)
        && (v73 = sub_F63050(*v19, a4, v95, v72)) != 0 )
      {
        v74 = *(_DWORD *)(a1 + 12632);
        *(_DWORD *)(a1 + 12632) = a9 + 1;
        v75 = sub_1DD1D30(a1, *(_QWORD *)(v73 + 32), v116, *(unsigned int *)(v13 + 24), *(_QWORD *)(v13 + 40), 0);
        *(_DWORD *)(a1 + 12632) = v74;
      }
      else
      {
        v75 = sub_1DD1D30(a1, v18, v116, *(unsigned int *)(v13 + 24), *(_QWORD *)(v13 + 40), 0);
      }
      if ( (v75 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        a2 = v75;
        v18 = sub_1CBBE10(a1, v75, *(_DWORD *)(v13 + 24), v76, v77, v78, a7);
        if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( v116[0] != ptr )
            free(v116[0]);
          sub_1DBADA0(v106);
LABEL_13:
          switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
          {
            case 1:
              v110.m128i_i64[0] = a3->m128i_i64[1];
              v45 = (void *)sub_F1E510((__int64)a3, a2, *(double *)a7.m128_u64);
              v46 = (__int64 *)(a1 + 8);
              v112[0] = v45;
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110.m128i_i64[0]
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 25 <= 1 )
              {
                sub_168B9F0((__int64)v116, v46, (unsigned int)v112[0], 0x13EAu, 0);
                v47 = sub_15884C0((__int64)v116, (__int64 *)v112);
                sub_1605D30(v47, v110.m128i_i64);
                goto LABEL_35;
              }
              sub_168B9F0((__int64)v116, v46, (unsigned int)v112[0], 0x13E5u, 0);
              sub_15884C0((__int64)v116, (__int64 *)v112);
              sub_15F7200(v116);
              goto LABEL_36;
            case 2:
            case 3:
            case 4:
            case 5:
              v48 = sub_1CB5680(a1, (__int64)a3, 0, *(double *)a7.m128_u64, a8, a4, a5, a6);
              v113[0] = 0;
              *(_OWORD *)v112 = 0;
              v49 = *(_DWORD *)(a1 + 11200);
              v24 = *(_BYTE *)(a10 + 225) == 0;
              v50 = (__int64 *)(v48 & 0xFFFFFFFFFFFFFFFELL);
              *(_OWORD *)v116 = 0;
              v51 = 1;
              ptr[0] = nullptr;
              if ( v24 )
                v51 = *(unsigned __int8 *)(a10 + 224);
              v52 = sub_1CC9760((__m128 *)a1, v13, v18, v50, (__m128i *)v112, (__m128i *)v116, 0.0, a8, v51, a11);
              if ( v52 == 1 )
                return 1;
              if ( v49 < *(_DWORD *)(a1 + 11200) )
                return 1;
              v15 = 0;
              sub_1CB6790(a10, (const __m128i *)v112);
              sub_1CB6790(a10 + 112, (const __m128i *)v116);
              if ( (v52 & 0xFFFFFFFFFFFFFFFELL) == 0 )
                return 1;
              return v15;
            case 6:
            case 7:
              v29 = a3->m128i_i64[1];
              sub_F22A90(v116, v29);
              v30 = sub_F22F70(v116);
              if ( v30 )
              {
                v31 = 0;
                if ( (a3->m128i_i32[0] & 0x7FFFFFFFu) - 6 <= 1 )
                  v31 = *(_DWORD *)((a3[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
                v32 = *(_QWORD *)(v30 + 8);
                v108.m128i_i32[2] = v31;
                if ( v32 >= 0xFFFFFFFFFFFFFFD3LL )
                  v32 = 0;
                v108.m128i_i64[0] = v32;
                sub_B85890(&v109, v32);
                v33 = a3->m128i_i32[0];
                *(_OWORD *)v116 = 0;
                *(_OWORD *)ptr = 0;
                v118 = 0;
                if ( (v33 & 0x7FFFFFFFu) - 6 > 1 )
                {
                  v35 = 0;
                  v36 = 0;
                }
                else
                {
                  v34 = (__int64 *)(a3[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
                  v35 = v34[1];
                  v36 = *v34;
                }
                sub_15AB8B0((__int64)v116, v36, v35);
                v41 = sub_15AB9E0((__int64)v116, *(_QWORD **)(a1 + 248), v37, v38, v39, v40);
                v43 = sub_C98B50(*(_QWORD **)(a1 + 248), v41, v42, 0, &v108, 0);
                if ( (a3->m128i_i32[0] & 0x7FFFFFFF) == 7
                  && (v43 = sub_1E53840(
                              a1,
                              v43 & 0xFFFFFFFFFFFFFFFELL,
                              *(unsigned int *)((a3[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 20)),
                      v43 == 1)
                  || (v110 = 0,
                      v111 = 0,
                      *(_OWORD *)v112 = 0,
                      v44 = *(unsigned __int8 *)(a10 + 224),
                      v113[0] = 0,
                      sub_1CC9760(
                        (__m128 *)a1,
                        v13,
                        v18,
                        (__int64 *)(v43 & 0xFFFFFFFFFFFFFFFELL),
                        &v110,
                        (__m128i *)v112,
                        0.0,
                        a8,
                        v44,
                        0) == 1) )
                {
                  if ( HIDWORD(ptr[1]) )
                    free(ptr[0]);
                  return 1;
                }
                sub_1CB6790(a10, &v110);
                sub_1CB6790(a10 + 112, (const __m128i *)v112);
                if ( HIDWORD(ptr[1]) )
                  free(ptr[0]);
LABEL_32:
                v15 = 0;
              }
              else
              {
                v96 = sub_1CB2FB0((__int64)a3, v29, *(double *)a7.m128_u64);
                sub_168B9F0((__int64)v116, (__int64 *)(a1 + 8), v96, 0x13E5u, 0);
                v112[0] = (void *)sub_F1E510((__int64)a3, a1 + 8, *(double *)a7.m128_u64);
                sub_1587DB0((__int64)v116, (__int64 *)v112);
LABEL_35:
                sub_15F7200(v116);
LABEL_36:
                v15 = 1;
                sub_1CC6E20(a1, v13);
              }
              break;
            case 8:
              v22 = *(_DWORD *)(a1 + 11200);
              v113[0] = 0;
              v23 = (__int64 *)a3->m128i_i64[1];
              *(_OWORD *)v112 = 0;
              v24 = *(_BYTE *)(a10 + 225) == 0;
              v102 = v22;
              v25 = 1;
              *(_OWORD *)v116 = 0;
              ptr[0] = nullptr;
              if ( v24 )
                v25 = *(unsigned __int8 *)(a10 + 224);
              v26 = sub_1CC9760((__m128 *)a1, v13, v18, v23, (__m128i *)v112, (__m128i *)v116, 0.0, a8, v25, a11);
              if ( v26 == 1 )
                return 1;
              if ( v102 < *(_DWORD *)(a1 + 11200) )
                return 1;
              sub_1CB6790(a10, (const __m128i *)v112);
              sub_1CB6790(a10 + 112, (const __m128i *)v116);
              v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v26 & 0xFFFFFFFFFFFFFFFELL) == 0 )
                return 1;
              v15 = 0;
              if ( v23 != (__int64 *)v27 )
              {
                v28 = a3->m128i_i64[0] & 0xFFFFFFFE00000000LL;
                a3->m128i_i64[1] = v27;
                a3->m128i_i64[0] = v28 | 8;
                a3[1].m128i_i64[1] = v26 & 0xFFFFFFFFFFFFFFFCLL | 1;
              }
              return v15;
            default:
              goto LABEL_32;
          }
          return v15;
        }
      }
      if ( v116[0] != ptr )
        free(v116[0]);
    }
    v15 = 1;
    sub_1DBADA0(v106);
    return v15;
  }
  v103 = *(__int64 **)(a2 + 56);
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
    v103 = *(__int64 **)(a2 + 8LL * a9 + 88);
  v116[0] = (void *)a1;
  v116[1] = &dword_0 + 1;
  v53 = ptr;
  do
  {
    *v53 = (void *)-4096LL;
    v53 += 2;
  }
  while ( &v119 != v53 );
  BYTE2(v123) = 0;
  v125 = 0;
  v119 = &v121;
  v120 = 0x100000000LL;
  v54 = *(_QWORD *)(a1 + 11280);
  *(_QWORD *)(a1 + 11280) = v116;
  v122 = v54;
  v55 = *(_QWORD *)a10;
  v56 = *(unsigned int *)(a10 + 8);
  LOWORD(v123) = 0;
  sub_1DC38E0((unsigned int)&v110, a1, a5, a4, v13, a5, v55, v56);
  v15 = v110.m128i_u8[8];
  if ( v110.m128i_i8[8] )
    goto LABEL_56;
  v112[1] = (void *)0x400000000LL;
  v57 = *(unsigned int *)(a10 + 8);
  v58 = *(_QWORD *)a10;
  v112[0] = v113;
  v105.m128_u64[0] = (unsigned __int64)v113;
  v106 = (unsigned __int64 *)v112;
  v114 = 0;
  v115 = 0;
  sub_1CB3AC0((__int64)v112, a4, v58, v57, 1u);
  v59 = v103;
  v104 = sub_1E49CF0(a1, v103, *(_QWORD *)(a1 + 544), v112, 0);
  if ( v112[0] != v113 )
    free(v112[0]);
  if ( !v104 )
  {
LABEL_56:
    sub_1DBADA0(&v110);
    v63 = (char *)v119;
    if ( !(_BYTE)v123 )
    {
      v63 = (char *)v119;
      if ( (_DWORD)v120 )
      {
        v64 = 0;
        v65 = 8LL * (unsigned int)(v120 - 1) + 8;
        do
        {
          v66 = *(void ***)&v63[v64];
          if ( v66 )
          {
            if ( *v66 != v66 + 2 )
              free(*v66);
            operator delete(v66, 0x30u);
            v63 = (char *)v119;
          }
          v64 += 8;
        }
        while ( v65 != v64 );
      }
      *((_QWORD *)v116[0] + 1410) = v122;
      LOBYTE(v123) = 1;
    }
    if ( v63 != (char *)&v121 )
      free(v63);
    if ( ((__int64)v116[1] & 1) == 0 )
      operator delete(ptr[0], 16LL * LODWORD(ptr[1]), 8);
    return 1;
  }
  sub_1DBADA0(&v110);
  sub_1CB3BA0((__int64)v116);
  v60 = a3->m128i_u32[0];
  v61 = a3->m128i_i32[0] & 0x7FFFFFFF;
  if ( v61 == 1 )
  {
    v79 = *(__int64 **)(a1 + 248);
    v59 = (__int64 *)(a3[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
    v80 = *v59;
    v81 = v59 + 1;
    v82 = *v59;
    v83 = *v59;
    v84 = *v59 & 7;
    v85 = v84 | (*v59 >> 3) & 1;
    if ( v85 )
    {
      v86 = 0;
      v87 = 0;
    }
    else
    {
      v86 = 0;
      v87 = 0;
      if ( *(_BYTE *)(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 24 )
        goto LABEL_91;
      v105.m128_u64[0] = (unsigned __int64)(v59 + 1);
      a7 = _mm_loadh_ps((const double *)v105.m128_u64);
      *(__m128 *)v116 = a7;
      if ( !v80 )
      {
        if ( MEMORY[0x10102464C458F] == 29 )
          goto LABEL_99;
        v82 = 0;
        v86 = 0;
        goto LABEL_93;
      }
      if ( (unsigned __int8)(*(_WORD *)(v80 + 18) >> 3) != 6 )
        goto LABEL_99;
      v87 = *(_QWORD *)(v80 + 32);
      if ( v87 )
        v86 = v59[2];
      v105.m128_u64[0] = (unsigned __int64)v79;
      v97 = sub_1743120((__int64)v116);
      v79 = (__int64 *)v105.m128_u64[0];
      v82 = v97;
      v80 = v97;
      LOBYTE(v83) = v97;
      v81 = (__int64 *)v60;
      v84 = v97 & 7;
    }
    if ( v84 )
      goto LABEL_106;
LABEL_91:
    if ( (v83 & 8) != 0 )
      goto LABEL_106;
    if ( *(_BYTE *)(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 29 )
    {
      if ( !v82 )
        goto LABEL_106;
      v98 = *(unsigned int *)v81;
      v59 = v79;
      v99 = *(void **)(*(_QWORD *)(*(_QWORD *)(v82 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
      v116[0] = &byte_6;
      v116[1] = v99;
      sub_F1ECA0((unsigned __int64 *)&ptr[1], v79, v87, v86, v98, 0);
      v93 = (__int64)v116[0] & 0x7FFFFFFF;
      goto LABEL_97;
    }
LABEL_93:
    v88 = v80 & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(*(_QWORD *)v88 + 16LL) != 48 )
      goto LABEL_106;
    if ( !v82 )
      goto LABEL_106;
    v107 = v81;
    v105.m128_u64[0] = (unsigned __int64)v79;
    v89 = sub_F60F10(v82, (__int64)v59, v60, v88, (__int64)v81, v85);
    v90 = (__int64 *)v105.m128_u64[0];
    if ( (*((_BYTE *)v89 + 28) & 0x7Fu) - 60 > 1 )
      goto LABEL_106;
    v105.m128_u64[0] = v86;
    v91 = *(_DWORD *)v107;
    v107 = v90;
    v105 = _mm_loadh_ps((const double *)v105.m128_u64);
    v92 = sub_BBF290((__int64)v89);
    sub_F22AA0(v106, v92);
    v116[0] = &byte_6;
    v116[1] = v112[0];
    v59 = v107;
    sub_F1ECA0((unsigned __int64 *)&ptr[1], v107, v105.m128_u64[0], v105.m128_u64[1], v91, 0);
    v93 = (__int64)v116[0] & 0x7FFFFFFF;
LABEL_97:
    if ( v93 )
    {
      LODWORD(v60) = v116[0];
      si128 = _mm_load_si128((const __m128i *)ptr);
      *a3 = _mm_load_si128((const __m128i *)v116);
      a3[1] = si128;
LABEL_99:
      v61 = v60 & 0x7FFFFFFF;
      goto LABEL_52;
    }
LABEL_106:
    LODWORD(v60) = a3->m128i_i32[0];
    goto LABEL_99;
  }
LABEL_52:
  if ( v61 > 7 )
  {
    if ( v61 != 8 )
      return v15;
LABEL_55:
    v62 = sub_1CB2FB0((__int64)a3, (__int64)v59, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v116, (__int64 *)(a1 + 8), v62, 0x13E6u, 0);
    LODWORD(v112[0]) = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0;
    sub_1588370((__int64)v116, (unsigned int *)v106);
    sub_15F7200(v116);
    return 1;
  }
  if ( v61 < 6 )
  {
    if ( v61 != 1 )
      return v15;
    goto LABEL_55;
  }
  v15 = sub_1CC1530(a1, v13, v104, (__int64)a3, *(_BYTE *)(a10 + 224), a10 + 226, *(double *)a7.m128_u64);
  if ( !(_BYTE)v15 )
  {
    sub_1CB6790(a10, a3);
    sub_AB6BB0((__m128i *)v116, *(_QWORD **)(a1 + 248), a3);
    sub_1CB6790(a10 + 112, (const __m128i *)v116);
  }
  return v15;
}
