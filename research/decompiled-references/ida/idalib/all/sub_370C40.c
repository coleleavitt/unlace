__int64 __fastcall sub_370C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  unsigned int *v7; // rsi

  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      return -1;
    if ( *(_QWORD *)(a1 + 8) == a3 )
      break;
    a1 += 32;
  }
  v7 = (unsigned int *)(a3 + a2);
  if ( v5 == 4 )
    return *v7;
  if ( v5 > 4 )
  {
    if ( v5 != 8 )
      goto LABEL_15;
    return *(_QWORD *)v7;
  }
  else
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
        return *(unsigned __int16 *)v7;
LABEL_15:
      sub_36E0B0(a1, v7, a3, a4, a5);
    }
    return *(unsigned __int8 *)v7;
  }
}
