_QWORD *__fastcall sub_7100(_QWORD *a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  char *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  char *v9; // rbx
  __m128i v11; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-D0h]
  __m128i v13; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-B8h]
  int v15; // [rsp+A8h] [rbp-B0h]
  void *src; // [rsp+B0h] [rbp-A8h]
  __int128 v17; // [rsp+B8h] [rbp-A0h]
  __int64 v18; // [rsp+C8h] [rbp-90h]
  __int64 v19; // [rsp+D0h] [rbp-88h]
  __int64 v20; // [rsp+D8h] [rbp-80h]
  __int128 v21; // [rsp+E0h] [rbp-78h]
  __int64 v22; // [rsp+F0h] [rbp-68h]
  __int128 v23; // [rsp+F8h] [rbp-60h]
  char v24; // [rsp+108h] [rbp-50h]
  unsigned __int64 v25; // [rsp+118h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  *a1 = 0;
  src = nullptr;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 16;
  v17 = 0;
  v21 = 0;
  v23 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    copy_tinfo_t();
    v2 = src;
    copy_argloc();
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    copy_tinfo_t();
    v15 = 0;
    v3 = v17;
    if ( *((_QWORD *)&v17 + 1) < (unsigned __int64)(v17 + 1) )
    {
      src = (void *)qvector_reserve();
      v2 = src;
      v3 = v17;
    }
    memmove(v2 + 20, v2, 80 * v3);
    *v2 = 0;
    copy_argloc();
    v4 = _mm_loadu_si128(&v11);
    *((_QWORD *)v2 + 8) = 0;
    *(__m128i *)(v2 + 6) = v4;
    *((_QWORD *)v2 + 2) = 0;
    v5 = _mm_load_si128(&v13);
    *((_QWORD *)v2 + 5) = v12;
    *((__m128i *)v2 + 3) = v5;
    v12 = 0;
    v11 = 0;
    v13 = 0;
    copy_tinfo_t();
    *(_QWORD *)&v17 = v17 + 1;
    v2[18] = v15;
    clear_tinfo_t();
    if ( v12 )
    {
      v13.m128i_i64[0] = 0;
      qfree();
    }
    cleanup_argloc();
    create_tinfo();
    clear_tinfo_t();
    cleanup_argloc();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v6 = (char *)src;
  if ( src )
  {
    v7 = v17;
    if ( (_QWORD)v17 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[80 * v8];
        clear_tinfo_t();
        if ( *((_QWORD *)v9 + 5) )
        {
          *((_QWORD *)v9 + 6) = 0;
          qfree();
        }
        if ( *((_QWORD *)v9 + 2) )
        {
          *((_QWORD *)v9 + 3) = 0;
          qfree();
        }
        ++v8;
        cleanup_argloc();
        v6 = (char *)src;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return a1;
}
