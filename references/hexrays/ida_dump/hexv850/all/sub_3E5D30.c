__int64 __fastcall sub_3E5D30(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // ebp

  v3 = sub_78BC0(a1, a2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( sub_CB3B0(0xBC6u, a1 + 64, a2, a2[4], 0) != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEDCu, a1 + 64, a3);
    BUG();
  }
  *(_QWORD *)(a1 + 96) = sub_78440(a2);
  *(_QWORD *)(a1 + 104) = sub_78440(a2);
  *(_DWORD *)(a1 + 112) = sub_782A0(a2);
  return v3;
}
