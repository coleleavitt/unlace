__int64 __fastcall sub_1A0BA10(__int64 a1, const __m128i *a2, __int64 a3, char a4)
{
  __m128i *v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  const __m128i *v10; // rax
  __m128i *v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  __m128i *v18; // [rsp+10h] [rbp-38h]

  v17 = a3;
  v16 = (a4 != 0) + 14;
  v5 = (__m128i *)operator new(0x98u);
  sub_1A0B340(v5, a2);
  v6 = *(unsigned int *)(a1 + 16);
  v7 = *(unsigned int *)(a1 + 20);
  v18 = v5;
  v8 = v6 + 1;
  if ( v6 + 1 > v7 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = a1 + 8;
    v15 = a1 + 24;
    if ( v13 > (unsigned __int64)&v16 || (unsigned __int64)&v16 >= v13 + 40 * v6 )
    {
      sub_2237220(v14, v15, v8, 40);
      v9 = *(_QWORD *)(a1 + 8);
      v6 = *(unsigned int *)(a1 + 16);
      v10 = (const __m128i *)&v16;
    }
    else
    {
      sub_2237220(v14, v15, v8, 40);
      v9 = *(_QWORD *)(a1 + 8);
      v6 = *(unsigned int *)(a1 + 16);
      v10 = (const __m128i *)((char *)&v16 + v9 - v13);
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (const __m128i *)&v16;
  }
  v11 = (__m128i *)(v9 + 40 * v6);
  *v11 = _mm_loadu_si128(v10);
  v11[1] = _mm_loadu_si128(v10 + 1);
  result = v10[2].m128i_i64[0];
  v11[2].m128i_i64[0] = result;
  ++*(_DWORD *)(a1 + 16);
  return result;
}
