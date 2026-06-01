__int64 __fastcall sub_4FA720(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // r12d
  _QWORD *v5; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 i; // rax

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v3 >= v4 )
  {
    v7 = 2 * v4;
    v8 = sub_186B270(8 * v7);
    v3 = *(_DWORD *)(a1 + 8);
    v9 = *(_QWORD **)a1;
    v5 = (_QWORD *)v8;
    if ( v3 )
    {
      if ( v3 - 1 <= 2 || (_QWORD *)v8 == v9 + 1 )
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
          v10 += 2;
        }
        while ( v10 != 2LL * (v3 >> 1) );
        if ( (v3 & 1) != 0 )
          v5[v3 & 0xFFFFFFFE] = v9[v3 & 0xFFFFFFFE];
      }
    }
    if ( v9 && v9 != (_QWORD *)(a1 + 16) )
    {
      sub_186B220(v9);
      v3 = *(_DWORD *)(a1 + 8);
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v7;
  }
  else
  {
    v5 = *(_QWORD **)a1;
  }
  v5[v3] = *a2;
  *(_DWORD *)(a1 + 8) = v3 + 1;
  return v3;
}

