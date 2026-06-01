__int64 __fastcall sub_1F18CE0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // ebp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i *v10; // rcx
  __m128i *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+8h] [rbp-80h]
  __m128i v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  __m128i v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]

  v5 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v5 + 1;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v5);
  if ( *((_DWORD *)a2 + 3) < (unsigned int)result )
  {
    v14 = result;
    sub_2237220(a2, a2 + 2, (unsigned int)result, 24);
    result = v14;
  }
  v7 = result - 1;
  if ( (_DWORD)result )
  {
    do
    {
      sub_1F0B900((__int64)&v17, a1);
      if ( a3 )
      {
        sub_AB6BB0(&v15, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), &v17);
        v17 = _mm_loadu_si128(&v15);
        v18 = v16;
      }
      v8 = *((unsigned int *)a2 + 2);
      v9 = v8 + 1;
      v10 = (__m128i *)(*a2 + 24 * v8);
      v11 = &v17;
      if ( v9 > *((unsigned int *)a2 + 3) )
      {
        v12 = a2 + 2;
        if ( *a2 > (unsigned __int64)&v17 || v10 <= &v17 )
        {
          sub_2237220(a2, v12, v9, 24);
          v10 = (__m128i *)(*a2 + 24LL * *((unsigned int *)a2 + 2));
          v11 = &v17;
        }
        else
        {
          v13 = *a2;
          sub_2237220(a2, v12, v9, 24);
          v11 = (__m128i *)((char *)&v17 + *a2 - v13);
          v10 = (__m128i *)(*a2 + 24LL * *((unsigned int *)a2 + 2));
        }
      }
      --v7;
      *v10 = _mm_loadu_si128(v11);
      result = v11[1].m128i_i64[0];
      v10[1].m128i_i64[0] = result;
      ++*((_DWORD *)a2 + 2);
    }
    while ( v7 != -1 );
  }
  return result;
}
