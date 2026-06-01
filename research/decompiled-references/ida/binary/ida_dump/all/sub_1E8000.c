unsigned __int64 __fastcall sub_1E8000(__int64 a1, unsigned __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  _QWORD *exception; // rdi
  unsigned __int64 v7; // r11
  const __m128i *v8; // r10
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r12
  int v18; // edx
  char v19; // al
  __int64 v21; // rbp
  __int64 v22; // rdx
  const __m128i *v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __m128i *v27; // rax
  __int64 v28; // rdx
  int v29; // r15d
  char v30; // al
  int v31; // r9d
  const __m128i *v32; // r11
  __int64 *v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 j; // rdx
  __int64 v38; // rsi
  int v39; // edx
  char v40; // r15
  __int64 v41; // r8
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rcx
  char v45; // al
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  bool v49; // zf
  char v50; // al
  unsigned __int64 v51; // r9
  char v52; // al
  __int64 v53; // rdx
  unsigned __int64 v54; // r9
  __int64 v55; // rdx
  __int64 *v56; // rsi
  unsigned __int64 v57; // rcx
  __int64 *v58; // rsi
  char v59; // al
  unsigned __int64 v60; // rcx
  int v61; // ebp
  char v62; // al
  __m128i si128; // xmm1
  __m128i v64; // xmm0
  __m128i v65; // xmm2
  char v66; // al
  unsigned __int64 *v67; // r13
  __int64 *v68; // rdx
  __int64 v69; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __m128i v73; // xmm1
  __int64 v74; // rdx
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  char v78; // dl
  unsigned __int8 v79; // si
  __int64 v80; // rsi
  _BYTE *v81; // rsi
  _DWORD *v82; // [rsp+0h] [rbp-128h]
  unsigned __int64 v83; // [rsp+0h] [rbp-128h]
  unsigned __int64 v84; // [rsp+0h] [rbp-128h]
  unsigned __int64 v85; // [rsp+0h] [rbp-128h]
  unsigned __int64 v86; // [rsp+0h] [rbp-128h]
  unsigned __int64 v87; // [rsp+8h] [rbp-120h]
  __m256i *v88; // [rsp+8h] [rbp-120h]
  __int64 v89; // [rsp+10h] [rbp-118h]
  const __m128i *v90; // [rsp+18h] [rbp-110h]
  int v91; // [rsp+18h] [rbp-110h]
  const __m128i *v92; // [rsp+18h] [rbp-110h]
  __int64 *v93; // [rsp+18h] [rbp-110h]
  const __m128i *v94; // [rsp+18h] [rbp-110h]
  const __m128i *v95; // [rsp+20h] [rbp-108h]
  const __m128i *v96; // [rsp+20h] [rbp-108h]
  unsigned __int64 v97; // [rsp+20h] [rbp-108h]
  unsigned __int64 v98; // [rsp+20h] [rbp-108h]
  __int64 *v99; // [rsp+28h] [rbp-100h]
  __int64 *v100; // [rsp+28h] [rbp-100h]
  __int64 *v101; // [rsp+28h] [rbp-100h]
  __int64 *v102; // [rsp+28h] [rbp-100h]
  char v103; // [rsp+37h] [rbp-F1h] BYREF
  const __m128i *v104; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 *v105; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v106; // [rsp+48h] [rbp-E0h] BYREF
  __m256i v107; // [rsp+50h] [rbp-D8h] BYREF
  __m256i v108; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v109; // [rsp+90h] [rbp-98h] BYREF
  __int128 v110; // [rsp+98h] [rbp-90h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-80h]
  __m128i v112; // [rsp+C0h] [rbp-68h]
  __m128i v113; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v114; // [rsp+E8h] [rbp-40h]

  v7 = a2 + 24;
  v8 = (const __m128i *)a2;
  v10 = (int)a4[1];
  v11 = *(_DWORD *)(a2 + 44);
  v12 = *(_QWORD *)(a2 + 24);
  v82 = a4;
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 1504LL);
  v14 = v11;
  v114 = __readfsqword(0x28u);
  v15 = a2;
  v89 = v13;
  v16 = *a3;
  v17 = *a3 + v10;
  if ( *a3 >= v12 && v17 <= v11 + v12 )
  {
    if ( *(_BYTE *)(a2 + 32) != 5 || (v18 = v11 + v12 - v17, !*(_BYTE *)(*(_QWORD *)(v89 + 96) + 145LL)) )
      v18 = v16 - v12;
    v19 = sub_314020((int)a2 + 40, (_DWORD)v82, v18, v11, a5, a6, (_DWORD)v82, (int)a2 + 24, v89, a2, v11);
    v7 = v87;
    v8 = v90;
    v14 = (__int64)v95;
    if ( v19 )
      return v114 - __readfsqword(0x28u);
  }
  v21 = v14 + v12;
  memset(&v107.m256i_u64[1], 0, 24);
  v107.m256i_i64[0] = 0x800000000LL;
  if ( v8[1].m128i_i64[1] >= *a3 )
  {
    v88 = &v107;
    if ( v17 >= v21 )
    {
      while ( 1 )
      {
LABEL_9:
        if ( v15 == *(_QWORD *)(a1 + 8) || *(_BYTE *)(v15 + 32) != *((_BYTE *)a3 + 8) || *(_QWORD *)(v15 + 24) >= v17 )
        {
          v26 = v15;
          if ( *v82 == 1 )
            goto LABEL_40;
          goto LABEL_38;
        }
        v21 = *(_QWORD *)(v15 + 24) + *(int *)(v15 + 44);
        if ( v17 < v21 )
          break;
        v22 = *(_QWORD *)v15;
        v23 = (const __m128i *)(a1 + 8);
        if ( (*(_QWORD *)v15 & 2) != 0 )
        {
          sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)v15);
        }
        else
        {
LABEL_14:
          v25 = *(_QWORD *)(v15 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
          {
            v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
            v42 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v42 & 2) == 0 )
            {
              v43 = v15;
              do
              {
                if ( *(_QWORD *)(v24 + 16) != v43 )
                  break;
                v43 = v24;
                v44 = v42 & 0xFFFFFFFFFFFFFFFCLL;
                v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
                v24 = v44;
              }
              while ( (v42 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v24 = v25;
              v25 = *(_QWORD *)(v25 + 8);
            }
            while ( (*(_BYTE *)v25 & 2) == 0 );
          }
LABEL_16:
          v95 = v23;
          v90 = (const __m128i *)v24;
          sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)v15);
          v26 = (unsigned __int64)v90;
          v27 = (__m128i *)v95;
          if ( v17 < v21 )
          {
            if ( *v82 != 1 )
              goto LABEL_39;
            goto LABEL_53;
          }
          v15 = (unsigned __int64)v90;
        }
      }
      sub_312D90(v88, v15 + 40);
      v22 = *(_QWORD *)v15;
      v23 = (const __m128i *)(a1 + 8);
      v24 = v15;
      if ( (*(_QWORD *)v15 & 2) != 0 )
        goto LABEL_16;
      goto LABEL_14;
    }
    v93 = (__int64 *)v8;
    sub_312D90(&v107, v7 + 16);
    v53 = *v93;
    v54 = (unsigned __int64)v93;
    if ( (*v93 & 2) == 0 )
    {
      v54 = v93[2];
      if ( (*(_BYTE *)v54 & 2) != 0 )
      {
        v54 = v53 & 0xFFFFFFFFFFFFFFFCLL;
        v55 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v55 & 2) == 0 )
        {
          v56 = v93;
          do
          {
            if ( v56 != *(__int64 **)(v54 + 16) )
              break;
            v56 = (__int64 *)v54;
            v57 = v55 & 0xFFFFFFFFFFFFFFFCLL;
            v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
            v54 = v57;
          }
          while ( (v55 & 2) == 0 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v54 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v54 = i;
      }
    }
    v58 = v93;
    v90 = (const __m128i *)v54;
    sub_1E3D90((unsigned __int64 **)(a1 + 8), v58);
    v26 = (unsigned __int64)v90;
