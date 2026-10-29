__int64 __fastcall sub_465F90(__int64 a1)
{
  _BYTE *v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rbp
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  int v6; // r9d
  int v7; // ecx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r8
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r14
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // r8d
  __m128i v21; // xmm0
  unsigned __int64 i; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r12
  __int64 v25; // r14
  _UNKNOWN **v26; // rax
  void *v27; // r15
  __int64 v28; // rbp
  size_t v29; // r8
  struct _Unwind_Exception *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __m128i *v34; // rax
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __m128i v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm3
  __m128i v42; // xmm4
  __m128i v43; // xmm0
  __m128 v44; // xmm1
  void **v45; // r12
  void **v46; // rbp
  void *v47; // rdi
  void **v48; // rax
  __int64 v50; // rbp
  size_t v51; // r8
  struct _Unwind_Exception *v52; // rax
  __int64 v53; // rax
  struct _Unwind_Exception *v54; // rax
  size_t v55; // r8
  __int64 v56; // r15
  __int64 v57; // rax
  size_t v58; // r8
  __m128i v59; // xmm5
  __m128i si128; // xmm6
  __m128i v61; // xmm0
  __m128 v62; // xmm1
  __m128i v63; // xmm1
  struct _Unwind_Exception *v64; // rax
  void *v65; // rax
  size_t v66; // r8
  const void *v67; // rsi
  void *v68; // rax
  size_t v69; // r8
  const void *v70; // rsi
  struct _Unwind_Exception *v71; // [rsp+0h] [rbp-1C0h]
  size_t n[2]; // [rsp+8h] [rbp-1B8h] BYREF
  _QWORD v73[9]; // [rsp+18h] [rbp-1A8h] BYREF
  _BYTE v74[216]; // [rsp+60h] [rbp-160h] BYREF
  __int128 v75; // [rsp+138h] [rbp-88h] BYREF
  _QWORD *v76; // [rsp+148h] [rbp-78h]
  __m128i v77; // [rsp+150h] [rbp-70h] BYREF
  unsigned __int64 v78; // [rsp+160h] [rbp-60h]
  _QWORD *v79; // [rsp+168h] [rbp-58h]
  __int64 v80; // [rsp+170h] [rbp-50h]
  unsigned __int64 v81; // [rsp+180h] [rbp-40h] BYREF

  v81 = __readfsqword(0x28u);
  v2 = v74;
  v71 = *(struct _Unwind_Exception **)a1;
  do
  {
    v3 = v2 - 72;
    do
    {
      *v3 = 0;
      v3 += 3;
      *((_OWORD *)v3 - 1) = 0;
    }
    while ( v3 != (_QWORD *)v2 );
    v2 = v3 + 9;
  }
  while ( v3 + 9 != &v81 );
  v80 = 4;
  v76 = nullptr;
  v78 = 0;
  v79 = nullptr;
  v75 = 0;
  v77 = 0;
  HIDWORD(v80) = HIDWORD(v71->private_2);
  if ( SHIDWORD(v80) <= 0 )
    goto LABEL_50;
  v4 = 0;
  do
  {
    switch_dbctx(*((int *)&v71->private_1 + v4));
    bpt_kernel_interface = get_bpt_kernel_interface();
    *((_QWORD *)&v75 + v4) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), double))**bpt_kernel_interface)(
                               bpt_kernel_interface,
                               0.0);
    v77.m128i_i64[v4++] = 0;
    v7 = HIDWORD(v80);
  }
  while ( SHIDWORD(v80) > (int)v4 );
  if ( SHIDWORD(v80) <= 0 )
    goto LABEL_50;
  v8 = v77.m128i_i64[0];
  v9 = (_QWORD *)v75;
LABEL_10:
  if ( v8 >= v9[1] )
  {
LABEL_46:
    if ( v7 == 1 || v77.m128i_i64[1] >= *(_QWORD *)(*((_QWORD *)&v75 + 1) + 8LL) )
      goto LABEL_50;
    v10 = *(_QWORD *)(**((_QWORD **)&v75 + 1) + 8 * v77.m128i_i64[1]);
    goto LABEL_49;
  }
