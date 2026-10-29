__m128 *__fastcall sub_2124A60(__m128 *a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __m128 v7; // xmm0
  unsigned int v8; // eax
  __m128 v9; // xmm0
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-30h]

  v4 = *((_DWORD *)a4 + 2);
  if ( v4 <= 0x40 )
  {
    v5 = *a4;
LABEL_3:
    v10 = v5;
    a1->m128_u64[1] = a2;
    a1[2].m128_i32[0] = v4;
    v7 = _mm_loadh_ps((const double *)&v10);
    a1->m128_i32[0] = 4;
    a1[1] = v7;
    return a1;
  }
  v10 = a3;
  if ( v4 - (unsigned int)sub_2206780(a4) <= 0x40 )
  {
    v12 = v4;
    sub_2205510(&v11);
    v4 = v12;
    v5 = v11;
    goto LABEL_3;
  }
  v12 = v4;
  sub_2205510(&v11);
  v8 = v12;
  a1->m128_u64[1] = a2;
  a1->m128_i32[0] = 5;
  v9 = _mm_loadh_ps((const double *)&v11);
  a1[2].m128_i32[0] = v8;
  a1[1] = v9;
  return a1;
}
