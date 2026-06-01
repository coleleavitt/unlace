__int64 __fastcall sub_7A1910(const __m128i *a1)
{
  unsigned __int32 v1; // ebx
  __int32 v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]

  v1 = a1[3].m128i_u32[2];
  if ( !v1 )
  {
    v6 = _mm_loadu_si128(a1 + 4);
    v1 = sub_A7BB10(&v6);
  }
  v2 = a1[1].m128i_i32[2];
  v3 = a1[5].m128i_i64[0];
  v6.m128i_i64[0] = a1[2].m128i_i64[1];
  v6.m128i_i32[2] = v2;
  v7 = v3;
  v4 = sub_792B00((__int64)&v6);
  if ( !(_DWORD)v4 )
    v4 = v6.m128i_u32[2];
  return (v4 << 32) | v1;
}

