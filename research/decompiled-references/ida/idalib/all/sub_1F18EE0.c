__m128i *__fastcall sub_1F18EE0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __m128i *result; // rax
  int v4; // r13d
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __m128i *v9; // rcx
  __int64 v10; // [rsp+8h] [rbp-60h]
  __m128i v11[5]; // [rsp+10h] [rbp-58h] BYREF

  *((_DWORD *)a2 + 68) = sub_1EE7490(a1);
  *((_DWORD *)a2 + 69) = sub_1EE7490(a1);
  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  result = *(__m128i **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  if ( (_DWORD)result )
  {
    v4 = (int)result;
    v5 = 0;
    do
    {
      sub_1F18E50(v11, a1);
      v6 = *((unsigned int *)a2 + 2);
      v7 = v6 + 1;
      if ( v6 + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
      {
        if ( *a2 > (unsigned __int64)v11 || (unsigned __int64)v11 >= *a2 + 32 * v6 )
        {
          sub_2237220(a2, a2 + 2, v7, 32);
          v8 = *a2;
          v6 = *((unsigned int *)a2 + 2);
          v9 = v11;
        }
        else
        {
          v10 = *a2;
          sub_2237220(a2, a2 + 2, v7, 32);
          v8 = *a2;
          v6 = *((unsigned int *)a2 + 2);
          v9 = (__m128i *)((char *)v11 + *a2 - v10);
        }
      }
      else
      {
        v8 = *a2;
        v9 = v11;
      }
      ++v5;
      result = (__m128i *)(v8 + 32 * v6);
      *result = _mm_loadu_si128(v9);
      result[1] = _mm_loadu_si128(v9 + 1);
      ++*((_DWORD *)a2 + 2);
    }
    while ( v4 != v5 );
  }
  return result;
}