LABEL_36:
    if ( v17 >= v21 )
    {
      v15 = v26;
      goto LABEL_9;
    }
    if ( *v82 != 1 )
    {
LABEL_38:
      v27 = (__m128i *)(a1 + 8);
LABEL_39:
      v41 = (__int64)v82;
      v83 = v26;
      sub_1E63F0(v27, v26, *a3, a3[1], v41);
      v26 = v83;
LABEL_40:
      if ( v17 >= v21 )
        goto LABEL_41;
    }
LABEL_53:
    v49 = *((_BYTE *)a3 + 8) == 5;
    memset(&v108.m256i_u64[1], 0, 24);
    v108.m256i_i64[0] = 0x800000000LL;
    if ( v49 && *(_BYTE *)(*(_QWORD *)(v89 + 96) + 145LL) )
    {
      v61 = v21 - v17;
      v62 = sub_314D00(
              (_DWORD)v88,
              (unsigned int)&v108,
              v61,
              v14,
              a5,
              v26,
              v26,
              (_DWORD)v88,
              v89,
              (_DWORD)v90,
              (_DWORD)v95);
      v51 = v85;
      if ( v62 )
      {
        si128 = _mm_load_si128((const __m128i *)&v107);
        v64 = _mm_load_si128((const __m128i *)&v107.m256i_u64[2]);
        *(__m128i *)v107.m256i_i8 = _mm_load_si128((const __m128i *)&v108);
        v65 = _mm_load_si128((const __m128i *)&v108.m256i_u64[2]);
        v112 = si128;
        v113 = v64;
        *(__m128i *)&v107.m256i_u64[2] = v65;
        *(__m128i *)v108.m256i_i8 = si128;
        *(__m128i *)&v108.m256i_u64[2] = v64;
LABEL_55:
        if ( v108.m256i_i32[0] == 1 )
        {
LABEL_57:
          sub_312B80(&v108);
LABEL_41:
          sub_312B80(v88);
          return v114 - __readfsqword(0x28u);
        }
LABEL_56:
        sub_1E45A0((__m128i *)(a1 + 8), v51, v17, a3[1], (__int64)&v108);
        goto LABEL_57;
      }
    }
    else
    {
      v50 = sub_314D00(
              (_DWORD)v88,
              (unsigned int)&v108,
              (int)v17 + v107.m256i_i32[1] - (int)v21,
              v14,
              a5,
              v26,
              v26,
              (_DWORD)v88,
              v89,
              (_DWORD)v90,
              (_DWORD)v95);
      v51 = v84;
      if ( v50 )
        goto LABEL_55;
      v61 = v21 - v17;
    }
    v86 = v51;
    LODWORD(v109) = 0;
    HIDWORD(v109) = v61;
    v111 = 0;
    v110 = 0;
    sub_312D90(&v108, &v109);
    sub_312B80(&v109);
    sub_312B80(&v108);
    v108.m256i_i32[0] = 8;
    v51 = v86;
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v89 + 80) == 4
    && (v21 & 7) == 0
    && v11 > 4
    && (v52 = sub_1E4EB0(
                a1,
                v89,
                (_DWORD)v8,
                (_DWORD)a3,
                (_DWORD)v82,
                v11 - 4,
                (_DWORD)v82,
                (unsigned int)&v107,
                v89,
                (_DWORD)v8,
                v7),
        v8 = v92,
        v7 = v97,
        v52)
    || (v11 & 1) == 0
    && (v59 = sub_1E4EB0(
                a1,
                v89,
                (_DWORD)v8,
                (_DWORD)a3,
                (_DWORD)v82,
                v11 / 2,
                (_DWORD)v82,
                (unsigned int)&v107,
                v89,
                (_DWORD)v8,
                v7),
        v8 = v94,
        v7 = v98,
        v59) )
  {
    sub_312B80(&v107);
    return v114 - __readfsqword(0x28u);
  }
  v28 = v8[1].m128i_i64[1];
  v29 = *a3 - v28;
  if ( *((_BYTE *)a3 + 8) != 5 )
  {
    v91 = v7 + 16;
    goto LABEL_22;
  }
  v14 = *(_QWORD *)(v89 + 96);
  v91 = v7 + 16;
  if ( !*(_BYTE *)(v14 + 145) )
  {
LABEL_22:
    v99 = (__int64 *)v8;
    v30 = sub_314D00(v91, (unsigned int)&v107, v29, v14, a5, a6, (__int64)v82, (unsigned int)&v107, v89, v91, v7);
    v32 = v95;
    v33 = v99;
    if ( v30 )
      goto LABEL_26;
    goto LABEL_23;
  }
  v102 = (__int64 *)v8;
  v45 = sub_314D00(
          v91,
          (unsigned int)&v107,
          *(_DWORD *)(v7 + 20) + (unsigned int)v28 - (unsigned int)*a3,
          v14,
          a5,
          a6,
          (__int64)v82,
          (unsigned int)&v107,
          v89,
          v91,
          v7);
  v32 = v95;
  v33 = v102;
  if ( v45 )
  {
    v46 = _mm_loadu_si128(v95 + 1);
    v47 = _mm_loadu_si128(v90 + 1);
    v95[1] = _mm_load_si128((const __m128i *)&v107);
    v48 = _mm_load_si128((const __m128i *)&v107.m256i_u64[2]);
    v112 = v46;
    v113 = v47;
    v90[1] = v48;
    *(__m128i *)v107.m256i_i8 = v46;
    *(__m128i *)&v107.m256i_u64[2] = v47;
    goto LABEL_26;
  }
