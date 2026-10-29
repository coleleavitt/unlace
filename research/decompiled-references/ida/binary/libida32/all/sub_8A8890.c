unsigned __int64 __fastcall sub_8A8890(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  if ( !a1 )
  {
    if ( !under_debugger )
      interr(2598);
    BUG();
  }
  return sub_8A81B0(a1, a2, a3, a4);
}

