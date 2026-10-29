unsigned __int64 __fastcall sub_472520(__int64 a1, int *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int *v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // r13
  char *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm1
  unsigned int i; // r15d
  __int64 v18; // rax
  char *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128i v24; // xmm2
  unsigned int j; // r15d
  __int64 v26; // rax
  char *v28; // [rsp+0h] [rbp-1C8h]
  char *v29; // [rsp+0h] [rbp-1C8h]
  __m128i v30; // [rsp+10h] [rbp-1B8h] BYREF
  void *v31; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-1A0h]
  __int64 v33; // [rsp+38h] [rbp-190h]
  int v34; // [rsp+40h] [rbp-188h]
  void *v35; // [rsp+50h] [rbp-178h] BYREF
  __int128 v36; // [rsp+58h] [rbp-170h]
  __int64 v37; // [rsp+68h] [rbp-160h]
  int v38; // [rsp+70h] [rbp-158h]
  void *v39; // [rsp+80h] [rbp-148h] BYREF
  __int128 v40; // [rsp+88h] [rbp-140h]
  __int64 v41; // [rsp+98h] [rbp-130h]
  int v42; // [rsp+A0h] [rbp-128h]
  void *v43; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-110h]
  __int64 v45; // [rsp+C8h] [rbp-100h]
  int v46; // [rsp+D0h] [rbp-F8h]
  __int64 (__fastcall **v47)(); // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-E0h]
  int *v49; // [rsp+F0h] [rbp-D8h]
  __int64 v50; // [rsp+F8h] [rbp-D0h]
  __int64 v51; // [rsp+100h] [rbp-C8h]
  __int64 v52; // [rsp+108h] [rbp-C0h]
  int v53; // [rsp+110h] [rbp-B8h]
  void *ptr; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+128h] [rbp-A0h]
  int *v56; // [rsp+130h] [rbp-98h]
  __int64 v57; // [rsp+138h] [rbp-90h]
  __int64 v58; // [rsp+140h] [rbp-88h]
  __int64 v59; // [rsp+148h] [rbp-80h]
  int v60; // [rsp+150h] [rbp-78h]
  void **p_ptr; // [rsp+160h] [rbp-68h] BYREF
  __int64 v62; // [rsp+168h] [rbp-60h]
  __m128i v63; // [rsp+170h] [rbp-58h]
  unsigned __int64 v64; // [rsp+188h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 64LL))(&ptr);
  if ( ptr )
  {
    v55 = 0;
    qfree(ptr);
  }
  v5 = **(_QWORD **)(a1 + 40);
  v34 = -1;
  v31 = nullptr;
  v6 = (unsigned int *)(v5 + 8 * a3);
  v32 = 0;
  v36 = 0;
  v33 = 0;
  v35 = nullptr;
  v37 = 0;
  v38 = -1;
  sub_4722B0(a2, (__int64)&v31, (__int64)&v35, v6);
  v39 = nullptr;
  v40 = 0;
  v7 = v6[1];
  v41 = 0;
  v42 = -1;
  v8 = *(_QWORD *)v6;
  if ( *v6 < v7 )
  {
    v39 = (void *)qvector_reserve(&v39, 0, 1, 8);
    *((_QWORD *)v39 + v40) = v8;
    *(_QWORD *)&v40 = v40 + 1;
  }
  rangeset_t_sub2((int)&v39);
  v43 = nullptr;
  v44 = 0;
  v9 = v6[1];
  v45 = 0;
  v46 = -1;
  v10 = *(_QWORD *)v6;
  if ( *v6 < v9 )
  {
    v43 = (void *)qvector_reserve(&v43, 0, 1, 8);
    *((_QWORD *)v43 + v44) = v10;
    *(_QWORD *)&v44 = v44 + 1;
  }
  rangeset_t_sub2((int)&v43);
  v11 = (char *)v39;
  v28 = (char *)v39 + 8 * v40;
  if ( v28 != v39 )
  {
    v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B02450), (__m128i)(unsigned __int64)sub_46AC70);
    do
    {
      v12 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
      v13 = a2[2];
      v14 = 5LL * *(int *)(a1 + 8);
      v15 = **(_QWORD **)(a1 + 48);
      v51 = v12;
      v48 = 0;
      v49 = nullptr;
      v47 = off_2B01888;
      v50 = v15 + 8 * v14;
      v52 = a1;
      v53 = 0;
      v48 = switch_dbctx(v13);
      v16 = _mm_load_si128(&v30);
      p_ptr = (void **)&v47;
      v49 = a2;
      v62 = 0;
      v63 = v16;
      if ( sub_46BE20 )
      {
        for ( i = *(_DWORD *)v11;
              i < *((_DWORD *)v11 + 1);
              i = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, i) )
        {
          v18 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, i);
          if ( v18 )
          {
            if ( !v63.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( ((unsigned int (__fastcall *)(void ***, __int64))v63.m128i_i64[1])(&p_ptr, v18) )
              break;
          }
        }
        if ( v63.m128i_i64[0] )
          ((void (__fastcall *)(void ***, void ***, __int64))v63.m128i_i64[0])(&p_ptr, &p_ptr, 3);
      }
      v11 += 8;
    }
    while ( v28 != v11 );
  }
  v19 = (char *)v43;
  v29 = (char *)v43 + 8 * v44;
  if ( v29 != v43 )
  {
    v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B02450), (__m128i)(unsigned __int64)sub_46AC70);
    do
    {
      v20 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
      v21 = a2[2];
      v22 = 5LL * *(int *)(a1 + 8);
      v23 = **(_QWORD **)(a1 + 48);
      v58 = v20;
      v55 = 0;
      v56 = nullptr;
      ptr = off_2B01888;
      v57 = v23 + 8 * v22;
      v59 = a1;
      v60 = 1;
      v55 = switch_dbctx(v21);
      v24 = _mm_load_si128(&v30);
      v56 = a2;
      p_ptr = &ptr;
      v62 = 0;
      v63 = v24;
      if ( sub_46BE20 )
      {
        for ( j = *(_DWORD *)v19;
              j < *((_DWORD *)v19 + 1);
              j = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, j) )
        {
          v26 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, j);
          if ( v26 )
          {
            if ( !v63.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( ((unsigned int (__fastcall *)(void ***, __int64))v63.m128i_i64[1])(&p_ptr, v26) )
              break;
          }
        }
        if ( v63.m128i_i64[0] )
          ((void (__fastcall *)(void ***, void ***, __int64))v63.m128i_i64[0])(&p_ptr, &p_ptr, 3);
      }
      v19 += 8;
    }
    while ( v29 != v19 );
    v19 = (char *)v43;
  }
  if ( v19 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v19);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return v64 - __readfsqword(0x28u);
}

