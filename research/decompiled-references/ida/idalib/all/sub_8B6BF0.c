bool __fastcall sub_8B6BF0(int a1)
{
  if ( (unsigned __int64)a1 > 0x147 )
  {
    if ( !under_debugger )
      interr(1460);
    BUG();
  }
  return byte_23C4480[5 * a1 + 3] != 0;
}
