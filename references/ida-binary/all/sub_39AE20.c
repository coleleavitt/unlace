__int64 __fastcall sub_39AE20(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 i; // rdx

  v2 = *(_QWORD *)(a1 + 696);
  v3 = *(_QWORD *)(a1 + 688);
  v5 = v3 + 16 * v2;
  if ( v3 == v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 688);
  v7 = v3;
  while ( 1 )
  {
    result = *(_BYTE *)(v7 + 10) & 1;
    if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
      break;
    v7 += 16;
    if ( v5 == v7 )
      return result;
  }
  if ( *(_QWORD *)v7 >= a2 )
    return 0;
  v9 = v3 + 16 * (v2 - 1);
  v10 = v2;
  do
  {
    if ( !v10 )
    {
      v12 = -1;
      goto LABEL_10;
    }
    v11 = v9;
    --v10;
    v9 -= 16;
  }
  while ( (*(_BYTE *)(v11 + 10) & 1) == 0 );
  v12 = *(_QWORD *)v11;
LABEL_10:
  if ( a2 >= v12 )
    return 0;
  if ( v2 )
  {
    for ( i = 0; v2 != i; ++i )
    {
      if ( a2 == *(_QWORD *)v6 )
      {
        if ( (*(_BYTE *)(v6 + 10) & 1) != 0 )
          return (unsigned int)i >> 31;
      }
      else if ( a2 < *(_QWORD *)v6 )
      {
        return result;
      }
      v6 += 16;
    }
  }
  return result;
}
