__int64 __fastcall hexplace_t__deserialize(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v4 = idaplace_t__deserialize();
  if ( (_BYTE)v4 )
  {
    if ( *a2 < a3 )
    {
      v6 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3);
      *(_DWORD *)(a1 + 16) = unpack_dd(&v6);
      *a2 = v6.m128i_i64[0];
    }
    else
    {
      return 0;
    }
  }
  return v4;
}

