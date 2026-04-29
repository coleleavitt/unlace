__int64 __fastcall sub_122DF0(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned int *v6; // rsi
  int v7; // edx

  if ( *(_DWORD *)(a1 + 4) <= a3 )
    return 0;
  if ( !a3 )
    return 0;
  if ( (*(_BYTE *)(a1 + 1) & 4) == 0 )
  {
    if ( *(_BYTE *)a1 != 4 )
      goto LABEL_7;
    v6 = *(unsigned int **)(a1 + 8);
    if ( !sub_11E140(v6) )
      goto LABEL_15;
  }
  if ( !sub_118610(a3) )
    return 0;
  if ( *(_BYTE *)a1 == 4 )
  {
    v6 = *(unsigned int **)(a1 + 8);
LABEL_15:
    if ( *v6 == 10 )
    {
      *(_DWORD *)(a1 + 4) = a3;
      v6[17] = a3;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 65LL) &= ~4u;
      *(_BYTE *)(a1 + 1) &= ~4u;
      return 1;
    }
  }
LABEL_7:
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) || !sub_1176D0((unsigned __int8 *)a1) )
    return sub_123000(a1, a2, (unsigned int)a3);
  v7 = *(_DWORD *)(a1 + 4);
  if ( a3 < v7 )
    return sub_122A50(a1, a2, v7 - a3);
  return 0;
}
