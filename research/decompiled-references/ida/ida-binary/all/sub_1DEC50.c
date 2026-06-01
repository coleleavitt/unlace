void __fastcall __noreturn dbgreg_place_t__::vfunc_5(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !under_debugger )
    interr(41568, a3, a4, a5, a1);
  BUG();
}
