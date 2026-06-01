__int64 __fastcall sub_812470(const __m128i *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __m128i v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = a1[1].m128i_i64[0];
  if ( v1 && (unsigned __int8)sub_8123C0(a1[1].m128i_u64[0]) )
  {
    if ( (a1->m128i_i8[2] & 0x10) != 0 )
    {
      v3 = _mm_loadu_si128(a1 + 3);
      return sub_A7BB10(&v3);
    }
    return a1[2].m128i_u32[2];
  }
  result = sub_AC6DA0(v1);
  if ( !(_DWORD)result )
    return a1[2].m128i_u32[2];
  return result;
}

