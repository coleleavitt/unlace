__int64 __fastcall sub_4B6A20(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r12d
  __int64 v6; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 i; // rax

  v2 = *(_QWORD *)(a1 + 144);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *v3 == 5 && v3[1] == 9 )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_15D37A0(v2 + 24, a2) && !(unsigned __int8)sub_15D37A0(v2 + 80, a2) )
    return 0;
  v4 = *(_DWORD *)(v2 + 168);
  v5 = *(_DWORD *)(v2 + 172);
  if ( v4 >= v5 )
  {
    v8 = 2 * v5;
    v9 = sub_186B270(8 * v8);
    v4 = *(_DWORD *)(v2 + 168);
    v10 = *(_QWORD **)(v2 + 160);
    v6 = v9;
    if ( v4 )
    {
      if ( v4 - 1 <= 2 || (_QWORD *)v9 == v10 + 1 )
      {
        for ( i = 0; i != v4; ++i )
          *(_QWORD *)(v6 + i * 8) = v10[i];
      }
      else
      {
        v11 = 0;
        do
        {
          *(__m128i *)(v6 + v11 * 8) = _mm_loadu_si128((const __m128i *)&v10[v11]);
          v11 += 2;
        }
        while ( 2LL * (v4 >> 1) != v11 );
        if ( (v4 & 1) != 0 )
          *(_QWORD *)(v6 + 8LL * (v4 & 0xFFFFFFFE)) = v10[v4 & 0xFFFFFFFE];
      }
    }
    if ( v10 != (_QWORD *)(v2 + 176) )
    {
      if ( v10 )
      {
        sub_186B220(v10);
        v4 = *(_DWORD *)(v2 + 168);
      }
    }
    *(_QWORD *)(v2 + 160) = v6;
    *(_DWORD *)(v2 + 172) = v8;
  }
  else
  {
    v6 = *(_QWORD *)(v2 + 160);
  }
  *(_QWORD *)(v6 + 8LL * v4) = a2;
  *(_DWORD *)(v2 + 168) = v4 + 1;
  return 1;
}

