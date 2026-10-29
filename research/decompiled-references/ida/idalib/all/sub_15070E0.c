__int64 *__fastcall sub_15070E0(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9

  if ( a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *((unsigned int *)a1 + 2);
    v6 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
      {
        v12 = *a1;
        v13 = *a2;
        v14 = 0;
        do
        {
          *(__m128i *)(v12 + v14) = _mm_loadu_si128((const __m128i *)(v13 + v14));
          *(_QWORD *)(v12 + v14 + 16) = *(_QWORD *)(v13 + v14 + 16);
          v14 += 24;
        }
        while ( 24 * v3 != v14 );
      }
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        sub_2237220(a1, a1 + 2, v3, 24);
        v3 = *((unsigned int *)a2 + 2);
        v8 = *a1;
        v9 = 0;
        v7 = *a2;
        v4 = 0;
      }
      else
      {
        v7 = *a2;
        v8 = *a1;
        v9 = 0;
        if ( v4 )
        {
          v15 = 0;
          v16 = 24 * v4;
          v4 = v16;
          v9 = v16;
          do
          {
            *(__m128i *)(v8 + v15) = _mm_loadu_si128((const __m128i *)(v7 + v15));
            *(_QWORD *)(v8 + v15 + 16) = *(_QWORD *)(v7 + v15 + 16);
            v15 += 24;
          }
          while ( v16 != v15 );
          v8 = *a1;
          v7 = *a2;
        }
      }
      v10 = 24 * v3;
      if ( v7 + v4 != v10 + v7 )
        memcpy((void *)(v4 + v8), (const void *)(v7 + v4), v10 - v9);
    }
    *((_DWORD *)a1 + 2) = v6;
  }
  return a1;
}
