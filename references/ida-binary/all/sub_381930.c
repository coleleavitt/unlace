__int64 __fastcall srcdbg_place_t__::vfunc_13(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v4 = simpleline_place_t__deserialize();
  if ( (_BYTE)v4 )
  {
    if ( *a2 < a3 )
    {
      v7 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3);
      if ( (unsigned __int8)is_cvt64() )
      {
        v6 = (unsigned int)unpack_dd(&v7, v7.m128i_i64[1]);
        if ( (unsigned int)v6 == 0xFFFFFFFFLL )
          v6 = -1;
      }
      else
      {
        v6 = unpack_dq(&v7, v7.m128i_i64[1]);
      }
      *(_QWORD *)(a1 + 16) = v6;
      *a2 = v7.m128i_i64[0];
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
