void __fastcall sub_1F42D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  if ( *(_QWORD *)(a1 + 744) )
  {
    if ( under_debugger )
      BUG();
    interr(40839, a2, a3, a4, a5);
    sub_1F4320();
  }
  else
  {
    *(_QWORD *)(a1 + 744) = a2;
    if ( a2 )
      *(_QWORD *)(a1 + 752) = sub_3839F0();
  }
}
