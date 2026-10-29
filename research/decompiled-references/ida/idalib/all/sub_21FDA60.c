__int64 __fastcall sub_21FDA60(__int64 *a1, char a2)
{
  char v2; // al

  v2 = *((_BYTE *)a1 + 20) & 7;
  if ( !v2 )
    return 0;
  if ( v2 != 1 )
  {
    if ( v2 != 3 )
      return sub_21FD870(a1, a2);
    return 0;
  }
  if ( !sub_21F8C40(a1) )
    return 0;
  sub_21FD230(a1);
  return 1;
}
