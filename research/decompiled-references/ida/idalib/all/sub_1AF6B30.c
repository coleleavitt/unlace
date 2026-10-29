__int64 __fastcall sub_1AF6B30(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  __m128i *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rdx
  const __m128i *v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  _OWORD v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = (__m128i *)(*(_QWORD *)a1 + 32 * v1);
  if ( v1 >= v3 )
  {
    v8 = v1 + 1;
    v9 = (const __m128i *)v13;
    memset(v13, 0, 32);
    if ( v3 < v8 )
    {
      v12 = a1 + 16;
      if ( v2 > (unsigned __int64)v13 )
      {
        sub_2237220(a1, v12, v8, 32);
        v4 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
      }
      else
      {
        if ( v4 > (__m128i *)v13 )
        {
          sub_2237220(a1, v12, v8, 32);
          v9 = (const __m128i *)((char *)v13 + *(_QWORD *)a1 - v2);
        }
        else
        {
          sub_2237220(a1, v12, v8, 32);
        }
        v4 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
      }
    }
    *v4 = _mm_loadu_si128(v9);
    v4[1] = _mm_loadu_si128(v9 + 1);
    v10 = *(_QWORD *)a1;
    v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v11;
    return v10 + 32 * v11 - 32;
  }
  else
  {
    *v4 = 0;
    v5 = (unsigned int)(v1 + 1);
    v4[1] = 0;
    v6 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 8) = v5;
    return v6 + 32 * v5 - 32;
  }
}
