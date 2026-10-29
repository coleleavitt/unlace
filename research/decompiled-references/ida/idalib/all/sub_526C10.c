unsigned __int64 __fastcall sub_526C10(__m128i *src, __m128i *a2, __int64 a3)
{
  __m128i *i; // rbx
  void (__fastcall *v5)(__int128 *, __int64, __int64); // rax
  __m128i v6; // xmm0
  void (__fastcall *v7)(__int128 *, __int128 *, __int64); // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int128 v11; // [rsp+0h] [rbp-88h] BYREF
  __m128i v12; // [rsp+10h] [rbp-78h] BYREF
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __m128i v14; // [rsp+30h] [rbp-58h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __m128i *, __m128i *))(a3 + 24))(a3, i, src) >= 0 )
          break;
        v8 = i->m128i_i64[0];
        v9 = i->m128i_i64[1];
        if ( (char *)i - (char *)src <= 16 )
        {
          if ( (char *)i - (char *)src == 16 )
            *i = _mm_loadu_si128(src);
        }
        else
        {
          memmove(&src[1], src, (char *)i - (char *)src);
        }
        ++i;
        src->m128i_i64[0] = v8;
        src->m128i_i64[1] = v9;
        if ( a2 == i )
          return v15 - __readfsqword(0x28u);
      }
      v5 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
      v12 = 0u;
      v11 = 0;
      if ( v5 )
      {
        v5(&v11, a3, 2);
        v6 = _mm_loadu_si128((const __m128i *)(a3 + 16));
        v7 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
        v14 = 0u;
        v12 = v6;
        v13 = 0;
        if ( v7 )
        {
          v7(&v13, &v11, 2);
          v14 = _mm_load_si128(&v12);
        }
      }
      else
      {
        v14 = 0u;
        v13 = 0;
      }
      sub_526B70(i, (__int64)&v13);
      if ( v14.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
      if ( v12.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v12.m128i_i64[0])(&v11, &v11, 3);
    }
  }
  return v15 - __readfsqword(0x28u);
}
