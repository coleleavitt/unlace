__int64 __fastcall sub_1838970(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int8 a5)
{
  __m128 *v5; // r13
  __m128 v7; // xmm0
  __int64 result; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  signed __int64 v13; // rbp
  double v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a1 + 3;
  a1[1].m128_u64[0] = a4;
  *(_QWORD *)&v14[0] = a3;
  *(_QWORD *)&v14[1] = a2;
  a1[1].m128_i8[8] = a5;
  a1[2].m128_u64[0] = (unsigned __int64)&a1[3];
  v7 = _mm_loadh_ps(v14);
  a1[2].m128_u64[1] = 0x1000000000LL;
  *a1 = v7;
  result = sub_B74920(a4);
  if ( result )
  {
    v9 = *(unsigned int *)result;
    v10 = a1[2].m128_u32[3];
    a1[2].m128_i32[2] = 0;
    v11 = 0;
    LODWORD(v12) = 0;
    v13 = 8 * v9;
    if ( v13 >> 3 > v10 )
    {
      *(_QWORD *)&v14[0] = result;
      sub_2237220(&a1[2], v5, v13 >> 3, 8);
      v12 = a1[2].m128_u32[2];
      result = *(_QWORD *)&v14[0];
      v11 = 8 * v12;
      if ( !v13 )
        goto LABEL_5;
    }
    else if ( !v13 )
    {
LABEL_5:
      a1[2].m128_i32[2] = v12 + (v13 >> 3);
      return result;
    }
    result = (__int64)memcpy((void *)(a1[2].m128_u64[0] + v11), (const void *)(result + 8), v13);
    LODWORD(v12) = a1[2].m128_i32[2];
    goto LABEL_5;
  }
  return result;
}
