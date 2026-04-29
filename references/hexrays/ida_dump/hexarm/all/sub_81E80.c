unsigned __int64 __fastcall sub_81E80(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  size_t v9; // r14
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdi
  size_t v16; // rbx
  unsigned __int64 v17; // rbp
  void *v18; // rax
  void *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax
  size_t v22; // [rsp+28h] [rbp-F0h]
  _QWORD v23[2]; // [rsp+30h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-D8h] BYREF
  void *src; // [rsp+50h] [rbp-C8h]
  size_t n[2]; // [rsp+58h] [rbp-C0h]
  _QWORD v27[2]; // [rsp+68h] [rbp-B0h] BYREF
  int v28; // [rsp+78h] [rbp-A0h]
  _BYTE v29[16]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v30; // [rsp+90h] [rbp-88h]
  __int64 v31; // [rsp+98h] [rbp-80h] BYREF
  void *v32; // [rsp+A0h] [rbp-78h]
  __int128 v33; // [rsp+A8h] [rbp-70h]
  _DWORD v34[4]; // [rsp+B8h] [rbp-60h] BYREF
  int v35; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v36 - __readfsqword(0x28u);
  v23[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v23[1] = 0;
  src = nullptr;
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    do
    {
      v13 = *a1 + 80 * v12;
      cleanup_argloc(v13 + 56);
      v14 = *(_QWORD *)(v13 + 32);
      if ( v14 )
      {
        *(_QWORD *)(v13 + 40) = 0;
        qfree(v14);
      }
      ++v12;
      clear_tinfo_t(v13 + 24);
      sub_11C7E0(v13);
    }
    while ( v2 != v12 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)v23 >= *a1 && (unsigned __int64)v23 < v5 + 80 * v6 )
    {
      sub_123480(v29, v23);
      v31 = 0;
      v30 = si128.m128i_i64[0];
      copy_tinfo_t(&v31, &si128.m128i_u64[1]);
      v16 = n[0];
      v32 = nullptr;
      v33 = 0;
      if ( n[0] )
      {
        v32 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v33 + 1) = v16;
        memcpy(v32, src, v16);
        *(_QWORD *)&v33 = v16;
      }
      v34[0] = 0;
      copy_argloc(v34, v27);
      v35 = v28;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 80);
      v17 = a1[1];
      if ( v17 < a2 )
      {
        do
        {
          v20 = *a1 + 80 * v17;
          sub_123480(v20, v29);
          v21 = v30;
          *(_QWORD *)(v20 + 24) = 0;
          *(_QWORD *)(v20 + 16) = v21;
          copy_tinfo_t(v20 + 24, &v31);
          *(_QWORD *)(v20 + 32) = 0;
          *(_OWORD *)(v20 + 40) = 0;
          if ( (_QWORD)v33 )
          {
            v22 = v33;
            v18 = (void *)qalloc_or_throw(v33);
            *(_QWORD *)(v20 + 32) = v18;
            v19 = v32;
            *(_QWORD *)(v20 + 48) = v22;
            memcpy(v18, v19, v22);
            *(_QWORD *)(v20 + 40) = v22;
          }
          *(_DWORD *)(v20 + 56) = 0;
          copy_argloc(v20 + 56, v34);
          ++v17;
          *(_DWORD *)(v20 + 72) = v35;
        }
        while ( a2 != v17 );
      }
      a1[1] = a2;
      cleanup_argloc(v34);
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      clear_tinfo_t(&v31);
      sub_11C7E0(v29);
      goto LABEL_16;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v7 + 72) = v28 )
    {
      v7 = *a1 + 80 * v2;
      sub_123480(v7, v23);
      v8 = si128.m128i_i64[0];
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 16) = v8;
      copy_tinfo_t(v7 + 24, &si128.m128i_u64[1]);
      *(_QWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 40) = 0;
      v9 = n[0];
      if ( n[0] )
      {
        v10 = (void *)qalloc_or_throw(n[0]);
        *(_QWORD *)(v7 + 32) = v10;
        v11 = src;
        *(_QWORD *)(v7 + 48) = v9;
        memcpy(v10, v11, v9);
        *(_QWORD *)(v7 + 40) = v9;
      }
      *(_DWORD *)(v7 + 56) = 0;
      copy_argloc(v7 + 56, v27);
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_16:
  cleanup_argloc(v27);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  sub_11C7E0(v23);
  return v36 - __readfsqword(0x28u);
}
