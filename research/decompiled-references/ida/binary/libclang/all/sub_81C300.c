__m128i *__fastcall sub_81C300(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __m128i v5; // kr00_16
  __m128i v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
    {
      sub_ACE270(&v7);
      a4 = v8;
      v4 = 0;
      v5 = _mm_load_si128(&v7);
    }
    else
    {
      a4 = 0;
      v4 = 0;
      v5 = 0u;
    }
  }
  else
  {
    v4 = a2 + 24;
    v5 = (__m128i)(unsigned __int64)(a2 + 16);
  }
  a1[1].m128i_i64[1] = v4;
  *a1 = v5;
  a1[1].m128i_i64[0] = a4;
  a1[2].m128i_i64[0] = 0;
  a1[2].m128i_i64[1] = 0;
  return a1;
}

