void __fastcall sub_5FA560(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i v5; // xmm0
  const __m128i *v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __m128i *v11; // rax
  char *v12; // rbp
  _QWORD v13[4]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+38h] [rbp-20h]

  if ( a2 )
  {
    v2 = a1->m128i_i64[0];
    v3 = a1->m128i_i64[1];
    v4 = a1[2].m128i_i64[0];
    v5 = _mm_loadu_si128(a1 + 1);
    v13[0] = a2;
    v6 = (const __m128i *)v13;
    v13[3] = v3;
    v7 = *(unsigned int *)(v2 + 8);
    v8 = *(unsigned int *)(v2 + 12);
    v15 = v4;
    v9 = v7 + 1;
    v10 = *(_QWORD *)v2;
    v16 = 0;
    v13[1] = 1;
    v13[2] = 0;
    v14 = v5;
    if ( v8 < v7 + 1 )
    {
      if ( (unsigned __int64)v13 < v10 || (unsigned __int64)v13 >= v10 + (v7 << 6) )
      {
        sub_25D6060(v2, v2 + 16, v9, 64);
        v10 = *(_QWORD *)v2;
        v7 = *(unsigned int *)(v2 + 8);
      }
      else
      {
        v12 = (char *)v13 - v10;
        sub_25D6060(v2, v2 + 16, v9, 64);
        v10 = *(_QWORD *)v2;
        v7 = *(unsigned int *)(v2 + 8);
        v6 = (const __m128i *)&v12[*(_QWORD *)v2];
      }
    }
    v11 = (__m128i *)((v7 << 6) + v10);
    *v11 = _mm_loadu_si128(v6);
    v11[1] = _mm_loadu_si128(v6 + 1);
    v11[2] = _mm_loadu_si128(v6 + 2);
    v11[3] = _mm_loadu_si128(v6 + 3);
    ++*(_DWORD *)(v2 + 8);
  }
}

