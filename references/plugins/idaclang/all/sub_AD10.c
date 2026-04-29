__int64 __fastcall sub_AD10(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(a1 + 360);
  if ( v1 )
    return v1();
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_AD40();
}
