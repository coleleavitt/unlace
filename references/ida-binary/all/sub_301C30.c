__int64 __fastcall IDAApplication__::vfunc_26(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  if ( *(_QWORD *)(a1 + 696) )
  {
    if ( under_debugger )
      BUG();
    interr(40193, a2, a3, a4, a5);
    return sub_301C70();
  }
  else
  {
    *(_QWORD *)(a1 + 696) = a2;
    return sub_47B680(a1);
  }
}
