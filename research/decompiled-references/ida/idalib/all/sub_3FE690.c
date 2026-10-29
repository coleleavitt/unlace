__int64 __fastcall sub_3FE690(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 result; // rax

  v1 = sub_505D70(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, *(_QWORD *)(a1 + 24));
  if ( !v1 )
    return 12;
  if ( *(_QWORD *)(a1 + 32) == v1 )
    return 30;
  v2 = *(_BYTE *)(v1 + 42);
  if ( (v2 & 2) == 0 || (result = 14, (v2 & 1) == 0) )
  {
    result = 5;
    if ( (v2 & 1) == 0 )
      return (v2 & 2) == 0 ? 31 : 15;
  }
  return result;
}
