__int64 __fastcall sub_1CB6690(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rcx
  __m128i *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  const __m128i *v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  _OWORD v13[5]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = (__m128i *)(*(_QWORD *)a1 + (v1 << 6));
  if ( v1 >= v3 )
  {
    v8 = v1 + 1;
    v9 = (const __m128i *)v13;
    memset(v13, 0, 64);
    if ( v3 < v8 )
    {
      v12 = a1 + 16;
      if ( v2 > (unsigned __int64)v13 || v4 <= (__m128i *)v13 )
      {
        sub_2237220(a1, v12, v8, 64);
        v4 = (__m128i *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
      }
      else
      {
        sub_2237220(a1, v12, v8, 64);
        v9 = (const __m128i *)((char *)v13 + *(_QWORD *)a1 - v2);
        v4 = (__m128i *)(((unsigned __int64)*(unsigned int *)(a1 + 8) << 6) + *(_QWORD *)a1);
      }
    }
    *v4 = _mm_loadu_si128(v9);
    v4[1] = _mm_loadu_si128(v9 + 1);
    v4[2] = _mm_loadu_si128(v9 + 2);
    v4[3] = _mm_loadu_si128(v9 + 3);
    v10 = *(_QWORD *)a1;
    v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v11;
    return v10 + (v11 << 6) - 64;
  }
  else
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v5 = *(_QWORD *)a1;
    v6 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v6;
    return v5 + (v6 << 6) - 64;
  }
}
