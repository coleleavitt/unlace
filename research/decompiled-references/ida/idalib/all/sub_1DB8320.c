__int64 __fastcall sub_1DB8320(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rax
  int v5; // r14d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __m128i *v9; // rcx
  const __m128i *v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = *(unsigned int *)(a2 + 8);
  v5 = *(_DWORD *)(a1 + 64) & 0xFFFFF;
  while ( 1 )
  {
    v6 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 12);
    v8 = v4 + 1;
    memset(v14, 0, 24);
    v9 = (__m128i *)(v6 + 24 * v4);
    v10 = (const __m128i *)v14;
    if ( v8 <= v7 )
      goto LABEL_4;
    v12 = a2 + 16;
    if ( v6 > (unsigned __int64)v14 )
    {
      v13 = a2;
    }
    else
    {
      v13 = a2;
      if ( v9 > (__m128i *)v14 )
      {
        sub_2237220(a2, v12, v8, 24);
        v10 = (const __m128i *)((char *)v14 + *(_QWORD *)a2 - v6);
        v9 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
        goto LABEL_4;
      }
    }
    sub_2237220(v13, v12, v8, 24);
    v9 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    v10 = (const __m128i *)v14;
LABEL_4:
    *v9 = _mm_loadu_si128(v10);
    v9[1].m128i_i64[0] = v10[1].m128i_i64[0];
    v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = v4;
    if ( v5 == v2 )
      return 0;
    ++v2;
  }
}
