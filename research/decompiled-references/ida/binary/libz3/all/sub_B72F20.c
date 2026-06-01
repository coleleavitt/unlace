__int64 __fastcall sub_B72F20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  unsigned int v7; // edx
  unsigned int v8; // r14d
  _QWORD *v9; // rsi
  __int64 v10; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 i; // rax
  unsigned __int8 v17; // [rsp+7h] [rbp-41h]

  v17 = sub_B72900(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v10 = sub_983520(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16 * v6),
                *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16 * v6 + 8));
        if ( v10 )
          break;
        v17 = 0;
        if ( (unsigned int)++v6 >= *(_DWORD *)(a1 + 24) )
          return v17;
      }
      v7 = *(_DWORD *)(a3 + 8);
      v8 = *(_DWORD *)(a3 + 12);
      if ( v7 >= v8 )
      {
        v12 = 2 * v8;
        v13 = sub_186B270(8 * v12);
        v7 = *(_DWORD *)(a3 + 8);
        v14 = *(_QWORD **)a3;
        v9 = (_QWORD *)v13;
        if ( v7 )
        {
          if ( v7 - 1 <= 2 || (_QWORD *)v13 == v14 + 1 )
          {
            for ( i = 0; i != v7; ++i )
              v9[i] = v14[i];
          }
          else
          {
            v15 = 0;
            do
            {
              *(__m128i *)&v9[v15] = _mm_loadu_si128((const __m128i *)&v14[v15]);
              v15 += 2;
            }
            while ( 2LL * (v7 >> 1) != v15 );
            if ( (v7 & 1) != 0 )
              v9[v7 & 0xFFFFFFFE] = v14[v7 & 0xFFFFFFFE];
          }
        }
        if ( v14 && v14 != (_QWORD *)(a3 + 16) )
        {
          sub_186B220(v14);
          v7 = *(_DWORD *)(a3 + 8);
        }
        *(_QWORD *)a3 = v9;
        *(_DWORD *)(a3 + 12) = v12;
      }
      else
      {
        v9 = *(_QWORD **)a3;
      }
      ++v6;
      v9[v7] = v10;
      *(_DWORD *)(a3 + 8) = v7 + 1;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 24) );
  }
  return v17;
}

