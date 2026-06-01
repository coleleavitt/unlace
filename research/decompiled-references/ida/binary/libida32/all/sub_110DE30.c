__int64 __fastcall sub_110DE30(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = sub_10B8FF0(a1, 0xBE9u);
  v2 = 0;
  if ( v1 )
    return v2;
  if ( !sub_10B8FF0(a1, 0x663u)
    && !sub_10B8FF0(a1, 0x662u)
    && !sub_10B8FF0(a1, 0x218u)
    && !sub_10B8FF0(a1, 0x217u)
    && !sub_10B8FF0(a1, 0x665u)
    && !sub_10B8FF0(a1, 0x664u)
    && !sub_10B8FF0(a1, 0x216u)
    && !sub_10B8FF0(a1, 0x660u) )
  {
    LOBYTE(v2) = sub_10B8FF0(a1, 0x65Fu) != 0;
    return v2;
  }
  return 1;
}

