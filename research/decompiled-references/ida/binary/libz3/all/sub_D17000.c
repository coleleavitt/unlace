__int64 __fastcall sub_D17000(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // r12d
  _DWORD *v5; // rbp
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 i; // rax

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v3 >= v4 )
  {
    v7 = 2 * v4;
    v8 = sub_186B270(4 * v7);
    v3 = *(_DWORD *)(a1 + 8);
    v9 = *(_DWORD **)a1;
    v5 = (_DWORD *)v8;
    if ( v3 )
    {
      if ( v3 - 1 <= 2 || (unsigned __int64)(v8 - (_QWORD)(v9 + 1)) <= 8 )
      {
        for ( i = 0; i != v3; ++i )
          v5[i] = v9[i];
      }
      else
      {
        v10 = 0;
        do
        {
          *(__m128i *)&v5[v10] = _mm_loadu_si128((const __m128i *)&v9[v10]);
          v10 += 4;
        }
        while ( 4LL * (v3 >> 2) != v10 );
        v11 = v3 & 0xFFFFFFFC;
        if ( (v3 & 3) != 0 )
        {
          v5[v11] = v9[v11];
          v12 = v11 + 1;
          if ( (unsigned int)v12 < v3 )
          {
            v13 = v11 + 2;
            v5[v12] = v9[v12];
            if ( (unsigned int)v13 < v3 )
              v5[v13] = v9[v13];
          }
        }
      }
    }
    if ( v9 && v9 != (_DWORD *)(a1 + 16) )
    {
      sub_186B220(v9);
      v3 = *(_DWORD *)(a1 + 8);
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v7;
  }
  else
  {
    v5 = *(_DWORD **)a1;
  }
  result = *a2;
  v5[v3] = result;
  ++*(_DWORD *)(a1 + 8);
  return result;
}

