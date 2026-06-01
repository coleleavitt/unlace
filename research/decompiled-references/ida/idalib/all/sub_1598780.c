unsigned __int64 __fastcall sub_1598780(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // eax

  v4 = *(_DWORD *)(a1 + 8);
  if ( (_DWORD)a2 == v4 )
    return sub_EEC8C0(a3, a2, a4);
  while ( 1 )
  {
    v5 = *(_QWORD *)a1 + 24LL * (unsigned int)a2;
    v6 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 == 2 )
      break;
    if ( v6 <= 2 )
    {
      if ( !v6 )
        return sub_EEC8C0(*(_QWORD *)(v5 + 8), a2, a4);
    }
    else if ( v6 == 6 )
    {
      if ( (**(_QWORD **)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL) != 0
        && (*(_BYTE *)((**(_QWORD **)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 26 <= 0x1A )
      {
        return sub_EEC8C0(*(_QWORD *)(v5 + 8), a2, a4);
      }
    }
    else if ( v6 == 11 )
    {
      return ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 8) + 4LL) << 32)
           | *(unsigned int *)(*(_QWORD *)(v5 + 8) + 4LL);
    }
    a2 = (unsigned int)(a2 + 1);
    if ( (_DWORD)a2 == v4 )
      return sub_EEC8C0(a3, a2, a4);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 16) + 29LL) & 2) == 0 )
    return sub_EEC8C0(*(_QWORD *)(v5 + 8), a2, a4);
  return 0;
}
