__int64 __fastcall sub_6854A0(__int64 *a1, __int64 a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  char v6; // r12
  unsigned int updated; // r12d
  int v9; // eax

  if ( !a2 )
    return 0;
  v6 = a3;
  if ( a3 > 2
    || !(unsigned __int8)sub_684690(
                           a1,
                           *(_QWORD *)a2,
                           *(_QWORD *)(a2 + 8),
                           (*(unsigned __int8 *)(a2 + 43) != a3)
                         | (unsigned __int8)(2 * ((*(_BYTE *)(a2 + 44) & 8) == 0)),
                           a2,
                           a4,
                           a5,
                           a6) )
  {
    return 0;
  }
  if ( !sub_5060F0((__int64)(a1 + 203), *(_QWORD *)a2) && !sub_505EB0((__int64)(a1 + 203), *(_QWORD *)a2) )
    sub_754DC0(*a1, *(unsigned __int8 *)(a2 + 43));
  *(_BYTE *)(a2 + 43) = v6;
  updated = update_segm(a2);
  if ( !(_BYTE)updated )
    return 0;
  if ( (*(_BYTE *)(a2 + 44) & 8) == 0 )
  {
    v9 = getinf(4);
    setinf(4, (unsigned int)(v9 + 1));
  }
  sub_652960((__int64)a1, -1, -1, 1);
  return updated;
}
