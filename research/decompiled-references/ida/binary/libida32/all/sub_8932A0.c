bool __fastcall sub_8932A0(int a1)
{
  if ( (unsigned __int64)a1 > 0x147 )
  {
    if ( !under_debugger )
      interr(1461);
    BUG();
  }
  return byte_23A0320[5 * a1 + 4] != 0;
}

