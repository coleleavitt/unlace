__int64 __fastcall sub_375230(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v6; // rdx

  v3 = *(__int64 **)(a1 + 8);
  if ( !v3 )
    return 0;
  v4 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v4 )
  {
    if ( (*(_BYTE *)v4 & 2) != 0 )
      return 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v4[3];
        if ( a2 >= v6 )
          break;
        v4 = (__int64 *)v4[1];
        if ( (*(_BYTE *)v4 & 2) != 0 )
          return 0;
      }
      if ( v6 >= a2 )
        break;
      v4 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v4 & 2) != 0 )
        return 0;
    }
    if ( v3 == v4 )
      return 0;
  }
  sub_35F570(*(_QWORD *)a1, (__int64)(v4 + 4), a3);
  sub_374E80((unsigned __int64 **)(a1 + 8), v4);
  sub_3671E0((_QWORD *)(a1 + 24), a2);
  return 1;
}
