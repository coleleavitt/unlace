__int64 __fastcall sub_CD7B30(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD **v4; // rbx
  unsigned __int64 v5; // r15
  _DWORD *v6; // rbp
  _DWORD *v8; // rbp
  unsigned int v9; // edx
  unsigned int v10; // r13d
  _DWORD **v11; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 i; // rax

  sub_EE4F60("symmetry_reduce");
  sub_EE5110("symmetry_reduce");
  sub_EE5490("symmetry_reduce");
  v4 = *(_DWORD ***)a3;
  v5 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 < v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          if ( v6[8]-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v4 >= v5 )
          goto LABEL_7;
      }
      ++v4;
      sub_ED44E0(v6);
      sub_186B220(v6);
    }
    while ( (unsigned __int64)v4 < v5 );
  }
LABEL_7:
  *(_DWORD *)(a3 + 8) = 0;
  sub_CE17E0(*(_QWORD *)(a1 + 16), *a2);
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v8 = (_DWORD *)*a2;
  if ( *a2 )
    ++v8[8];
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a3 + 12);
  if ( v9 >= v10 )
  {
    v13 = 2 * v10;
    v14 = sub_186B270(8 * v13);
    v9 = *(_DWORD *)(a3 + 8);
    v15 = *(_QWORD **)a3;
    v11 = (_DWORD **)v14;
    if ( v9 )
    {
      if ( v9 - 1 <= 2 || (_QWORD *)v14 == v15 + 1 )
      {
        for ( i = 0; i != v9; ++i )
          v11[i] = (_DWORD *)v15[i];
      }
      else
      {
        v16 = 0;
        do
        {
          *(__m128i *)&v11[v16] = _mm_loadu_si128((const __m128i *)&v15[v16]);
          v16 += 2;
        }
        while ( 2LL * (v9 >> 1) != v16 );
        if ( (v9 & 1) != 0 )
          v11[v9 & 0xFFFFFFFE] = (_DWORD *)v15[v9 & 0xFFFFFFFE];
      }
    }
    if ( v15 != (_QWORD *)(a3 + 16) && v15 )
    {
      sub_186B220(v15);
      v9 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v11;
    *(_DWORD *)(a3 + 12) = v13;
  }
  else
  {
    v11 = *(_DWORD ***)a3;
  }
  v11[v9] = v8;
  *(_DWORD *)(a3 + 8) = v9 + 1;
  return v9;
}

