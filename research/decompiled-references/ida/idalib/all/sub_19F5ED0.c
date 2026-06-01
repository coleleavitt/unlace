__int64 __fastcall sub_19F5ED0(__m128i *a1)
{
  __int64 v1; // r9
  unsigned __int32 v2; // r11d
  unsigned __int8 v3; // dl
  unsigned __int32 v4; // ebx
  unsigned __int32 v5; // ebp
  unsigned __int32 v6; // r10d
  unsigned __int32 v7; // ecx
  unsigned __int32 v8; // esi
  unsigned __int32 v9; // eax
  __int32 v10; // eax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 result; // rax
  __m128i v15; // [rsp+0h] [rbp-38h] BYREF
  __m128i v16; // [rsp+10h] [rbp-28h]

  v1 = a1[1].m128i_i64[1];
  v2 = a1[1].m128i_u32[0];
  v15 = _mm_loadu_si128(a1);
  v3 = v15.m128i_u8[8];
  v4 = v15.m128i_i32[0];
  v5 = v15.m128i_u32[1];
  v6 = v15.m128i_u32[3];
  v16 = _mm_loadu_si128(a1 + 1);
  while ( 1 )
  {
    if ( (unsigned int)a1[-2].m128i_i8[8] <= v3 )
    {
      v7 = a1[-2].m128i_u32[0];
      v8 = a1[-2].m128i_u32[1];
      v9 = a1[-2].m128i_u32[3];
      if ( a1[-2].m128i_i8[8] != v3
        || v6 >= v9 && (v6 != v9 || v4 >= v7 && (v4 != v7 || v8 <= v5 && (v8 != v5 || v2 >= a1[-1].m128i_i32[0]))) )
      {
        break;
      }
    }
    v10 = a1[-1].m128i_i32[0];
    v11 = _mm_loadu_si128(a1 - 2);
    a1 -= 2;
    a1[3].m128i_i32[0] = v10;
    v12 = a1[1].m128i_i64[1];
    a1[2] = v11;
    a1[3].m128i_i64[1] = v12;
  }
  v13 = _mm_load_si128(&v15);
  result = v16.m128i_u32[0];
  a1[1].m128i_i64[1] = v1;
  a1[1].m128i_i32[0] = result;
  *a1 = v13;
  return result;
}
