__int64 __fastcall sub_3E6880(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // ebp

  v3 = sub_792C0(a1, a2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( sub_CBAB0(0xBBEu, a1 + 64, a2, a2[4], 0) != 1 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE1Bu, a1 + 64, a3);
    BUG();
  }
  *(_QWORD *)(a1 + 120) = sub_78B40(a2);
  *(_DWORD *)(a1 + 128) = sub_789A0(a2);
  return v3;
}
