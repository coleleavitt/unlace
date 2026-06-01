__int64 __fastcall hexplace_t__deserialize(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v5 = idaplace_t__deserialize();
  if ( (_BYTE)v5 )
  {
    if ( *a2 < a3 )
    {
      v8 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3);
      if ( (unsigned __int8)is_cvt64(a1, a2, v4) )
      {
        v7 = (unsigned int)unpack_dd(&v8);
        if ( (unsigned int)v7 == 0xFFFFFFFFLL )
          v7 = -1;
      }
      else
      {
        v7 = unpack_dq(&v8);
      }
      *(_QWORD *)(a1 + 24) = v7;
      *a2 = v8.m128i_i64[0];
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
