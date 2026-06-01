__int64 __fastcall sub_553380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 i; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]

  v5 = 0;
  sub_182A4C0(a1, *(_QWORD *)a2, *(_QWORD *)a3);
  if ( *(_DWORD *)(a2 + 16) )
  {
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v5++);
      sub_182A4B0(a1, v7);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a2 + 16) );
  }
  *(_DWORD *)(a2 + 16) = 0;
  v8 = 0;
  result = *(unsigned int *)(a3 + 16);
  if ( (_DWORD)result )
  {
    do
    {
      v11 = sub_1829B00(a1, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8));
      v12 = *(_DWORD *)(a2 + 16);
      v13 = *(_DWORD *)(a2 + 20);
      v14 = v11;
      if ( v12 < v13 )
      {
        v10 = *(_QWORD *)(a2 + 8);
      }
      else
      {
        v20 = v11;
        v15 = 2 * v13;
        v16 = sub_186B270(8 * v15);
        v12 = *(_DWORD *)(a2 + 16);
        v17 = *(_QWORD **)(a2 + 8);
        v14 = v20;
        v10 = v16;
        if ( v12 )
        {
          if ( v12 - 1 <= 2 || (_QWORD *)v16 == v17 + 1 )
          {
            for ( i = 0; i != v12; ++i )
              *(_QWORD *)(v10 + i * 8) = v17[i];
          }
          else
          {
            v18 = 0;
            do
            {
              *(__m128i *)(v10 + v18 * 8) = _mm_loadu_si128((const __m128i *)&v17[v18]);
              v18 += 2;
            }
            while ( v18 != 2LL * (v12 >> 1) );
            if ( (v12 & 1) != 0 )
              *(_QWORD *)(v10 + 8LL * (v12 & 0xFFFFFFFE)) = v17[v12 & 0xFFFFFFFE];
          }
        }
        if ( v17 != (_QWORD *)(a2 + 24) )
        {
          if ( v17 )
          {
            sub_186B220(v17);
            v12 = *(_DWORD *)(a2 + 16);
          }
        }
        *(_QWORD *)(a2 + 8) = v10;
        *(_DWORD *)(a2 + 20) = v15;
      }
      result = v12;
      ++v8;
      *(_QWORD *)(v10 + 8LL * v12) = v14;
      *(_DWORD *)(a2 + 16) = v12 + 1;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a3 + 16) );
  }
  return result;
}

