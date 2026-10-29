__int64 __fastcall sub_D15810(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r13
  unsigned int v6; // edx
  unsigned int v7; // r14d
  _QWORD *v8; // rbp
  __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 i; // rax

  sub_D15A10(*(_QWORD *)(a1 + 16), *a2);
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v5 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v5 + 32);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a3 + 12);
  if ( v6 >= v7 )
  {
    v10 = 2 * v7;
    v11 = sub_186B270(8 * v10);
    v6 = *(_DWORD *)(a3 + 8);
    v12 = *(_QWORD **)a3;
    v8 = (_QWORD *)v11;
    if ( v6 )
    {
      if ( v6 - 1 <= 2 || (_QWORD *)v11 == v12 + 1 )
      {
        for ( i = 0; i != v6; ++i )
          v8[i] = v12[i];
      }
      else
      {
        v13 = 0;
        do
        {
          *(__m128i *)&v8[v13] = _mm_loadu_si128((const __m128i *)&v12[v13]);
          v13 += 2;
        }
        while ( 2LL * (v6 >> 1) != v13 );
        if ( (v6 & 1) != 0 )
          v8[v6 & 0xFFFFFFFE] = v12[v6 & 0xFFFFFFFE];
      }
    }
    if ( v12 != (_QWORD *)(a3 + 16) && v12 )
    {
      sub_186B220(v12);
      v6 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v8;
    *(_DWORD *)(a3 + 12) = v10;
  }
  else
  {
    v8 = *(_QWORD **)a3;
  }
  v8[v6] = v5;
  *(_DWORD *)(a3 + 8) = v6 + 1;
  *(_BYTE *)(a1 + 12) = 0;
  return v6;
}

