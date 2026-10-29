__int64 __fastcall sub_A3230(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v3 = a1[16];
  v13 = __readfsqword(0x28u);
  v12.m128i_i64[0] = a2;
  v5 = a1[15];
  v12.m128i_i16[4] = 0;
  v6 = a1[17];
  v7 = v3 + 1;
  if ( (unsigned __int64)&v12 >= v5 && (unsigned __int64)&v12 < v5 + 16 * v6 )
  {
    if ( v6 < v7 )
    {
      v11 = qvector_reserve();
      a1[15] = v11;
      v5 = v11;
      v3 = a1[16];
    }
    v9 = 16 * v3 + v5;
    *(_QWORD *)v9 = a2;
    *(_WORD *)(v9 + 8) = 0;
  }
  else
  {
    if ( v6 < v7 )
    {
      v10 = qvector_reserve();
      a1[15] = v10;
      v5 = v10;
      v3 = a1[16];
    }
    *(__m128i *)(v5 + 16 * v3) = _mm_load_si128(&v12);
  }
  ++a1[16];
  return sub_A3180((__int64)a1);
}

