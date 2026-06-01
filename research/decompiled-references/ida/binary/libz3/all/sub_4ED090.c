__int64 __fastcall sub_4ED090(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r12d
  _QWORD *v6; // r13
  __int64 v7; // rbp
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 i; // rax

  v3 = sub_4ECEF0((_QWORD *)a1, a2);
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 52);
  v6 = v3;
  if ( v4 >= v5 )
  {
    v9 = 2 * v5;
    v10 = sub_186B270(8 * v9);
    v4 = *(_DWORD *)(a1 + 48);
    v11 = *(_QWORD **)(a1 + 40);
    v7 = v10;
    if ( v4 )
    {
      if ( v4 - 1 <= 2 || (_QWORD *)v10 == v11 + 1 )
      {
        for ( i = 0; i != v4; ++i )
          *(_QWORD *)(v7 + i * 8) = v11[i];
      }
      else
      {
        v12 = 0;
        do
        {
          *(__m128i *)(v7 + v12 * 8) = _mm_loadu_si128((const __m128i *)&v11[v12]);
          v12 += 2;
        }
        while ( v12 != 2LL * (v4 >> 1) );
        if ( (v4 & 1) != 0 )
          *(_QWORD *)(v7 + 8LL * (v4 & 0xFFFFFFFE)) = v11[v4 & 0xFFFFFFFE];
      }
    }
    if ( v11 != (_QWORD *)(a1 + 56) && v11 )
    {
      sub_186B220(v11);
      v4 = *(_DWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 52) = v9;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)(v7 + 8LL * v4) = v6;
  *(_DWORD *)(a1 + 48) = v4 + 1;
  return v4;
}

