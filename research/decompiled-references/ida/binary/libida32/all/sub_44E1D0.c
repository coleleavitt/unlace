__int64 __fastcall sub_44E1D0(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v4; // eax

  if ( a3 != 65 )
  {
    if ( !under_debugger )
      interr(2671);
    BUG();
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = node2ea(a4);
  sub_45B2A0(a1, v4, 0);
  return a1;
}

