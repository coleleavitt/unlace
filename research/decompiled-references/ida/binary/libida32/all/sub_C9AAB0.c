__m128i *__fastcall sub_C9AAB0(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __m128i *result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  void *v17; // rdi
  int v18; // r15d
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v10 = *(unsigned int *)(v4 + 72);
    *(_DWORD *)(a1 + 36) = v10;
    *(_BYTE *)(a1 + 40) = 1;
    if ( *(_DWORD *)(v4 + 76) <= (unsigned int)v10 )
    {
      v14 = sub_22136C0(v4 + 64, v4 + 80, 0, 144, v21);
      v15 = *(unsigned int *)(v4 + 72);
      v20.m128i_i64[0] = v14;
      v16 = (_QWORD *)(v14 + 144 * v15);
      v16[1] = 0x800000000LL;
      *v16 = v16 + 2;
      sub_C9A980(v4 + 64, v14);
      v17 = *(void **)(v4 + 64);
      v18 = v21[0];
      v19 = v20.m128i_i64[0];
      if ( (void *)(v4 + 80) != v17 )
      {
        free(v17);
        v19 = v20.m128i_i64[0];
      }
      *(_QWORD *)(v4 + 64) = v19;
      *(_DWORD *)(v4 + 76) = v18;
      ++*(_DWORD *)(v4 + 72);
      v4 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v11 = (_QWORD *)(*(_QWORD *)(v4 + 64) + 144 * v10);
      v11[1] = 0x800000000LL;
      *v11 = v11 + 2;
      ++*(_DWORD *)(v4 + 72);
    }
    v12 = *(unsigned int *)(a1 + 36);
    v21[0] = 0;
    sub_CE2C60(v4, v12, v21);
    v5 = *(_QWORD *)(a1 + 8);
  }
  v6 = *(_QWORD *)(v5 + 64) + 144LL * *(unsigned int *)(a1 + 36);
  v7 = *(unsigned int *)(v6 + 8);
  v8 = *(unsigned int *)(v6 + 12);
  if ( v7 >= v8 )
  {
    v13 = _mm_loadu_si128(a2);
    if ( v8 < v7 + 1 )
    {
      v20 = v13;
      sub_22134E0(v6, v6 + 16, v7 + 1, 16);
      v7 = *(unsigned int *)(v6 + 8);
      v13 = _mm_load_si128(&v20);
    }
    result = (__m128i *)(*(_QWORD *)v6 + 16 * v7);
    *result = v13;
    ++*(_DWORD *)(v6 + 8);
  }
  else
  {
    result = (__m128i *)(*(_QWORD *)v6 + 16 * v7);
    *result = _mm_loadu_si128(a2);
    ++*(_DWORD *)(v6 + 8);
  }
  return result;
}

