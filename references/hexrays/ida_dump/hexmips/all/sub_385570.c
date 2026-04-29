__int64 __fastcall sub_385570(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi

  if ( (a2 & 0xC0000000) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xC771u, a2, a3);
    goto LABEL_10;
  }
  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    v4 = a2 & 0x1FFFFFFF;
    if ( v4 < v3 )
      return *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v4);
    if ( !under_debugger )
      sub_37E160(0xC772u, v4, a3);
LABEL_10:
    BUG();
  }
  return 0;
}
