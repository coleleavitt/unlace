__int64 __fastcall sub_893410(int a1)
{
  if ( (unsigned __int64)a1 > 0x147 || *(_WORD *)&byte_23A0320[5 * a1] != 0xFFFF )
  {
    if ( !under_debugger )
      interr(1474);
    BUG();
  }
  return (__int64)*(&off_2B13460 + a1);
}

