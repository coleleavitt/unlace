void __fastcall sub_12D5F60(__int64 a1, int a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rcx
  const __m128i *v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]
  int v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+1Ch] [rbp-3Ch]
  __int64 v20; // [rsp+24h] [rbp-34h]
  int v21; // [rsp+2Ch] [rbp-2Ch]

  if ( a4 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v21 = a4;
    v6 = *(unsigned int *)(a1 + 48);
    v7 = (const __m128i *)&v15;
    v19 = a3;
    v8 = v6 + 1;
    v16 = 0;
    v9 = 7 * v6;
    v10 = *(unsigned int *)(a1 + 52);
    v18 = a2;
    v17 = 0;
    v11 = (__m128i *)(v5 + 8 * v9);
    v20 = 0;
    v15 = 2;
    if ( v8 > v10 )
    {
      v12 = a1 + 40;
      v13 = a1 + 56;
      if ( v5 > (unsigned __int64)&v15 || v11 <= (__m128i *)&v15 )
      {
        sub_2237220(v12, v13, v8, 56);
        v11 = (__m128i *)(*(_QWORD *)(a1 + 40) + 56LL * *(unsigned int *)(a1 + 48));
      }
      else
      {
        sub_2237220(v12, v13, v8, 56);
        v14 = *(_QWORD *)(a1 + 40);
        v7 = (const __m128i *)((char *)&v15 + v14 - v5);
        v11 = (__m128i *)(v14 + 56LL * *(unsigned int *)(a1 + 48));
      }
    }
    *v11 = _mm_loadu_si128(v7);
    v11[1] = _mm_loadu_si128(v7 + 1);
    v11[2] = _mm_loadu_si128(v7 + 2);
    v11[3].m128i_i64[0] = v7[3].m128i_i64[0];
    ++*(_DWORD *)(a1 + 48);
  }
}
