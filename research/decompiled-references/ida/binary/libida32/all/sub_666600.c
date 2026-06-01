__int64 __fastcall sub_666600(__int64 *a1, __int64 a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  char v6; // r12
  unsigned int updated; // r12d
  int v9; // eax

  if ( !a2 )
    return 0;
  v6 = a3;
  if ( a3 > 2
    || !(unsigned __int8)sub_665870(
                           a1,
                           *(_DWORD *)a2,
                           *(_DWORD *)(a2 + 4),
                           (*(unsigned __int8 *)(a2 + 23) != a3)
                         | (unsigned __int8)(2 * ((*(_BYTE *)(a2 + 24) & 8) == 0)),
                           a2,
                           a4,
                           a5,
                           a6) )
  {
    return 0;
  }
  if ( !sub_4EEB90((__int64)(a1 + 194), *(_DWORD *)a2) && !sub_4EE960((__int64)(a1 + 194), *(_DWORD *)a2) )
    sub_7348F0(*a1, *(unsigned __int8 *)(a2 + 23));
  *(_BYTE *)(a2 + 23) = v6;
  updated = update_segm(a2);
  if ( !(_BYTE)updated )
    return 0;
  if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
  {
    v9 = getinf(4);
    setinf(4, (unsigned int)(v9 + 1));
  }
  sub_635350((__int64)a1, -1, -1, 1);
  return updated;
}

