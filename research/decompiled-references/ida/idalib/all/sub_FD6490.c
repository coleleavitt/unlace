__m128i *__fastcall sub_FD6490(__m128i *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // r13
  __m128i *v4; // rax
  char v5; // al
  char v6; // al
  __m128i v7; // xmm0
  __int32 v9; // eax
  __m128i *v10; // [rsp+0h] [rbp-A8h]
  __m128i v11; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h] BYREF
  size_t n; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  char v15; // [rsp+78h] [rbp-30h]

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 16LL))(&src);
  if ( (v15 & 1) == 0 )
  {
    v2 = (__int64 *)src;
    if ( !src )
    {
      a1[2].m128i_i8[0] &= ~1u;
      v11.m128i_i8[0] = 0;
      v7 = _mm_load_si128(&v11);
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      a1->m128i_i64[1] = 0;
      a1[1] = v7;
      goto LABEL_11;
    }
    v3 = n;
    v4 = &v11;
    v10 = &v11;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v4 = (__m128i *)operator new(n + 1);
      v11.m128i_i64[0] = v3;
      v10 = v4;
    }
    else
    {
      if ( n == 1 )
      {
        v11.m128i_i8[0] = *(_BYTE *)src;
LABEL_6:
        v4->m128i_i8[v3] = 0;
        v5 = v15;
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        v6 = v5 & 1;
        a1[2].m128i_i8[0] &= ~1u;
        if ( v10 == &v11 )
        {
          a1[1] = _mm_load_si128(&v11);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)v10;
          a1[1].m128i_i64[0] = v11.m128i_i64[0];
        }
        a1->m128i_i64[1] = v3;
        if ( v6 )
          return a1;
        v2 = (__int64 *)src;
LABEL_11:
        if ( v2 != &v14 )
          operator delete(v2);
        return a1;
      }
      if ( !n )
        goto LABEL_6;
    }
    memcpy(v4, v2, v3);
    v4 = v10;
    goto LABEL_6;
  }
  v9 = (int)src;
  a1[2].m128i_i8[0] |= 1u;
  a1->m128i_i32[0] = v9;
  a1->m128i_i64[1] = n;
  return a1;
}
