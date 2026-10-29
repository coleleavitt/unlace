unsigned __int64 __fastcall sub_486D50(__int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 *v5; // rbp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm1
  unsigned __int64 i; // r15
  __int64 v17; // rax
  unsigned __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm2
  unsigned __int64 j; // r15
  __int64 v25; // rax
  unsigned __int64 *v27; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 *v28; // [rsp+0h] [rbp-1C8h]
  __m128i v29; // [rsp+10h] [rbp-1B8h] BYREF
  void *v30; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-1A0h]
  __int64 v32; // [rsp+38h] [rbp-190h]
  int v33; // [rsp+40h] [rbp-188h]
  void *v34; // [rsp+50h] [rbp-178h] BYREF
  __int128 v35; // [rsp+58h] [rbp-170h]
  __int64 v36; // [rsp+68h] [rbp-160h]
  int v37; // [rsp+70h] [rbp-158h]
  void *v38; // [rsp+80h] [rbp-148h] BYREF
  __int128 v39; // [rsp+88h] [rbp-140h]
  __int64 v40; // [rsp+98h] [rbp-130h]
  int v41; // [rsp+A0h] [rbp-128h]
  void *v42; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-110h]
  __int64 v44; // [rsp+C8h] [rbp-100h]
  int v45; // [rsp+D0h] [rbp-F8h]
  __int64 (__fastcall **v46)(); // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-E0h]
  int *v48; // [rsp+F0h] [rbp-D8h]
  __int64 v49; // [rsp+F8h] [rbp-D0h]
  __int64 v50; // [rsp+100h] [rbp-C8h]
  __int64 v51; // [rsp+108h] [rbp-C0h]
  int v52; // [rsp+110h] [rbp-B8h]
  void *ptr; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+128h] [rbp-A0h]
  int *v55; // [rsp+130h] [rbp-98h]
  __int64 v56; // [rsp+138h] [rbp-90h]
  __int64 v57; // [rsp+140h] [rbp-88h]
  __int64 v58; // [rsp+148h] [rbp-80h]
  int v59; // [rsp+150h] [rbp-78h]
  void **p_ptr; // [rsp+160h] [rbp-68h] BYREF
  __int64 v61; // [rsp+168h] [rbp-60h]
  __m128i v62; // [rsp+170h] [rbp-58h]
  unsigned __int64 v63; // [rsp+188h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 64LL))(&ptr);
  if ( ptr )
  {
    v54 = 0;
    qfree(ptr);
  }
  v5 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v33 = -1;
  v31 = 0;
  v30 = nullptr;
  v32 = 0;
  v34 = nullptr;
  v36 = 0;
  v37 = -1;
  v35 = 0;
  sub_486AE0(a2, (__int64)&v30, (__int64)&v34, v5);
  v38 = nullptr;
  v39 = 0;
  v6 = *v5;
  v7 = v5[1];
  v40 = 0;
  v41 = -1;
  if ( v6 < v7 )
  {
    v29.m128i_i64[0] = v6;
    v38 = (void *)qvector_reserve(&v38, 0, 1, 16);
    *((__m128i *)v38 + v39) = _mm_unpacklo_epi64((__m128i)v29.m128i_u64[0], (__m128i)v7);
    *(_QWORD *)&v39 = v39 + 1;
  }
  rangeset_t_sub2((int)&v38);
  v42 = nullptr;
  v43 = 0;
  v8 = *v5;
  v9 = v5[1];
  v44 = 0;
  v45 = -1;
  if ( v8 < v9 )
  {
    v42 = (void *)qvector_reserve(&v42, 0, 1, 16);
    *((__m128i *)v42 + v43) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
    *(_QWORD *)&v43 = v43 + 1;
  }
  rangeset_t_sub2((int)&v42);
  v10 = (unsigned __int64 *)v38;
  v27 = (unsigned __int64 *)((char *)v38 + 16 * v39);
  if ( v27 != v38 )
  {
    v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2C410), (__m128i)(unsigned __int64)sub_47F1C0);
    do
    {
      v11 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
      v12 = a2[2];
      v13 = 5LL * *(int *)(a1 + 8);
      v14 = **(_QWORD **)(a1 + 48);
      v50 = v11;
      v47 = 0;
      v48 = nullptr;
      v46 = off_2B2B848;
      v49 = v14 + 8 * v13;
      v51 = a1;
      v52 = 0;
      v47 = switch_dbctx(v12);
      v15 = _mm_load_si128(&v29);
      p_ptr = (void **)&v46;
      v48 = a2;
      v61 = 0;
      v62 = v15;
      if ( sub_4803E0 )
      {
        for ( i = *v10; i < v10[1]; i = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 176LL))(
                                          a2,
                                          i) )
        {
          v17 = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 168LL))(a2, i);
          if ( v17 )
          {
            if ( !v62.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( ((unsigned int (__fastcall *)(void ***, __int64))v62.m128i_i64[1])(&p_ptr, v17) )
              break;
          }
        }
        if ( v62.m128i_i64[0] )
          ((void (__fastcall *)(void ***, void ***, __int64))v62.m128i_i64[0])(&p_ptr, &p_ptr, 3);
      }
      v10 += 2;
    }
    while ( v27 != v10 );
  }
  v18 = (unsigned __int64 *)v42;
  v28 = (unsigned __int64 *)((char *)v42 + 16 * v43);
  if ( v28 != v42 )
  {
    v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2C410), (__m128i)(unsigned __int64)sub_47F1C0);
    do
    {
      v19 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
      v20 = a2[2];
      v21 = 5LL * *(int *)(a1 + 8);
      v22 = **(_QWORD **)(a1 + 48);
      v57 = v19;
      v54 = 0;
      v55 = nullptr;
      ptr = off_2B2B848;
      v56 = v22 + 8 * v21;
      v58 = a1;
      v59 = 1;
      v54 = switch_dbctx(v20);
      v23 = _mm_load_si128(&v29);
      v55 = a2;
      p_ptr = &ptr;
      v61 = 0;
      v62 = v23;
      if ( sub_4803E0 )
      {
        for ( j = *v18; j < v18[1]; j = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 176LL))(
                                          a2,
                                          j) )
        {
          v25 = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 168LL))(a2, j);
          if ( v25 )
          {
            if ( !v62.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( ((unsigned int (__fastcall *)(void ***, __int64))v62.m128i_i64[1])(&p_ptr, v25) )
              break;
          }
        }
        if ( v62.m128i_i64[0] )
          ((void (__fastcall *)(void ***, void ***, __int64))v62.m128i_i64[0])(&p_ptr, &p_ptr, 3);
      }
      v18 += 2;
    }
    while ( v28 != v18 );
    v18 = (unsigned __int64 *)v42;
  }
  if ( v18 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v18);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  return v63 - __readfsqword(0x28u);
}
