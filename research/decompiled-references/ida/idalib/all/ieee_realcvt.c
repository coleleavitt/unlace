__int64 __fastcall ieee_realcvt(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // bp

  v3 = a3;
  if ( (a3 & 0x80u) != 0 )
  {
    LOBYTE(v3) = a3 & 0x7F;
    return sub_82FF50(a1, a2, v3);
  }
  if ( !(unsigned __int8)getinf_flag(3, 32) )
    return sub_82FF50(a1, a2, v3);
  return sub_82FF20(a1, a2, v3);
}
