__m128i *__fastcall sub_1782C90(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  const __m128i *v9; // rcx
  __m128i *result; // rax
  __int64 v11; // r12
  __int64 *v12; // rsi
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h]
  __m128i v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v2 = *a1;
  v3 = (unsigned __int64)sub_A81910((_QWORD *)a1[1][31], a2, *(_DWORD *)a1[2]);
  sub_F1D250((__int64)&v13, a2, 0, 0);
  v4 = *((unsigned int *)v2 + 3);
  v5 = _mm_load_si128(&v13);
  v16 = v14;
  v6 = *((unsigned int *)v2 + 2);
  v15 = v5;
  v7 = v6 + 1;
  v17 = v3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  if ( v6 + 1 > v4 )
  {
    v11 = *v2;
    v12 = v2 + 2;
    if ( *v2 > (unsigned __int64)&v15 || (unsigned __int64)&v15 >= v11 + 32 * v6 )
    {
      sub_2237220(v2, v12, v7, 32);
      v8 = *v2;
      v6 = *((unsigned int *)v2 + 2);
      v9 = &v15;
    }
    else
    {
      sub_2237220(v2, v12, v7, 32);
      v8 = *v2;
      v6 = *((unsigned int *)v2 + 2);
      v9 = (__m128i *)((char *)&v15 + *v2 - v11);
    }
  }
  else
  {
    v8 = *v2;
    v9 = &v15;
  }
  result = (__m128i *)(v8 + 32 * v6);
  *result = _mm_loadu_si128(v9);
  result[1] = _mm_loadu_si128(v9 + 1);
  ++*((_DWORD *)v2 + 2);
  return result;
}
