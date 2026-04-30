unsigned __int64 __fastcall sub_40E100(_QWORD *a1)
{
  const char *v1; // r12
  __int64 v3; // rbp
  const char *v5; // rdi
  unsigned int str_type; // eax
  const char *v7; // rsi
  unsigned __int64 v8; // rdx
  size_t v9; // rax
  const char *v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rdx
  const __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdx
  void *v17; // rdi
  const char *v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  void *ptr[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v1 = (const char *)*a1;
  v22 = __readfsqword(0x28u);
  v3 = get_item_end(v1) - (_QWORD)v1;
  if ( (unsigned __int64)(v3 - 1) <= 0x1FF )
  {
    v5 = (const char *)*a1;
    v18 = nullptr;
    v19 = 0;
    str_type = get_str_type(v5);
    v7 = (const char *)*a1;
    if ( get_strlit_contents(&v18, *a1, v3, str_type, 0, 0) > 0 )
    {
      if ( (_QWORD)v19 )
      {
        v9 = v19 - 1;
        v10 = v18;
        v8 = (unsigned __int64)(v19 - 1) >> 63;
      }
      else
      {
        LOBYTE(v8) = 0;
        v9 = 0;
        v10 = &s1;
      }
      if ( !v10 || (_BYTE)v8 )
      {
        v9 = 0;
        if ( v10 )
          v9 = strlen(v10);
      }
      v7 = (const char *)v9;
      QT::QString::fromUtf8(ptr, v9, v10);
      v11 = _mm_loadu_si128((const __m128i *)a1 + 13);
      v12 = a1[28];
      v13 = v21;
      *((__m128i *)a1 + 13) = _mm_load_si128((const __m128i *)ptr);
      a1[28] = v13;
      v21 = v12;
      *(__m128i *)ptr = v11;
      if ( v11.m128i_i64[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v11.m128i_i64[0], 1u) )
          free(ptr[0]);
        v13 = a1[28];
      }
      *((_BYTE *)a1 + 204) = 1;
      if ( v13 > 50 )
      {
        QT::QString::QString((QT::QString *)ptr, (const QT::QChar *)a1[27], 47);
        v7 = "...";
        v14 = (const __m128i *)QT::QString::append(ptr, "...", 3);
        v15 = _mm_loadu_si128(v14);
        v16 = v14[1].m128i_i64[0];
        v14[1].m128i_i64[0] = 0;
        *v14 = 0;
        v17 = (void *)a1[26];
        a1[28] = v16;
        *((__m128i *)a1 + 13) = v15;
        if ( v17 && !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
          free(v17);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v7);
    }
  }
  return v22 - __readfsqword(0x28u);
}
