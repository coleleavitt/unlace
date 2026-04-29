__int64 __fastcall sub_386590(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi

  if ( (a2 & 0xC0000000) != 0x40000000 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC773u, a2, a3);
LABEL_8:
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2 & 0x1FFFFFFF;
  if ( v4 >= *(_QWORD *)(v3 + 440) )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC774u, v4, a3);
    goto LABEL_8;
  }
  return *(_QWORD *)(v3 + 432) + 104 * v4;
}
