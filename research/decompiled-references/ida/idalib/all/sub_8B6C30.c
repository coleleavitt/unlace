bool __fastcall sub_8B6C30(int a1)
{
  if ( (unsigned __int64)a1 > 0x147 )
  {
    if ( !under_debugger )
      interr(1461);
    BUG();
  }
  return byte_23C4480[5 * a1 + 4] != 0;
}