LABEL_23:
  if ( v17 < v21 )
  {
    v100 = v33;
    v96 = v32;
    sub_312D90(v88, v90);
    v33 = v100;
    v32 = v96;
  }
  v101 = v33;
  HIDWORD(v109) = v29;
  v95 = v32;
  LODWORD(v109) = 0;
  v111 = 0;
  v110 = 0;
  sub_312D90(v90, &v109);
  sub_312B80(&v109);
  sub_312B80(v90);
  v32 = v95;
  v33 = v101;
  v95[1].m128i_i32[0] = 8;
LABEL_26:
  v34 = *v33;
  v35 = *v33 & 2;
  if ( v32[1].m128i_i32[0] == 1 )
  {
    v15 = (unsigned __int64)v33;
    if ( !v35 )
    {
      v60 = v33[2];
      if ( (*(_BYTE *)v60 & 2) != 0 )
      {
        v15 = v34 & 0xFFFFFFFFFFFFFFFCLL;
        v74 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v74 & 2) == 0 )
        {
          v75 = (unsigned __int64)v33;
          do
          {
            if ( v75 != *(_QWORD *)(v15 + 16) )
              break;
            v75 = v15;
            v76 = v74 & 0xFFFFFFFFFFFFFFFCLL;
            v74 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
            v15 = v76;
          }
          while ( (v74 & 2) == 0 );
        }
      }
      else
      {
        do
        {
          v15 = v60;
          v60 = *(_QWORD *)(v60 + 8);
        }
        while ( (*(_BYTE *)v60 & 2) == 0 );
      }
    }
    sub_1E3D90((unsigned __int64 **)(a1 + 8), v33);
  }
  else if ( !v35 )
  {
    v36 = v33[2];
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v68 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
      v69 = *v68;
      if ( (*v68 & 2) == 0 )
      {
        while ( v15 == v68[2] )
        {
          v15 = (unsigned __int64)v68;
          v71 = v69 & 0xFFFFFFFFFFFFFFFCLL;
          v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v69 & 2) != 0 )
          {
            v15 = v71;
            goto LABEL_32;
          }
          v68 = (__int64 *)v71;
        }
      }
      v15 = (unsigned __int64)v68;
    }
    else
    {
      for ( j = *(_QWORD *)(v36 + 8); (*(_BYTE *)j & 2) == 0; j = *(_QWORD *)(j + 8) )
        v36 = j;
      v15 = v36;
    }
  }
