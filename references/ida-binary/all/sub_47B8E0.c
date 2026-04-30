int __fastcall sub_47B8E0(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int result; // eax

  if ( byte_8C2ED0 )
  {
    if ( qword_8D1750 )
    {
      if ( under_debugger )
        BUG();
      interr(40001, a3, a4, a5, a1);
      return sub_47B970();
    }
    else if ( byte_8D1554 )
    {
      sigaction(11, &act, nullptr);
      sigaction(7, &stru_8D1600, nullptr);
      return sigaction(4, &stru_8D1560, nullptr);
    }
  }
  return result;
}
