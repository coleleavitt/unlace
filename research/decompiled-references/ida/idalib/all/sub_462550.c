__int64 __fastcall sub_462550(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a3 != 65 )
  {
    if ( !under_debugger )
      interr(2671);
    BUG();
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = node2ea(a4);
  sub_46F6A0(a1, v4, 0);
  return a1;
}
