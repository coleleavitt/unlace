__int64 __fastcall sub_6A9AB0(__int64 a1, int a2, _BYTE *a3, unsigned __int8 a4)
{
  unsigned int v6; // eax

  if ( !a3 )
    return 1;
  v6 = sub_3B90A0(*(_QWORD **)(*(_QWORD *)a1 + 1480LL), a2);
  if ( *a3 )
    return netnode_supset(v6, a4, a3, 0, 83);
  netnode_supdel(v6, a4, 83);
  return 1;
}

