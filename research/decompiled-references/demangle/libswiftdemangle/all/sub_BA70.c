__int64 __fastcall sub_BA70(__int64 a1, unsigned __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 18);
  if ( v2 == 4 )
  {
    if ( a2 <= 1 )
      return *(_QWORD *)(a1 + 8 * a2);
    return 0;
  }
  if ( v2 != 5 )
  {
    if ( v2 == 3 && !a2 )
      return *(_QWORD *)a1;
    return 0;
  }
  if ( a2 >= *(unsigned int *)(a1 + 8) )
    return 0;
  return *(_QWORD *)(*(_QWORD *)a1 + 8 * a2);
}
