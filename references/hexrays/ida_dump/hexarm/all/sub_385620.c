__int64 __fastcall sub_385620(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v5 = simpleline_place_t__deserialize();
  if ( (_BYTE)v5 )
  {
    if ( *a2 < a3 )
    {
      v11 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3);
      v7 = is_cvt64(a1, a2);
      v8 = v11.m128i_i64[1];
      if ( v7 )
      {
        v9 = (unsigned int)unpack_dd(&v11);
        if ( (unsigned int)v9 == 0xFFFFFFFFLL )
          v9 = -1;
      }
      else
      {
        v9 = unpack_dq(&v11, v11.m128i_i64[1]);
      }
      *(_QWORD *)(a1 + 16) = v9;
      if ( (unsigned __int8)is_cvt64(&v11, v8) )
      {
        v10 = (unsigned int)unpack_dd(&v11);
        if ( (unsigned int)v10 == 0xFFFFFFFFLL )
          v10 = -1;
      }
      else
      {
        v10 = unpack_dq(&v11, v11.m128i_i64[1]);
      }
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 16) + v10;
      *a2 = v11.m128i_i64[0];
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
