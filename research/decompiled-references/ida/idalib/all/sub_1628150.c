__int64 __fastcall sub_1628150(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v6; // zf

  v4 = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)v4 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) == a4 && !(unsigned int)sub_22462B0(a1, a3, a4) )
  {
    v6 = *(_BYTE *)(a1 + 24) == 0;
    *(_QWORD *)(a1 + 16) = *a2;
    if ( v6 )
      *(_BYTE *)(a1 + 24) = 1;
    return 1;
  }
  return v4;
}
