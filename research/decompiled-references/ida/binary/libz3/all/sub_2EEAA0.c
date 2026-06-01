__int64 __fastcall sub_2EEAA0(_QWORD *a1, unsigned __int64 *a2, char a3, char a4)
{
  int v4; // eax

  v4 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
    return sub_2EE910(a1, *((unsigned int *)a2 + 24), a3, a4, 0);
  if ( v4 == 2 )
    return sub_2EBAF0((__int64)a1, a2 + 11, a3, a4);
  if ( v4 )
  {
    sub_1872CE0("");
    sub_1873130(114, 489);
  }
  return sub_2EE910(a1, *((unsigned int *)a2 + 24), a3, a4, 1u);
}

