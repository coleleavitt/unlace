void __fastcall sub_968B20(__int64 *a1, __m128i a2, __m128 a3)
{
  __m128i *exception; // rbp
  __int64 v4; // rax
  __m128i si128; // xmm0
  __m128i v6; // xmm0
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  char v16; // [rsp-8h] [rbp-2968h]
  __int64 v17; // [rsp+0h] [rbp-2960h] BYREF
  int v18[2646]; // [rsp+8h] [rbp-2958h] BYREF

  if ( *(_BYTE *)(a1[14] + 724) )
  {
    sub_1875640("Users should not set smt.core.validate. This option is for debugging only.", v16);
    sub_8FBD90((__int64)v18, a1[13], a1[14], (__int64)(a1 + 15));
    v17 = 0;
    sub_C0FF90(a1 + 27, &v17);
    if ( v17 )
    {
      v7 = *(unsigned int *)(v17 - 4);
      if ( (_DWORD)v7 )
      {
        v8 = 8 * v7;
        v9 = 0;
        do
        {
          sub_8F8A20((__int64)v18);
          v9 += 8;
        }
        while ( v8 != v9 );
      }
    }
    v10 = a1[1172];
    if ( v10 )
    {
      v11 = *(unsigned int *)(v10 - 4);
      if ( (_DWORD)v11 )
      {
        v12 = 8 * v11;
        v13 = 0;
        do
        {
          sub_8F8A20((__int64)v18);
          v13 += 8;
        }
        while ( v12 != v13 );
      }
    }
    v14 = sub_8FD5F0((__int64)v18, 0, nullptr, 1u, a2, a3);
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v4 = operator new(0x1Cu);
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B66D0);
        *(_BYTE *)(v4 + 27) = 0;
        exception->m128i_i64[1] = v4;
        *(__m128i *)v4 = si128;
        v6 = _mm_load_si128((const __m128i *)&xmmword_18B66E0);
        exception->m128i_i64[0] = (__int64)off_1C63128;
        *(__m128i *)(v4 + 11) = v6;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x1BuLL, (__m128i)0x1BuLL);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else if ( (unsigned int)sub_180B130(v18) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a2.m128i_i64) )
      {
        sub_186A4C0(*(double *)a2.m128i_i64);
        v15 = sub_180B150(v18, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v15, "core validation produced unknown\n");
      }
      else
      {
        sub_180B150(v18, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    if ( v17 )
      sub_186B220((void *)(v17 - 8));
    sub_8EFC90((__int64)v18);
  }
}