LABEL_11:
  v10 = *(_QWORD *)(*v9 + 8 * v8);
  if ( v7 == 1 )
  {
LABEL_88:
    if ( !v10 )
      goto LABEL_50;
    v7 = 1;
    goto LABEL_17;
  }
  if ( v77.m128i_i64[1] >= *(_QWORD *)(*((_QWORD *)&v75 + 1) + 8LL) )
    goto LABEL_49;
  v11 = *(_QWORD *)(**((_QWORD **)&v75 + 1) + 8 * v77.m128i_i64[1]);
  if ( !v10 )
  {
    v10 = *(_QWORD *)(**((_QWORD **)&v75 + 1) + 8 * v77.m128i_i64[1]);
LABEL_49:
    if ( !v10 )
      goto LABEL_50;
    goto LABEL_17;
  }
  if ( v11 )
  {
    v12 = compare_bpt_locs(v10 + 32, v11 + 32);
    v7 = HIDWORD(v80);
    if ( v12 > 0 )
      v10 = v11;
  }
LABEL_17:
  LODWORD(v80) = *(_DWORD *)(v10 + 44);
  v79 = &v73[9 * (int)v80];
  while ( v7 > 0 )
  {
    v9 = (_QWORD *)v75;
    v8 = v77.m128i_i64[0];
    v17 = *(_QWORD *)(v75 + 8);
    if ( v77.m128i_i64[0] < v17
      && (v18 = *(_QWORD *)(*(_QWORD *)v75 + 8 * v77.m128i_i64[0])) != 0
      && (_DWORD)v80 == *(_DWORD *)(v18 + 44) )
    {
      if ( v7 != 1
        && v77.m128i_i64[1] < *(_QWORD *)(*((_QWORD *)&v75 + 1) + 8LL)
        && (v13 = *(_QWORD *)(**((_QWORD **)&v75 + 1) + 8 * v77.m128i_i64[1])) != 0
        && (_DWORD)v80 == *(_DWORD *)(v13 + 44) )
      {
        v14 = compare_bpt_locs(v18 + 32, v13 + 32);
        if ( v14 )
        {
          if ( v14 < 0 )
            sub_4659C0((__int64)v73, v18 + 32, v18, 0, v15, v16);
          else
            sub_4659C0((__int64)v73, v13 + 32, 0, v13, v15, v16);
        }
        else if ( sub_463830(v18, v13) )
        {
          v21 = _mm_loadl_epi64((const __m128i *)&off_23ACBD0);
          v77 = _mm_add_epi64(_mm_unpacklo_epi64(v21, v21), _mm_loadu_si128(&v77));
        }
        else
        {
          sub_4659C0((__int64)v73, v18 + 32, v18, v13, v20, v6);
        }
      }
      else
      {
        sub_4659C0((__int64)v73, v18 + 32, *(_QWORD *)(*(_QWORD *)v75 + 8 * v77.m128i_i64[0]), 0, v75, v6);
      }
    }
    else
    {
      if ( v7 == 1 )
      {
        if ( v77.m128i_i64[0] >= v17 )
          break;
        v10 = *(_QWORD *)(*(_QWORD *)v75 + 8 * v77.m128i_i64[0]);
        goto LABEL_88;
      }
      if ( v77.m128i_i64[1] >= *(_QWORD *)(*((_QWORD *)&v75 + 1) + 8LL)
        || (v19 = *(_QWORD *)(**((_QWORD **)&v75 + 1) + 8 * v77.m128i_i64[1])) == 0
        || (_DWORD)v80 != *(_DWORD *)(v19 + 44) )
      {
        if ( v7 != 2 )
        {
          v6 = v80;
          for ( i = v78; i < v76[1]; v78 = i )
          {
            v23 = *(_QWORD *)(*v76 + 8 * i);
            if ( !v23 )
              break;
            ++i;
            if ( *(_DWORD *)(v23 + 44) != (_DWORD)v80 )
            {
              if ( v77.m128i_i64[0] < *(_QWORD *)(v75 + 8) )
                goto LABEL_11;
              goto LABEL_46;
            }
          }
        }
        goto LABEL_10;
      }
      sub_4659C0((__int64)v73, v19 + 32, 0, v19, v75, v6);
    }
    v7 = HIDWORD(v80);
  }
