void __fastcall sub_12D6060(__int64 a1, int a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  char v7; // r12
  char *v10; // r8
  void *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  const __m128i *v16; // rax
  __m128i *v17; // rdx
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // [rsp+0h] [rbp-68h] BYREF
  void *v22; // [rsp+8h] [rbp-60h]
  size_t v23; // [rsp+10h] [rbp-58h]
  int v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+1Ch] [rbp-4Ch]
  __int64 v26; // [rsp+24h] [rbp-44h]
  char v27; // [rsp+30h] [rbp-38h]

  if ( a5 )
  {
    v7 = a6;
    *(_QWORD *)(a1 + 584) += a5;
    v10 = *(char **)(a1 + 504);
    v22 = nullptr;
    v23 = 0;
    v26 = 0;
    v21 = 0;
    v24 = a2;
    v25 = a3;
    if ( *(_QWORD *)(a1 + 512) >= (unsigned __int64)&v10[a5] && v10 )
      *(_QWORD *)(a1 + 504) = &v10[a5];
    else
      v10 = (char *)sub_986170(a1 + 504, a5, a5, 0, (__int64)v10, a6);
    v11 = memmove(v10, a4, a5);
    v12 = *(unsigned int *)(a1 + 48);
    v23 = a5;
    v22 = v11;
    v13 = *(unsigned int *)(a1 + 52);
    v14 = v12 + 1;
    v27 = v7;
    if ( v12 + 1 > v13 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v19 = a1 + 40;
      v20 = a1 + 56;
      if ( v18 <= (unsigned __int64)&v21 && (unsigned __int64)&v21 < v18 + 56 * v12 )
      {
        sub_2237220(v19, v20, v14, 56);
        v15 = *(_QWORD *)(a1 + 40);
        v12 = *(unsigned int *)(a1 + 48);
        v16 = (const __m128i *)((char *)&v21 + v15 - v18);
      }
      else
      {
        sub_2237220(v19, v20, v14, 56);
        v15 = *(_QWORD *)(a1 + 40);
        v12 = *(unsigned int *)(a1 + 48);
        v16 = (const __m128i *)&v21;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = (const __m128i *)&v21;
    }
    v17 = (__m128i *)(v15 + 56 * v12);
    *v17 = _mm_loadu_si128(v16);
    v17[1] = _mm_loadu_si128(v16 + 1);
    v17[2] = _mm_loadu_si128(v16 + 2);
    v17[3].m128i_i64[0] = v16[3].m128i_i64[0];
    ++*(_DWORD *)(a1 + 48);
  }
}
