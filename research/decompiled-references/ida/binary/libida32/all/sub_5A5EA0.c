unsigned __int64 __fastcall sub_5A5EA0(__m128i *src, __m128i *a2, __int64 a3)
{
  __m128i *i; // rbx
  void (__fastcall *v5)(__int128 *, __int64, __int64); // rax
  __m128i v6; // xmm0
  void (__fastcall *v7)(__int128 *, __int128 *, __int64); // rax
  __int64 v8; // r9
  __int32 v9; // r8d
  __int32 v10; // ecx
  __int8 v11; // r14
  __int64 v12; // r13
  __int64 v14; // [rsp+0h] [rbp-98h]
  __int32 v15; // [rsp+8h] [rbp-90h]
  __int32 v16; // [rsp+Ch] [rbp-8Ch]
  __int128 v17; // [rsp+10h] [rbp-88h] BYREF
  __m128i v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  __m128i v20; // [rsp+40h] [rbp-58h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    for ( i = src + 2; a2 != i; i += 2 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __m128i *, __m128i *))(a3 + 24))(a3, i, src) >= 0 )
          break;
        v8 = i->m128i_i64[0];
        v9 = i->m128i_i32[2];
        v10 = i->m128i_i32[3];
        v11 = i[1].m128i_i8[0];
        v12 = i[1].m128i_i64[1];
        if ( (char *)i - (char *)src <= 32 )
        {
          if ( (char *)i - (char *)src == 32 )
          {
            *i = _mm_loadu_si128(src);
            i[1] = _mm_loadu_si128(src + 1);
          }
        }
        else
        {
          v16 = i->m128i_i32[2];
          v15 = i->m128i_i32[3];
          v14 = i->m128i_i64[0];
          memmove(&src[2], src, (char *)i - (char *)src);
          v8 = v14;
          v10 = v15;
          v9 = v16;
        }
        i += 2;
        src->m128i_i64[0] = v8;
        src->m128i_i32[2] = v9;
        src->m128i_i32[3] = v10;
        src[1].m128i_i8[0] = v11;
        src[1].m128i_i64[1] = v12;
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
      sub_5A5DE0(i, (__int64)&v19);
      if ( v20.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
      if ( v18.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v18.m128i_i64[0])(&v17, &v17, 3);
    }
  }
  return v21 - __readfsqword(0x28u);
}

