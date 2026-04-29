__int64 *__fastcall sub_2BAB00(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v13; // eax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rax
  void *v21; // rax
  void *v22; // rsi
  unsigned __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rdi
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  int *v28; // r15
  _QWORD *v29; // rbx
  unsigned int v30; // r13d
  __int64 v31; // rbx
  __int64 v32; // rax
  void *v33; // rax
  void *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-140h]
  size_t v38; // [rsp+20h] [rbp-120h]
  size_t n; // [rsp+40h] [rbp-100h]
  __m128i v40; // [rsp+48h] [rbp-F8h] BYREF
  _QWORD v41[2]; // [rsp+58h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-D8h] BYREF
  void *v43; // [rsp+78h] [rbp-C8h] BYREF
  __int128 v44; // [rsp+80h] [rbp-C0h]
  _QWORD v45[2]; // [rsp+90h] [rbp-B0h] BYREF
  int v46; // [rsp+A0h] [rbp-A0h]
  unsigned __int8 v47[16]; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-88h]
  __int64 v49; // [rsp+C0h] [rbp-80h] BYREF
  void *src; // [rsp+C8h] [rbp-78h] BYREF
  __int128 v51; // [rsp+D0h] [rbp-70h]
  _DWORD v52[4]; // [rsp+E0h] [rbp-60h] BYREF
  int v53; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v54; // [rsp+100h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)a4);
  v5 = qalloc_or_throw(24);
  *(_QWORD *)v5 = 0;
  v6 = (__int64 *)v5;
  *(_OWORD *)(v5 + 8) = 0;
  v36 = *(_QWORD *)(a1 + 24);
  if ( v40.m128i_i64[1] - v40.m128i_i64[0] >= (unsigned __int64)((unsigned __int8)is_cvt64(24, a2) == 0 ? 4 : 0) + 5 )
  {
    v13 = unpack_dd(&v40);
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_37EEE0(51188);
      BUG();
    }
    v14 = v13;
    if ( v13 == v6[1] )
      goto LABEL_34;
    v41[1] = 0;
    v43 = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    v45[0] = 0;
    v45[1] = 0;
    v46 = 0;
    v44 = 0;
    v15 = v6[1];
    v41[0] = 0xFFFFFFFF00000000LL;
    if ( v13 < v15 )
    {
      v23 = v13;
      do
      {
        v24 = *v6 + 80 * v23;
        cleanup_argloc(v24 + 56);
        v25 = *(_QWORD *)(v24 + 32);
        if ( v25 )
        {
          *(_QWORD *)(v24 + 40) = 0;
          qfree(v25);
        }
        ++v23;
        clear_tinfo_t(v24 + 24);
        sub_119360(v24);
      }
      while ( v23 < v15 );
      v6[1] = v14;
    }
    else if ( v15 < v13 )
    {
      v16 = *v6;
      v17 = v6[2];
      if ( (unsigned __int64)v41 < *v6 || (unsigned __int64)v41 >= v16 + 80 * v17 )
      {
        if ( v17 >= v13 || (v35 = qvector_reserve(v6, v16, v13, 80), v15 = v6[1], *v6 = v35, v16 = v35, v15 < v14) )
        {
          while ( 1 )
          {
            v31 = 80 * v15 + v16;
            sub_120000(v31, (unsigned __int8 *)v41);
            v32 = si128.m128i_i64[0];
            *(_QWORD *)(v31 + 24) = 0;
            *(_QWORD *)(v31 + 16) = v32;
            copy_tinfo_t(v31 + 24, &si128.m128i_u64[1]);
            *(_QWORD *)(v31 + 32) = 0;
            *(_OWORD *)(v31 + 40) = 0;
            if ( (_QWORD)v44 )
            {
              v38 = v44;
              v33 = (void *)qalloc_or_throw(v44);
              *(_QWORD *)(v31 + 32) = v33;
              v34 = v43;
              *(_QWORD *)(v31 + 48) = v38;
              memcpy(v33, v34, v38);
              *(_QWORD *)(v31 + 40) = v38;
            }
            *(_DWORD *)(v31 + 56) = 0;
            copy_argloc(v31 + 56, v45);
            ++v15;
            *(_DWORD *)(v31 + 72) = v46;
            if ( v15 >= v14 )
              break;
            v16 = *v6;
          }
        }
        v6[1] = v14;
      }
      else
      {
        sub_120000((__int64)v47, (unsigned __int8 *)v41);
        v49 = 0;
        v48 = si128.m128i_i64[0];
        copy_tinfo_t(&v49, &si128.m128i_u64[1]);
        src = nullptr;
        v51 = 0;
        sub_2AA6A0(&src, (__int64)&v43);
        v52[0] = 0;
        copy_argloc(v52, v45);
        v53 = v46;
        if ( v6[2] < v14 )
          *v6 = qvector_reserve(v6, *v6, v14, 80);
        v18 = v6[1];
        if ( v18 < v14 )
        {
          do
          {
            v19 = *v6 + 80 * v18;
            sub_120000(v19, v47);
            v20 = v48;
            *(_QWORD *)(v19 + 24) = 0;
            *(_QWORD *)(v19 + 16) = v20;
            copy_tinfo_t(v19 + 24, &v49);
            *(_QWORD *)(v19 + 32) = 0;
            *(_OWORD *)(v19 + 40) = 0;
            if ( (_QWORD)v51 )
            {
              n = v51;
              v21 = (void *)qalloc_or_throw(v51);
              *(_QWORD *)(v19 + 32) = v21;
              v22 = src;
              *(_QWORD *)(v19 + 48) = n;
              memcpy(v21, v22, n);
              *(_QWORD *)(v19 + 40) = n;
            }
            *(_DWORD *)(v19 + 56) = 0;
            copy_argloc(v19 + 56, v52);
            ++v18;
            *(_DWORD *)(v19 + 72) = v53;
          }
          while ( v14 != v18 );
        }
        v6[1] = v14;
        sub_7E9C0((__int64)v47);
      }
    }
    cleanup_argloc(v45);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
    sub_119360((__int64)v41);
    if ( v6[1] )
    {
LABEL_34:
      v26 = 0;
      do
      {
        while ( 1 )
        {
          v27 = *v6 + 80 * v26;
          v28 = (int *)(v27 + 56);
          sub_2AF160(v27 + 56, (const void **)&v40, v40.m128i_u64[1]);
          v29 = (_QWORD *)(v27 + 24);
          v30 = unpack_dd(&v40);
          if ( !(unsigned __int8)sub_2B32B0((const void **)&v40, v40.m128i_u64[1], v29, nullptr) )
            break;
          if ( ++v26 >= v6[1] )
            goto LABEL_38;
        }
        sub_2B3D30(v36, (__int64)v29, v28, v30);
        ++v26;
      }
      while ( v26 < v6[1] );
    }
LABEL_38:
    *a3 = v40.m128i_i64[0];
  }
  else
  {
    *a3 = v40.m128i_i64[0];
    if ( v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = v6[1];
        if ( v8 )
        {
          v9 = 0;
          do
          {
            v10 = v7 + 80 * v9;
            cleanup_argloc(v10 + 56);
            v11 = *(_QWORD *)(v10 + 32);
            if ( v11 )
            {
              *(_QWORD *)(v10 + 40) = 0;
              qfree(v11);
            }
            ++v9;
            clear_tinfo_t(v10 + 24);
            sub_119360(v10);
            v7 = *v6;
          }
          while ( v8 != v9 );
        }
        v6[1] = 0;
        qfree(v7);
      }
      qfree(v6);
    }
    return nullptr;
  }
  return v6;
}
