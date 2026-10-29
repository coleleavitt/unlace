__int64 __fastcall sub_451BC0(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 (__fastcall ***bpt_kernel_interface)(_QWORD, double); // rax
  int v8; // r9d
  int v9; // ecx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r8
  __int64 v12; // r12
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  unsigned __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // r8d
  __m128i v23; // xmm0
  unsigned __int64 i; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r12
  __int64 v27; // r14
  _UNKNOWN **v28; // rax
  const char *v29; // r15
  __int64 v30; // rbp
  size_t v31; // r8
  struct _Unwind_Exception *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __m128i v39; // xmm1
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm3
  __m128i v43; // xmm4
  __m128i v44; // xmm0
  __m128 v45; // xmm1
  void **v46; // r12
  void **v47; // rbp
  void *v48; // rdi
  void **v49; // rax
  __int64 v51; // rbp
  size_t v52; // r8
  struct _Unwind_Exception *v53; // rax
  __int64 v54; // rax
  struct _Unwind_Exception *v55; // rax
  size_t v56; // r8
  __int64 v57; // r15
  __int64 v58; // rax
  size_t v59; // r8
  __m128i v60; // xmm5
  __m128i si128; // xmm6
  __m128i v62; // xmm0
  __m128 v63; // xmm1
  __m128i v64; // xmm1
  struct _Unwind_Exception *v65; // rax
  void *v66; // rax
  size_t v67; // r8
  const void *v68; // rsi
  void *v69; // rax
  size_t v70; // r8
  const void *v71; // rsi
  struct _Unwind_Exception *v72; // [rsp+0h] [rbp-1C0h]
  size_t n[2]; // [rsp+8h] [rbp-1B8h] BYREF
  _QWORD v74[9]; // [rsp+18h] [rbp-1A8h] BYREF
  _BYTE v75[216]; // [rsp+60h] [rbp-160h] BYREF
  __int128 v76; // [rsp+138h] [rbp-88h] BYREF
  const char *v77; // [rsp+148h] [rbp-78h]
  __m128i v78; // [rsp+150h] [rbp-70h] BYREF
  unsigned __int64 v79; // [rsp+160h] [rbp-60h]
  _QWORD *v80; // [rsp+168h] [rbp-58h]
  __int64 v81; // [rsp+170h] [rbp-50h]
  unsigned __int64 v82; // [rsp+180h] [rbp-40h] BYREF

  v82 = __readfsqword(0x28u);
  v3 = v75;
  v72 = *(struct _Unwind_Exception **)a1;
  do
  {
    v4 = v3 - 72;
    do
    {
      *v4 = 0;
      v4 += 3;
      *((_OWORD *)v4 - 1) = 0;
    }
    while ( v4 != (_QWORD *)v3 );
    v3 = v4 + 9;
  }
  while ( v4 + 9 != &v82 );
  v81 = 4;
  v77 = nullptr;
  v79 = 0;
  v80 = nullptr;
  v76 = 0;
  v78 = 0;
  HIDWORD(v81) = HIDWORD(v72->private_2);
  if ( SHIDWORD(v81) <= 0 )
    goto LABEL_50;
  v5 = 0;
  do
  {
    v6 = *((int *)&v72->private_1 + v5);
    switch_dbctx(v6);
    bpt_kernel_interface = (__int64 (__fastcall ***)(_QWORD, double))get_bpt_kernel_interface(v6, a2);
    *((_QWORD *)&v76 + v5) = (**bpt_kernel_interface)(bpt_kernel_interface, 0.0);
    v78.m128i_i64[v5++] = 0;
    v9 = HIDWORD(v81);
  }
  while ( SHIDWORD(v81) > (int)v5 );
  if ( SHIDWORD(v81) <= 0 )
    goto LABEL_50;
  v10 = v78.m128i_i64[0];
  v11 = (_QWORD *)v76;
LABEL_10:
  if ( v10 >= v11[1] )
  {
LABEL_46:
    if ( v9 == 1 || v78.m128i_i64[1] >= *(_QWORD *)(*((_QWORD *)&v76 + 1) + 8LL) )
      goto LABEL_50;
    v12 = *(_QWORD *)(**((_QWORD **)&v76 + 1) + 8 * v78.m128i_i64[1]);
    goto LABEL_49;
  }
LABEL_11:
  v12 = *(_QWORD *)(*v11 + 8 * v10);
  if ( v9 == 1 )
  {
LABEL_88:
    if ( !v12 )
      goto LABEL_50;
    v9 = 1;
    goto LABEL_17;
  }
  if ( v78.m128i_i64[1] >= *(_QWORD *)(*((_QWORD *)&v76 + 1) + 8LL) )
    goto LABEL_49;
  v13 = *(_QWORD *)(**((_QWORD **)&v76 + 1) + 8 * v78.m128i_i64[1]);
  if ( !v12 )
  {
    v12 = *(_QWORD *)(**((_QWORD **)&v76 + 1) + 8 * v78.m128i_i64[1]);
LABEL_49:
    if ( !v12 )
      goto LABEL_50;
    goto LABEL_17;
  }
  if ( v13 )
  {
    a2 = v13 + 32;
    v14 = compare_bpt_locs(v12 + 32, v13 + 32);
    v9 = HIDWORD(v81);
    if ( v14 > 0 )
      v12 = v13;
  }
LABEL_17:
  LODWORD(v81) = *(_DWORD *)(v12 + 40);
  v80 = &v74[9 * (int)v81];
  while ( v9 > 0 )
  {
    v11 = (_QWORD *)v76;
    v10 = v78.m128i_i64[0];
    v19 = *(_QWORD *)(v76 + 8);
    if ( v78.m128i_i64[0] < v19
      && (v20 = *(_QWORD *)(*(_QWORD *)v76 + 8 * v78.m128i_i64[0])) != 0
      && (_DWORD)v81 == *(_DWORD *)(v20 + 40) )
    {
      if ( v9 != 1
        && v78.m128i_i64[1] < *(_QWORD *)(*((_QWORD *)&v76 + 1) + 8LL)
        && (v15 = *(_QWORD *)(**((_QWORD **)&v76 + 1) + 8 * v78.m128i_i64[1])) != 0
        && (_DWORD)v81 == *(_DWORD *)(v15 + 40) )
      {
        v16 = compare_bpt_locs(v20 + 32, v15 + 32);
        if ( v16 )
        {
          if ( v16 < 0 )
          {
            a2 = v20 + 32;
            sub_451620((__int64)v74, v20 + 32, v20, 0, v17, v18);
          }
          else
          {
            a2 = v15 + 32;
            sub_451620((__int64)v74, v15 + 32, 0, v15, v17, v18);
          }
        }
        else
        {
          a2 = v15;
          if ( sub_44F4B0(v20, v15) )
          {
            v23 = _mm_loadl_epi64((const __m128i *)&qword_2388B88);
            v78 = _mm_add_epi64(_mm_unpacklo_epi64(v23, v23), _mm_loadu_si128(&v78));
          }
          else
          {
            a2 = v20 + 32;
            sub_451620((__int64)v74, v20 + 32, v20, v15, v22, v8);
          }
        }
      }
      else
      {
        a2 = v20 + 32;
        sub_451620((__int64)v74, v20 + 32, *(_QWORD *)(*(_QWORD *)v76 + 8 * v78.m128i_i64[0]), 0, v76, v8);
      }
    }
    else
    {
      if ( v9 == 1 )
      {
        if ( v78.m128i_i64[0] >= v19 )
          break;
        v12 = *(_QWORD *)(*(_QWORD *)v76 + 8 * v78.m128i_i64[0]);
        goto LABEL_88;
      }
      if ( v78.m128i_i64[1] >= *(_QWORD *)(*((_QWORD *)&v76 + 1) + 8LL)
        || (v21 = *(_QWORD *)(**((_QWORD **)&v76 + 1) + 8 * v78.m128i_i64[1])) == 0
        || (a2 = *(unsigned int *)(v21 + 40), (_DWORD)v81 != (_DWORD)a2) )
      {
        if ( v9 != 2 )
        {
          a2 = (__int64)v77;
          v8 = v81;
          for ( i = v79; i < *((_QWORD *)v77 + 1); v79 = i )
          {
            v25 = *(_QWORD *)(*(_QWORD *)v77 + 8 * i);
            if ( !v25 )
              break;
            ++i;
            if ( *(_DWORD *)(v25 + 40) != (_DWORD)v81 )
            {
              if ( v78.m128i_i64[0] < *(_QWORD *)(v76 + 8) )
                goto LABEL_11;
              goto LABEL_46;
            }
          }
        }
        goto LABEL_10;
      }
      a2 = v21 + 32;
      sub_451620((__int64)v74, v21 + 32, 0, v21, v76, v8);
    }
    v9 = HIDWORD(v81);
  }
LABEL_50:
  v26 = v74;
  v27 = 0;
  while ( v26[1] )
  {
LABEL_54:
    v28 = (_UNKNOWN **)&unk_2AFF200;
    while ( *v28 != (_UNKNOWN *)v27 )
    {
      v28 += 2;
      if ( v28 == &off_2AFF240 )
      {
        if ( !under_debugger )
          interr(2659);
        BUG();
      }
    }
    v29 = (const char *)v28[1];
    if ( v27 )
    {
      v51 = operator new(0x98u);
      v52 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v51 = &off_2AFD020;
      v53 = *(struct _Unwind_Exception **)a1;
      *(_QWORD *)(v51 + 16) = 0;
      *(_QWORD *)(v51 + 8) = v53;
      *(_OWORD *)(v51 + 24) = 0;
      if ( v52 )
      {
        n[0] = v52;
        v69 = (void *)qalloc_or_throw(v52, (const char *)a2);
        v70 = n[0];
        v71 = *(const void **)(a1 + 8);
        *(_QWORD *)(v51 + 16) = v69;
        *(_QWORD *)(v51 + 32) = v70;
        memcpy(v69, v71, v70);
        *(_QWORD *)(v51 + 24) = n[0];
      }
      v54 = *(_QWORD *)(a1 + 32);
      a2 = (__int64)v29;
      *(_QWORD *)(v51 + 120) = -1;
      *(_QWORD *)(v51 + 40) = v54;
      LODWORD(v54) = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(v51 + 128) = -1;
      *(_DWORD *)(v51 + 48) = v54;
      *(_QWORD *)(v51 + 136) = 0xFFFFFFFFLL;
      *(_DWORD *)(v51 + 144) = 0;
      *(_OWORD *)(v51 + 56) = 0;
      *(_OWORD *)(v51 + 72) = 0;
      *(_OWORD *)(v51 + 88) = 0;
      *(_OWORD *)(v51 + 104) = 0;
      merge_handler_ctr();
      v55 = *(struct _Unwind_Exception **)a1;
      *(_QWORD *)(v51 + 72) = 0;
      if ( SHIDWORD(v55->private_2) > 0 )
      {
        v56 = (size_t)v26;
        v57 = 0;
        do
        {
          n[0] = v56;
          v58 = operator new(0x40u);
          v59 = n[0];
          v60 = _mm_cvtsi32_si128(v57);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
          v62 = _mm_cvtsi32_si128(*((_DWORD *)&v72->private_1 + v57));
          *(_QWORD *)v58 = &off_2AFEE30;
          v56 = v59 + 24;
          v63 = _mm_loadh_ps((const double *)(v56 - 24));
          *(_QWORD *)(v51 + 8 * v57++ + 56) = v58;
          *(__m128 *)(v58 + 32) = v63;
          v64 = _mm_loadu_si128((const __m128i *)(v56 - 16));
          *(__m128i *)(v58 + 16) = si128;
          *(__m128i *)(v58 + 48) = v64;
          *(_QWORD *)(v58 + 8) = _mm_unpacklo_epi32(v62, v60).m128i_u64[0];
          v65 = *(struct _Unwind_Exception **)a1;
          *(_QWORD *)(v56 - 24) = 0;
          *(_OWORD *)(v56 - 16) = 0;
        }
        while ( SHIDWORD(v65->private_2) > (int)v57 );
      }
      break;
    }
    v30 = operator new(0xF8u);
    v31 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v30 = &off_2AFD020;
    v32 = *(struct _Unwind_Exception **)a1;
    *(_QWORD *)(v30 + 16) = 0;
    *(_QWORD *)(v30 + 8) = v32;
    *(_OWORD *)(v30 + 24) = 0;
    if ( v31 )
    {
      n[0] = v31;
      v66 = (void *)qalloc_or_throw(v31, (const char *)a2);
      v67 = n[0];
      v68 = *(const void **)(a1 + 8);
      *(_QWORD *)(v30 + 16) = v66;
      *(_QWORD *)(v30 + 32) = v67;
      memcpy(v66, v68, v67);
      *(_QWORD *)(v30 + 24) = n[0];
    }
    v33 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v30 + 120) = -1;
    *(_QWORD *)(v30 + 40) = v33;
    LODWORD(v33) = *(_DWORD *)(a1 + 40);
    *(_QWORD *)(v30 + 128) = -1;
    *(_DWORD *)(v30 + 48) = v33;
    *(_QWORD *)(v30 + 136) = 0xFFFFFFFFLL;
    *(_DWORD *)(v30 + 144) = 0;
    *(_OWORD *)(v30 + 56) = 0;
    *(_OWORD *)(v30 + 72) = 0;
    *(_OWORD *)(v30 + 88) = 0;
    *(_OWORD *)(v30 + 104) = 0;
    merge_handler_ctr();
    *(_QWORD *)(v30 + 152) = 0;
    *(_QWORD *)v30 = &off_2AFEFA0;
    v34 = (_QWORD *)(v30 + 176);
    n[1] = v30 + 176;
    v35 = v30 + 176;
    *(_OWORD *)(v30 + 160) = 0;
    do
    {
      *v34 = 0;
      v34 += 3;
      *((_OWORD *)v34 - 1) = 0;
    }
    while ( (_QWORD *)(v30 + 248) != v34 );
    v36 = (__m128i *)v74;
    do
    {
      a2 = *(_QWORD *)v35;
      v37 = _mm_loadu_si128((const __m128i *)(v35 + 8));
      v36 = (__m128i *)((char *)v36 + 24);
      v35 += 24;
      v38 = v36[-2].m128i_i64[1];
      v39 = _mm_loadu_si128(v36 - 1);
      v36[-2].m128i_i64[1] = a2;
      *(_QWORD *)(v35 - 24) = v38;
      *(__m128i *)(v35 - 16) = v39;
      v36[-1] = v37;
    }
    while ( v36 != (__m128i *)v75 );
    *(_QWORD *)(v30 + 72) = 0;
    n[0] = v30 + 152;
    if ( *(int *)(*(_QWORD *)(v30 + 8) + 28LL) > 0 )
    {
      do
      {
        v40 = operator new(0x30u);
        v41 = *(_QWORD *)(v30 + 8);
        a2 = (int)v27;
        v42 = _mm_cvtsi32_si128(v27);
        v43 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
        v44 = _mm_cvtsi32_si128(*(_DWORD *)(v41 + 4LL * (int)v27 + 16));
        *(_QWORD *)(v30 + 8 * v27++ + 56) = v40;
        v45 = _mm_loadh_ps((const double *)n);
        *(_QWORD *)v40 = off_2AFEEE8;
        *(__m128i *)(v40 + 16) = v43;
        *(__m128 *)(v40 + 32) = v45;
        *(_QWORD *)(v40 + 8) = _mm_unpacklo_epi32(v44, v42).m128i_u64[0];
      }
      while ( *(_DWORD *)(v41 + 28) > (int)v27 );
    }
    v26 += 9;
    v27 = 1;
  }
  while ( ++v27 != 4 )
  {
    v26 += 9;
    if ( v26[1] )
      goto LABEL_54;
  }
  v46 = (void **)&v76;
  do
  {
    do
    {
      v46 -= 9;
      v47 = v46 + 6;
    }
    while ( !v46 );
    v48 = *v47;
    if ( *v47 )
      goto LABEL_71;
    while ( 2 )
    {
      v49 = v47 - 3;
      if ( v46 != v47 )
      {
        while ( 1 )
        {
          v47 = v49;
          v48 = *v49;
          if ( *v49 )
            break;
          v49 -= 3;
          if ( v46 == v47 )
            goto LABEL_75;
        }
LABEL_71:
        v47[1] = nullptr;
        qfree(v48);
        continue;
      }
      break;
    }
LABEL_75:
    ;
  }
  while ( v46 != v74 );
  return 0;
}

