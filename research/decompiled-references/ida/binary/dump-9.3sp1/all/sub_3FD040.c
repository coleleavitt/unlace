__int64 __fastcall sub_3FD040(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 144) )
    return sub_415820(a1, a2);
  v4 = *(_DWORD *)(a2 + 16) & 0x70000;
  switch ( v4 )
  {
    case 0x40000:
      sub_3FCA50(a1, a2, a3);
      return 0;
    case 0x10000:
      return sub_3EF4A0(*(_QWORD *)(*(_QWORD *)(v3 + 784) + 56LL), a2);
    case 0x20000:
      return sub_3EF420(*(_QWORD *)(*(_QWORD *)(v3 + 784) + 56LL), a2);
    default:
      if ( !under_debugger )
        sub_383060(0xCB1Bu, a3);
      BUG();
  }
}
