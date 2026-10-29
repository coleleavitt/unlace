__int64 __fastcall sub_1C54220(__int64 a1, const __m128i *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r8
  __m128i *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h]

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = *(unsigned int *)(a1 + 12);
  v5 = (__m128i *)(*(_QWORD *)a1 + 24 * v2);
  if ( v2 >= v4 )
  {
    v8 = a2[1].m128i_i64[0];
    v9 = v2 + 1;
    v10 = &v13;
    v13 = _mm_loadu_si128(a2);
    v14 = v8;
    if ( v4 < v9 )
    {
      v12 = a1 + 16;
      if ( v3 > (unsigned __int64)&v13 || v5 <= &v13 )
      {
        sub_2237220(a1, v12, v9, 24);
        v5 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
      else
      {
        sub_2237220(a1, v12, v9, 24);
        v10 = (__m128i *)((char *)&v13 + *(_QWORD *)a1 - v3);
        v5 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
    }
    *v5 = _mm_loadu_si128(v10);
    v5[1].m128i_i64[0] = v10[1].m128i_i64[0];
    v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v11;
    return *(_QWORD *)a1 + 24 * v11 - 24;
  }
  else
  {
    v6 = (unsigned int)(v2 + 1);
    *v5 = _mm_loadu_si128(a2);
    v5[1].m128i_i64[0] = a2[1].m128i_i64[0];
    *(_DWORD *)(a1 + 8) = v6;
    return *(_QWORD *)a1 + 24 * v6 - 24;
  }
}
