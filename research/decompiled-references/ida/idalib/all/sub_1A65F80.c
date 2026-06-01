void __fastcall sub_1A65F80(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __m128 *v14; // r15
  __int64 v15; // rax
  __int64 *v16; // r12
  unsigned __int64 v17; // rcx
  __int64 *v18; // rsi
  __m128i *v19; // rcx
  __int64 *v20; // r10
  unsigned __int64 v21; // r9
  __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  std::__detail::_List_node_base *v32; // r15
  __int64 v33; // rsi
  _QWORD *v34; // r13
  __int64 v35; // rdi
  void **v36; // rdi
  void **v37; // r14
  void **v38; // rdi
  std::__detail::_List_node_base *v39; // rbx
  std::__detail::_List_node_base **v40; // r13
  _QWORD *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rsi
  _QWORD *v44; // r12
  __int64 v45; // rdi
  void **v46; // rdi
  void **v47; // r15
  void **v48; // rdi
  std::__detail::_List_node_base *v49; // rdi
  __int64 *v50; // r9
  unsigned __int64 v51; // rcx
  __m128i *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rax
  char *v55; // rcx
  __int64 v56; // rdi
  char *v57; // rsi
  char *v58; // rdx
  char *v59; // rcx
  char *v60; // rdx
  char *v61; // rax
  __int64 v62; // rax
  __m128i v63; // [rsp+8h] [rbp-280h] BYREF
  __int64 *v64; // [rsp+18h] [rbp-270h]
  unsigned __int64 v65; // [rsp+20h] [rbp-268h]
  unsigned __int64 v66; // [rsp+28h] [rbp-260h]
  std::__detail::_List_node_base *v67[2]; // [rsp+30h] [rbp-258h] BYREF
  __int64 v68; // [rsp+40h] [rbp-248h]
  void *v69; // [rsp+48h] [rbp-240h] BYREF
  __int64 v70; // [rsp+50h] [rbp-238h]
  int v71; // [rsp+58h] [rbp-230h]
  char v72; // [rsp+5Ch] [rbp-22Ch]
  __int64 v73; // [rsp+60h] [rbp-228h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-1E8h]
  char v75; // [rsp+A8h] [rbp-1E0h]
  char v76; // [rsp+A9h] [rbp-1DFh]
  _QWORD v77[3]; // [rsp+B0h] [rbp-1D8h] BYREF
  _OWORD v78[5]; // [rsp+C8h] [rbp-1C0h] BYREF
  __int64 v79; // [rsp+118h] [rbp-170h]
  __int64 v80; // [rsp+120h] [rbp-168h]
  __int64 v81; // [rsp+128h] [rbp-160h]
  int v82; // [rsp+130h] [rbp-158h]
  _QWORD v83[2]; // [rsp+138h] [rbp-150h] BYREF
  __int32 v84; // [rsp+148h] [rbp-140h]
  int v85; // [rsp+14Ch] [rbp-13Ch]
  __int64 v86; // [rsp+150h] [rbp-138h]
  __int64 v87; // [rsp+160h] [rbp-128h] BYREF
  void *ptr; // [rsp+168h] [rbp-120h]
  __int64 v89; // [rsp+170h] [rbp-118h]
  _BYTE v90[128]; // [rsp+178h] [rbp-110h] BYREF
  void *v91; // [rsp+1F8h] [rbp-90h]
  __int64 v92; // [rsp+200h] [rbp-88h]
  int v93; // [rsp+208h] [rbp-80h]
  char v94; // [rsp+20Ch] [rbp-7Ch]
  __int64 v95; // [rsp+210h] [rbp-78h] BYREF

  v63.m128i_i64[1] = __PAIR64__(a5, a3);
  v63.m128i_i64[0] = (__int64)v67;
  v9 = _mm_loadl_epi64(&v63);
  v69 = &v73;
  ptr = v90;
  v89 = 0x800000000LL;
  v91 = &v95;
  v10 = *(_QWORD *)(a1 + 232);
  *(__m128i *)v67 = _mm_unpacklo_epi64(v9, v9);
  v68 = 0;
  v70 = 8;
  v71 = 0;
  v72 = 1;
  v74 = a4;
  v75 = 0;
  v76 = a6;
  v87 = a1;
  v92 = 8;
  v93 = 0;
  v94 = 1;
  if ( (*(_BYTE *)(v10 + 1) & 8) != 0 )
  {
    if ( a2 )
    {
      v11 = (__int64)a2;
      do
      {
        if ( *(char *)(v11 + 8) >= 0 )
        {
          v12 = *(_QWORD *)(v11 + 360);
          if ( v12 )
          {
            v13 = *(_BYTE *)(v12 + 8) & 0x7F;
            if ( v13 == 24 || !v13 )
              break;
          }
        }
        v11 = *(_QWORD *)v11;
      }
      while ( v11 );
    }
    else
    {
      v11 = 0;
    }
    sub_1A46980((__int64)&v87, a2, v11, a4, a5, a6);
    v14 = (__m128 *)ptr;
    v15 = 16LL * (unsigned int)v89;
    v16 = (__int64 *)((char *)ptr + v15);
    if ( ptr != (char *)ptr + v15 )
    {
      v63.m128i_i64[0] = 16LL * (unsigned int)v89;
      _BitScanReverse64(&v17, v15 >> 4);
      sub_1A38290((__m128i *)ptr, (__m128i *)((char *)ptr + v15), 2LL * (int)(63 - (v17 ^ 0x3F)));
      v18 = (__int64 *)&v14[1];
      if ( v63.m128i_i64[0] <= 0x100uLL )
      {
        while ( v16 != v18 )
        {
          v51 = v18[1];
          v50 = v18 + 2;
          v63.m128i_i64[0] = *v18;
          if ( v51 < v14->m128_u64[1] )
          {
            if ( (char *)v18 - (char *)v14 > 0 )
            {
              v65 = v51;
              v64 = v18 + 2;
              memmove(
                &v50[-2 * (((char *)v18 - (char *)v14) >> 4)],
                &v18[-2 * (((char *)v18 - (char *)v14) >> 4)],
                (char *)v18 - (char *)v14);
              v50 = v64;
              v51 = v65;
            }
            v63.m128i_i64[0] = v51;
            *v14 = _mm_loadh_ps((const double *)v63.m128i_i64);
          }
          else
          {
            v52 = (__m128i *)(v18 - 2);
            if ( v51 < *(v18 - 1) )
            {
              while ( 1 )
              {
                v52[1] = _mm_loadu_si128(v52);
                if ( v51 >= v52[-1].m128i_i64[1] )
                  break;
                --v52;
              }
            }
            else
            {
              v52 = (__m128i *)v18;
            }
            v63.m128i_i64[0] = v51;
            *(__m128 *)v52 = _mm_loadh_ps((const double *)v63.m128i_i64);
          }
          v18 = v50;
        }
      }
      else
      {
        v19 = (__m128i *)&v14[16];
        do
        {
          while ( 1 )
          {
            v21 = v18[1];
            v20 = v18 + 2;
            v63.m128i_i64[0] = *v18;
            if ( v21 < v14->m128_u64[1] )
              break;
            v22 = v18 - 2;
            if ( v21 < *(v18 - 1) )
            {
              while ( 1 )
              {
                a8 = (__m128)_mm_loadu_si128((const __m128i *)v22);
                *((__m128 *)v22 + 1) = a8;
                if ( v21 >= *(v22 - 1) )
                  break;
                v22 -= 2;
              }
            }
            else
            {
              v22 = v18;
            }
            v63.m128i_i64[0] = v21;
            v18 += 2;
            *(__m128 *)v22 = _mm_loadh_ps((const double *)v63.m128i_i64);
            if ( v19 == (__m128i *)v20 )
              goto LABEL_20;
          }
          if ( (char *)v18 - (char *)v14 > 0 )
          {
            v66 = v21;
            v65 = (unsigned __int64)v19;
            v64 = v18 + 2;
            memmove(
              &v20[-2 * (((char *)v18 - (char *)v14) >> 4)],
              &v18[-2 * (((char *)v18 - (char *)v14) >> 4)],
              (char *)v18 - (char *)v14);
            v20 = v64;
            v19 = (__m128i *)v65;
            v21 = v66;
          }
          v63.m128i_i64[0] = v21;
          v18 = v20;
          *v14 = _mm_loadh_ps((const double *)v63.m128i_i64);
        }
        while ( v19 != (__m128i *)v20 );
LABEL_20:
        while ( v16 != (__int64 *)v19 )
        {
          v23 = v19->m128i_u64[1];
          v24 = v19 - 1;
          if ( v23 < v19[-1].m128i_i64[1] )
          {
            while ( 1 )
            {
              v24[1] = _mm_loadu_si128(v24);
              if ( v23 >= v24[-1].m128i_i64[1] )
                break;
              --v24;
            }
          }
          else
          {
            v24 = v19;
          }
          v63.m128i_i64[0] = v23;
          ++v19;
          *(__m128 *)v24 = _mm_loadh_ps((const double *)v63.m128i_i64);
        }
      }
    }
  }
  v77[0] = 0;
  v78[4] = 0;
  v77[1] = v78;
  v77[2] = 0x800000000LL;
  v79 = 0;
  v80 = a1;
  v81 = 0;
  v82 = 0;
  sub_B85890(v83, 0);
  v83[1] = 0;
  v85 = 0;
  v84 = v63.m128i_i32[2];
  v86 = 0x101010000LL;
  sub_1A395A0((__int64)v77);
  BYTE5(v86) = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v74 + 16LL))(v74);
  if ( !v63.m128i_i8[12] )
  {
    v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
    v54 = sub_704780((__int64 *)(v53 + 72), v53, v25, v26, v27, v28);
    if ( v54 )
      v54 += 5;
    if ( v72 )
    {
      v55 = (char *)v69;
      v56 = 8LL * HIDWORD(v70);
      v57 = (char *)v69 + v56;
      if ( v69 != (char *)v69 + v56 )
      {
        v58 = (char *)v69;
        if ( v54 == *(_QWORD **)v69 )
          goto LABEL_81;
        v58 = (char *)v69 + 8;
        if ( v57 != (char *)v69 + 8 )
        {
          while ( v54 != *(_QWORD **)v58 )
          {
            v58 += 8;
            if ( v57 == v58 )
              goto LABEL_79;
          }
          goto LABEL_81;
        }
      }
LABEL_79:
      if ( HIDWORD(v70) < (unsigned int)v70 )
      {
        ++HIDWORD(v70);
        *(_QWORD *)v57 = v54;
        v55 = (char *)v69;
        v58 = (char *)v69 + v56;
        goto LABEL_81;
      }
    }
    v62 = sub_2236760(&v69, v54);
    v55 = (char *)v69;
    v58 = (char *)v62;
    if ( !v72 )
    {
      v59 = (char *)v69 + 8 * (unsigned int)v70;
      goto LABEL_82;
    }
LABEL_81:
    v59 = &v55[8 * HIDWORD(v70)];
LABEL_82:
    if ( v59 != v58 && *(_QWORD *)v58 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v60 = v58 + 8;
      do
      {
        v61 = v60;
        if ( v59 == v60 )
          break;
        v60 += 8;
      }
      while ( *(_QWORD *)v61 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  v29 = operator new(0x28u);
  *(_QWORD *)(v29 + 16) = 0;
  *(_QWORD *)(v29 + 24) = 0;
  *(_DWORD *)(v29 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v29, (std::__detail::_List_node_base *)v67);
  ++v68;
  sub_1A654B0(
    (std::__detail::_List_node_base *)v67,
    (unsigned __int64)a2,
    (__int64)v77,
    (__int64)&v87,
    v30,
    v31,
    (__m128)0LL,
    *(double *)a8.m128_u64);
  v32 = v67[1];
  --v68;
  std::__detail::_List_node_base::_M_unhook(v67[1]);
  v33 = *((unsigned int *)v32 + 8);
  if ( (_DWORD)v33 )
  {
    v34 = *((_QWORD **)v32 + 2);
    v63.m128i_i64[0] = (__int64)&v34[2 * v33];
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(*v34 + 2LL) > 1 )
        {
          v35 = v34[1];
          if ( v35 )
          {
            if ( (v35 & 4) != 0 )
            {
              v36 = (void **)(v35 & 0xFFFFFFFFFFFFFFF8LL);
              v37 = v36;
              if ( v36 )
                break;
            }
          }
        }
        v34 += 2;
        if ( (_QWORD *)v63.m128i_i64[0] == v34 )
          goto LABEL_37;
      }
      v38 = (void **)*v36;
      if ( v38 != v37 + 2 )
        free(v38);
      v34 += 2;
      operator delete(v37, 0x30u);
    }
    while ( (_QWORD *)v63.m128i_i64[0] != v34 );
LABEL_37:
    v33 = *((unsigned int *)v32 + 8);
  }
  operator delete(*((_QWORD *)v32 + 2), 16 * v33, 8);
  operator delete(v32);
  sub_169D230((__int64)v77);
  if ( !v94 )
    free(v91);
  if ( ptr != v90 )
    free(ptr);
  if ( !v72 )
    free(v69);
  v39 = v67[0];
  if ( (std::__detail::_List_node_base **)v67[0] != v67 )
  {
    do
    {
      v40 = *(std::__detail::_List_node_base ***)v39;
      v41 = *((_QWORD **)v39 + 2);
      v42 = *((unsigned int *)v39 + 8);
      v43 = 2 * v42;
      if ( (_DWORD)v42 )
      {
        v44 = &v41[v43];
        do
        {
          while ( 1 )
          {
            if ( *v41 != -2 && *v41 != -1 )
            {
              v45 = v41[1];
              if ( v45 )
              {
                if ( (v45 & 4) != 0 )
                {
                  v46 = (void **)(v45 & 0xFFFFFFFFFFFFFFF8LL);
                  v47 = v46;
                  if ( v46 )
                    break;
                }
              }
            }
            v41 += 2;
            if ( v44 == v41 )
              goto LABEL_55;
          }
          v48 = (void **)*v46;
          if ( v48 != v47 + 2 )
            free(v48);
          v41 += 2;
          operator delete(v47, 0x30u);
        }
        while ( v44 != v41 );
LABEL_55:
        v41 = *((_QWORD **)v39 + 2);
        v43 = 2LL * *((unsigned int *)v39 + 8);
      }
      operator delete(v41, v43 * 8, 8);
      v49 = v39;
      v39 = (std::__detail::_List_node_base *)v40;
      operator delete(v49);
    }
    while ( v40 != v67 );
  }
}
