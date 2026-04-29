__int64 __fastcall sub_3ED610(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // ebp

  v3 = sub_7D080(a1, a2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( sub_CF9B0(0xBC4u, a1 + 64, a2, a2[4], 0) != 1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCBBFu, a1 + 64, a3);
    BUG();
  }
  *(_QWORD *)(a1 + 176) = sub_7C900(a2) - 1;
  *(_QWORD *)(a1 + 184) = sub_7C900(a2) - 1;
  *(_DWORD *)(a1 + 192) = sub_7C760(a2);
  return v3;
}