LABEL_50:
  v24 = v73;
  v25 = 0;
  while ( v24[1] )
  {
LABEL_54:
    v26 = (_UNKNOWN **)&unk_2B291C0;
    while ( *v26 != (_UNKNOWN *)v25 )
    {
      v26 += 2;
      if ( v26 == &off_2B29200 )
      {
        if ( !under_debugger )
          interr(2659);
        BUG();
      }
    }
    v27 = v26[1];
    if ( v25 )
    {
      v50 = operator new(0x98u);
      v51 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v50 = &off_2B26160;
      v52 = *(struct _Unwind_Exception **)a1;
      *(_QWORD *)(v50 + 16) = 0;
      *(_QWORD *)(v50 + 8) = v52;
      *(_OWORD *)(v50 + 24) = 0;
      if ( v51 )
      {
        n[0] = v51;
        v68 = (void *)qalloc_or_throw(v51);
        v69 = n[0];
        v70 = *(const void **)(a1 + 8);
        *(_QWORD *)(v50 + 16) = v68;
        *(_QWORD *)(v50 + 32) = v69;
        memcpy(v68, v70, v69);
        *(_QWORD *)(v50 + 24) = n[0];
      }
      v53 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v50 + 120) = -1;
      *(_QWORD *)(v50 + 40) = v53;
      LODWORD(v53) = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(v50 + 128) = -1;
      *(_DWORD *)(v50 + 48) = v53;
      *(_QWORD *)(v50 + 136) = -1;
      *(_QWORD *)(v50 + 144) = 0;
      *(_OWORD *)(v50 + 56) = 0;
      *(_OWORD *)(v50 + 72) = 0;
      *(_OWORD *)(v50 + 88) = 0;
      *(_OWORD *)(v50 + 104) = 0;
      merge_handler_ctr(v50, v27);
      v54 = *(struct _Unwind_Exception **)a1;
      *(_QWORD *)(v50 + 72) = 0;
      if ( SHIDWORD(v54->private_2) > 0 )
      {
        v55 = (size_t)v24;
        v56 = 0;
        do
        {
          n[0] = v55;
          v57 = operator new(0x40u);
          v58 = n[0];
          v59 = _mm_cvtsi32_si128(v56);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
          v61 = _mm_cvtsi32_si128(*((_DWORD *)&v71->private_1 + v56));
          *(_QWORD *)v57 = &off_2B28DF0;
          v55 = v58 + 24;
          v62 = _mm_loadh_ps((const double *)(v55 - 24));
          *(_QWORD *)(v50 + 8 * v56++ + 56) = v57;
          *(__m128 *)(v57 + 32) = v62;
          v63 = _mm_loadu_si128((const __m128i *)(v55 - 16));
          *(__m128i *)(v57 + 16) = si128;
          *(__m128i *)(v57 + 48) = v63;
          *(_QWORD *)(v57 + 8) = _mm_unpacklo_epi32(v61, v59).m128i_u64[0];
          v64 = *(struct _Unwind_Exception **)a1;
          *(_QWORD *)(v55 - 24) = 0;
          *(_OWORD *)(v55 - 16) = 0;
        }
        while ( SHIDWORD(v64->private_2) > (int)v56 );
      }
      break;
    }
    v28 = operator new(0xF8u);
    v29 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v28 = &off_2B26160;
    v30 = *(struct _Unwind_Exception **)a1;
    *(_QWORD *)(v28 + 16) = 0;
    *(_QWORD *)(v28 + 8) = v30;
    *(_OWORD *)(v28 + 24) = 0;
    if ( v29 )
    {
      n[0] = v29;
      v65 = (void *)qalloc_or_throw(v29);
      v66 = n[0];
      v67 = *(const void **)(a1 + 8);
      *(_QWORD *)(v28 + 16) = v65;
      *(_QWORD *)(v28 + 32) = v66;
      memcpy(v65, v67, v66);
      *(_QWORD *)(v28 + 24) = n[0];
    }
    v31 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v28 + 120) = -1;
    *(_QWORD *)(v28 + 40) = v31;
    LODWORD(v31) = *(_DWORD *)(a1 + 40);
    *(_QWORD *)(v28 + 128) = -1;
    *(_DWORD *)(v28 + 48) = v31;
    *(_QWORD *)(v28 + 136) = -1;
    *(_QWORD *)(v28 + 144) = 0;
    *(_OWORD *)(v28 + 56) = 0;
    *(_OWORD *)(v28 + 72) = 0;
    *(_OWORD *)(v28 + 88) = 0;
    *(_OWORD *)(v28 + 104) = 0;
    merge_handler_ctr(v28, v27);
    *(_QWORD *)(v28 + 152) = 0;
    *(_QWORD *)v28 = &off_2B28F60;
    v32 = (_QWORD *)(v28 + 176);
    n[1] = v28 + 176;
    v33 = v28 + 176;
    *(_OWORD *)(v28 + 160) = 0;
    do
    {
      *v32 = 0;
      v32 += 3;
      *((_OWORD *)v32 - 1) = 0;
    }
    while ( (_QWORD *)(v28 + 248) != v32 );
    v34 = (__m128i *)v73;
    do
    {
      v35 = *(_QWORD *)v33;
      v36 = _mm_loadu_si128((const __m128i *)(v33 + 8));
      v34 = (__m128i *)((char *)v34 + 24);
      v33 += 24;
      v37 = v34[-2].m128i_i64[1];
      v38 = _mm_loadu_si128(v34 - 1);
      v34[-2].m128i_i64[1] = v35;
      *(_QWORD *)(v33 - 24) = v37;
      *(__m128i *)(v33 - 16) = v38;
      v34[-1] = v36;
    }
    while ( v34 != (__m128i *)v74 );
    *(_QWORD *)(v28 + 72) = 0;
    n[0] = v28 + 152;
    if ( *(int *)(*(_QWORD *)(v28 + 8) + 28LL) > 0 )
    {
      do
      {
        v39 = operator new(0x30u);
        v40 = *(_QWORD *)(v28 + 8);
        v41 = _mm_cvtsi32_si128(v25);
        v42 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
        v43 = _mm_cvtsi32_si128(*(_DWORD *)(v40 + 4LL * (int)v25 + 16));
        *(_QWORD *)(v28 + 8 * v25++ + 56) = v39;
        v44 = _mm_loadh_ps((const double *)n);
        *(_QWORD *)v39 = off_2B28EA8;
        *(__m128i *)(v39 + 16) = v42;
        *(__m128 *)(v39 + 32) = v44;
        *(_QWORD *)(v39 + 8) = _mm_unpacklo_epi32(v43, v41).m128i_u64[0];
      }
      while ( *(_DWORD *)(v40 + 28) > (int)v25 );
    }
    v24 += 9;
    v25 = 1;
  }
  while ( ++v25 != 4 )
  {
    v24 += 9;
    if ( v24[1] )
      goto LABEL_54;
  }
  v45 = (void **)&v75;
  do
  {
    do
    {
      v45 -= 9;
      v46 = v45 + 6;
    }
    while ( !v45 );
    v47 = *v46;
    if ( *v46 )
      goto LABEL_71;
    while ( 2 )
    {
      v48 = v46 - 3;
      if ( v45 != v46 )
      {
        while ( 1 )
        {
          v46 = v48;
          v47 = *v48;
          if ( *v48 )
            break;
          v48 -= 3;
          if ( v45 == v46 )
            goto LABEL_75;
        }
LABEL_71:
        v46[1] = nullptr;
        qfree(v47);
        continue;
      }
      break;
    }
LABEL_75:
    ;
  }
  while ( v45 != v73 );
  return 0;
}
