bool __fastcall sub_893260(int a1)
{
  if ( (unsigned __int64)a1 > 0x147 )
  {
    if ( !under_debugger )
      interr(1460);
    BUG();
  }
  return byte_23A0320[5 * a1 + 3] != 0;
}

