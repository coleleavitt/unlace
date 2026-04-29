__int64 __fastcall sub_1FFB0(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFFF )
  {
    if ( !(unsigned __int8)sub_1FBA0(a1, (((a2 >> 10) - 64) & 0x3FF) - 10240) )
      return 0;
    LOWORD(a2) = (a2 & 0x3FF) - 9216;
  }
  return sub_1FBA0(a1, a2);
}
