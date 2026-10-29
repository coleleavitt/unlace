__m128i *__fastcall sub_1CB4530(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __m128i *result; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i *v10; // rcx
  __int64 *v11; // [rsp+0h] [rbp-68h]
  __int64 v12; // [rsp+8h] [rbp-60h]
  __m128i v13[5]; // [rsp+10h] [rbp-58h] BYREF

  result = (__m128i *)a2[1];
  if ( (_DWORD)result )
  {
    v4 = 0;
    v5 = 8 * (9LL * (unsigned int)((_DWORD)result - 1) + 9);
    v11 = a3 + 2;
    do
    {
      sub_1CAFE90(v13, (_QWORD **)(a1 + 248), v4 + *a2);
      v7 = *((unsigned int *)a3 + 2);
      v8 = v7 + 1;
      if ( v7 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
      {
        if ( *a3 > (unsigned __int64)v13 || (unsigned __int64)v13 >= *a3 + 32 * v7 )
        {
          sub_2237220(a3, v11, v8, 32);
          v9 = *a3;
          v7 = *((unsigned int *)a3 + 2);
          v10 = v13;
        }
        else
        {
          v12 = *a3;
          sub_2237220(a3, v11, v8, 32);
          v9 = *a3;
          v7 = *((unsigned int *)a3 + 2);
          v10 = (__m128i *)((char *)v13 + *a3 - v12);
        }
      }
      else
      {
        v9 = *a3;
        v10 = v13;
      }
      v4 += 72;
      result = (__m128i *)(v9 + 32 * v7);
      *result = _mm_loadu_si128(v10);
      result[1] = _mm_loadu_si128(v10 + 1);
      ++*((_DWORD *)a3 + 2);
    }
    while ( v5 != v4 );
  }
  return result;
}
