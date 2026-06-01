__int64 __fastcall sub_183A610(__m128 *a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned __int64 a5)
{
  __m128 v7; // xmm0
  int v8; // r12d
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  double v18[4]; // [rsp+8h] [rbp-20h] BYREF

  a1[1].m128_i32[0] = a4;
  *(_QWORD *)&v18[0] = a3;
  a1[1].m128_u64[1] = a5;
  a1[2].m128_i16[0] = 0;
  v7 = _mm_loadh_ps(v18);
  a1[2].m128_i8[2] = 0;
  *a1 = v7;
  if ( (int)a4 >= 0 )
  {
    if ( (int)a4 <= 2 )
    {
      a1[2].m128_i8[0] = 1;
    }
    else if ( (int)a4 <= 4 )
    {
      a1[2].m128_i8[1] = 1;
    }
  }
  v8 = sub_B76070((__int64)a3, a2, (__int64)a3, a4);
  result = (unsigned __int8)sub_B981D0(a3, a2);
  if ( (unsigned __int8)result != v8 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a3[15] + 8LL * (unsigned __int8)sub_B771C0((__int64)a3, a2, v10, v11)) + 48LL)
        & 0xFFFFFFFFFFFFFFF0LL;
    v15 = *(_QWORD *)v12;
    v16 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v12 + 16LL) - 43;
    if ( (unsigned int)v16 <= 1 || (result = sub_1838000(v15, a2, v16, v13), (v15 = result) != 0) )
    {
      result = sub_9B4870(v15, a2, v16, v13, v14);
      LOBYTE(v17) = 1;
      if ( (result & 1) == 0 )
      {
        result &= 0xFFFFFFFFFFFFFFF0LL;
        v17 = *(_QWORD *)(result + 8) & 1LL;
      }
      a1[2].m128_i8[2] = v17;
    }
  }
  return result;
}
