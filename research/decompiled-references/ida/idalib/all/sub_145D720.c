__int64 __fastcall sub_145D720(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rcx
  __m128i *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v7; // rdx
  const __m128i *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD v11[2]; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+10h] [rbp-28h]

  v1 = *(unsigned int *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = (__m128i *)(*(_QWORD *)a1 + 24 * v1);
  if ( v1 >= v3 )
  {
    v7 = v1 + 1;
    v8 = (const __m128i *)v11;
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    if ( v3 < v7 )
    {
      v10 = a1 + 16;
      if ( v2 > (unsigned __int64)v11 || v4 <= (__m128i *)v11 )
      {
        sub_2237220(a1, v10, v7, 24);
        v4 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
      else
      {
        sub_2237220(a1, v10, v7, 24);
        v8 = (const __m128i *)((char *)v11 + *(_QWORD *)a1 - v2);
        v4 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
    }
    *v4 = _mm_loadu_si128(v8);
    v4[1].m128i_i64[0] = v8[1].m128i_i64[0];
    v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v9;
    return *(_QWORD *)a1 + 24 * v9 - 24;
  }
  else
  {
    v4->m128i_i64[1] = 0;
    v4[1].m128i_i32[0] = 0;
    v4->m128i_i64[0] = 0;
    v5 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v5;
    return *(_QWORD *)a1 + 24 * v5 - 24;
  }
}
