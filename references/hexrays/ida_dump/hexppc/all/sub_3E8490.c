__int64 __fastcall sub_3E8490(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // ebp

  v3 = sub_79C00(a1, a2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( sub_CC530(0xBC7u, a1 + 64, a2, a2[4], 0) != 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCBC1u, a1 + 64, a3);
    BUG();
  }
  *(_DWORD *)(a1 + 120) = sub_792E0(a2);
  return v3;
}
