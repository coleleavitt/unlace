__int64 __fastcall sub_5B60E0(__int64 a1)
{
  if ( (a1 & 0x400) != 0 )
    return is_stkvar(a1, 15);
  else
    return 0;
}