LABEL_32:
  v14 = *a3;
  v38 = (int)v82[1];
  if ( *a3 + v107.m256i_i32[1] < *a3 + v38 )
    goto LABEL_35;
  v39 = 0;
  if ( *((_BYTE *)a3 + 8) == 5 && *(_BYTE *)(*(_QWORD *)(v89 + 96) + 145LL) )
    v39 = v107.m256i_i32[1] - v38;
  v40 = sub_314020((_DWORD)v88, (_DWORD)v82, v39, v14, a5, v31, (_DWORD)v82, (_DWORD)v88, v89, (_DWORD)v90, (_DWORD)v95);
  if ( !v40 )
  {
LABEL_35:
    v26 = v15;
    goto LABEL_36;
  }
  v66 = *((_BYTE *)a3 + 8);
  v109 = *a3;
  LOBYTE(v110) = v66;
  sub_312C40((char *)&v110 + 8, v88);
  v67 = *(unsigned __int64 **)(a1 + 8);
  v104 = (const __m128i *)&v109;
  if ( !v67 )
  {
    v72 = qalloc();
    v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v72, (__m128i)(unsigned __int64)v72);
    if ( !v72 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v72 + 64) = 0;
    *(_OWORD *)(v72 + 16) = 0;
    *(_OWORD *)(v72 + 32) = 0;
    *(_OWORD *)(v72 + 48) = 0;
    *(_QWORD *)v72 = v72 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v72 + 8) = v73;
    *(_QWORD *)(a1 + 8) = v72;
    *(_QWORD *)v72 = v72 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v72 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                (__m128i)*(unsigned __int64 *)(a1 + 8));
    **(_QWORD **)(a1 + 8) &= ~1uLL;
    **(_QWORD **)(a1 + 8) |= 2uLL;
    v67 = *(unsigned __int64 **)(a1 + 8);
    goto LABEL_102;
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_102:
    sub_1E7E70((__m128i *)(a1 + 8), v67, 1, &v104);
    goto LABEL_90;
  }
  v105 = v67;
  v103 = 1;
  v106 = 0;
  if ( v15
    && (unsigned __int8)sub_88E40(
                          (unsigned __int64 *)(a1 + 8),
                          (__int64)&v109,
                          v15,
                          (unsigned __int64 *)&v105,
                          &v103,
                          &v106) )
  {
    if ( !v106 )
      sub_1E7E70((__m128i *)(a1 + 8), v105, v103, &v104);
    goto LABEL_90;
  }
  v77 = *v67 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v77 & 2) != 0 )
  {
    v78 = 1;
    goto LABEL_119;
  }
  v78 = v40;
  while ( 1 )
  {
    v79 = *(_BYTE *)(v77 + 32);
    if ( (unsigned __int8)v110 < v79 )
    {
LABEL_121:
      v81 = *(_BYTE **)(v77 + 8);
      v78 = v40;
      goto LABEL_122;
    }
    if ( v79 >= (unsigned __int8)v110 )
    {
      v80 = *(_QWORD *)(v77 + 24);
      if ( v109 < v80 )
        goto LABEL_121;
      if ( v109 <= v80 )
        break;
    }
    v81 = *(_BYTE **)(v77 + 16);
    v78 = 0;
LABEL_122:
    if ( (*v81 & 2) != 0 )
      goto LABEL_118;
    v77 = (unsigned __int64)v81;
  }
  if ( v77 )
    goto LABEL_90;
LABEL_118:
  v67 = (unsigned __int64 *)v77;
LABEL_119:
  sub_1E7E70((__m128i *)(a1 + 8), v67, v78, &v104);
LABEL_90:
  sub_312B80((char *)&v110 + 8);
  sub_312B80(v88);
  return v114 - __readfsqword(0x28u);
}
