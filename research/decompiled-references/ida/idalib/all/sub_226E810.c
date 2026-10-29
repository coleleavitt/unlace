void __fastcall sub_226E810(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const __m128i *v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  __int64 v12; // rdi
  const void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  int v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+Ch] [rbp-2Ch]
  int v18; // [rsp+14h] [rbp-24h]

  if ( *(_BYTE *)(a1 + 73) )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v6 = *(_QWORD *)(a1 + 224);
    v18 = 0;
    v7 = (const __m128i *)&v15;
    v17 = v5;
    v8 = *(unsigned int *)(a1 + 232);
    LOBYTE(v18) = a4;
    v9 = *(unsigned int *)(a1 + 236);
    v16 = a3;
    v10 = v8 + 1;
    v15 = a2;
    v11 = (__m128i *)(v6 + 24 * v8);
    if ( v10 > v9 )
    {
      v12 = a1 + 224;
      v13 = (const void *)(a1 + 240);
      if ( v6 > (unsigned __int64)&v15 || v11 <= (__m128i *)&v15 )
      {
        sub_2237220(v12, v13, v10, 24);
        v11 = (__m128i *)(*(_QWORD *)(a1 + 224) + 24LL * *(unsigned int *)(a1 + 232));
      }
      else
      {
        sub_2237220(v12, v13, v10, 24);
        v14 = *(_QWORD *)(a1 + 224);
        v7 = (const __m128i *)((char *)&v15 + v14 - v6);
        v11 = (__m128i *)(v14 + 24LL * *(unsigned int *)(a1 + 232));
      }
    }
    *v11 = _mm_loadu_si128(v7);
    v11[1].m128i_i64[0] = v7[1].m128i_i64[0];
    ++*(_DWORD *)(a1 + 232);
  }
}
