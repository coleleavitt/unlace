unsigned __int64 __fastcall sub_5C0660(__m128i *src, __m128i *a2, __int64 a3)
{
  __m128i *i; // rbx
  void (__fastcall *v5)(__int128 *, __int64, __int64); // rax
  __m128i v6; // xmm0
  void (__fastcall *v7)(__int128 *, __int128 *, __int64); // rax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int8 v11; // r14
  __int64 v12; // r13
  __int64 v14; // [rsp+8h] [rbp-A0h]
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  __int128 v17; // [rsp+20h] [rbp-88h] BYREF
  __m128i v18; // [rsp+30h] [rbp-78h] BYREF
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  __m128i v20; // [rsp+50h] [rbp-58h]
  unsigned __int64 v21; // [rsp+68h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    for ( i = (__m128i *)((char *)src + 40); a2 != i; i = (__m128i *)((char *)i + 40) )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __m128i *, __m128i *))(a3 + 24))(a3, i, src) >= 0 )
          break;
        v8 = i->m128i_i64[0];
        v9 = i->m128i_i64[1];
        v10 = i[1].m128i_i64[0];
        v11 = i[1].m128i_i8[8];
        v12 = i[2].m128i_i64[0];
        if ( (char *)i - (char *)src <= 40 )
        {
          if ( (char *)i - (char *)src == 40 )
          {
            *i = _mm_loadu_si128(src);
            i[1] = _mm_loadu_si128(src + 1);
            i[2].m128i_i64[0] = src[2].m128i_i64[0];
          }
        }
        else
        {
          v16 = i->m128i_i64[1];
          v15 = i[1].m128i_i64[0];
          v14 = i->m128i_i64[0];
          memmove(&src[2].m128i_u64[1], src, (char *)i - (char *)src);
          v8 = v14;
          v10 = v15;
          v9 = v16;
        }
        i = (__m128i *)((char *)i + 40);
        src->m128i_i64[0] = v8;
        src->m128i_i64[1] = v9;
        src[1].m128i_i64[0] = v10;
        src[1].m128i_i8[8] = v11;
        src[2].m128i_i64[0] = v12;
        if ( a2 == i )
          return v21 - __readfsqword(0x28u);
      }
      v5 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
      v18 = 0u;
      v17 = 0;
      if ( v5 )
      {
        v5(&v17, a3, 2);
        v6 = _mm_loadu_si128((const __m128i *)(a3 + 16));
        v7 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
        v20 = 0u;
        v18 = v6;
        v19 = 0;
        if ( v7 )
        {
          v7(&v19, &v17, 2);
          v20 = _mm_load_si128(&v18);
        }
      }
      else
      {
        v20 = 0u;
        v19 = 0;
      }
      sub_5C0580(i, (__int64)&v19);
      if ( v20.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
      if ( v18.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v18.m128i_i64[0])(&v17, &v17, 3);
    }
  }
  return v21 - __readfsqword(0x28u);
}
