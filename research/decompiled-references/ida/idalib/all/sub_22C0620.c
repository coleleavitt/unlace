__int64 __fastcall sub_22C0620(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
      {
        v12 = *(_QWORD *)a1;
        v13 = *a2;
        v14 = 16 * v3;
        v15 = 0;
        do
        {
          *(__m128i *)(v12 + v15) = _mm_loadu_si128((const __m128i *)(v13 + v15));
          v15 += 16;
        }
        while ( v14 != v15 );
      }
    }
    else
    {
      if ( v3 > *(unsigned int *)(a1 + 12) )
      {
        *(_DWORD *)(a1 + 8) = 0;
        sub_2237220(a1, (const void *)(a1 + 16), v3, 16);
        v3 = *((unsigned int *)a2 + 2);
        v8 = *(_QWORD *)a1;
        v9 = 0;
        v7 = *a2;
        v4 = 0;
      }
      else
      {
        v7 = *a2;
        v8 = *(_QWORD *)a1;
        v9 = 0;
        if ( v4 )
        {
          v4 *= 16LL;
          v16 = 0;
          v9 = v4;
          do
          {
            *(__m128i *)(v8 + v16) = _mm_loadu_si128((const __m128i *)(v7 + v16));
            v16 += 16;
          }
          while ( v4 != v16 );
          v8 = *(_QWORD *)a1;
          v7 = *a2;
        }
      }
      v10 = 16 * v3;
      if ( v7 + v4 != v10 + v7 )
        memcpy((void *)(v8 + v4), (const void *)(v7 + v4), v10 - v9);
    }
    *(_DWORD *)(a1 + 8) = v6;
  }
  return a1;
}
