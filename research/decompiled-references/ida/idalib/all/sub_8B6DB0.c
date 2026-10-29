__int64 __fastcall sub_8B6DB0(int a1)
{
  if ( (unsigned __int64)a1 > 0x147 || *(_WORD *)&byte_23C4480[5 * a1] != 0xFFFF )
  {
    if ( !under_debugger )
      interr(1474);
    BUG();
  }
  return (__int64)*(&off_2B3D400 + a1);
}
