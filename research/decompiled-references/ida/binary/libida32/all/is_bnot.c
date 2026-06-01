char __fastcall is_bnot(__int64 a1, int a2, char a3)
{
  if ( (a2 & 0x40000) == 0 )
    return 0;
  if ( (~(_WORD)a2 & 0x600) != 0 )
    return 1;
  return sub_3C0BD0(a1, a3);
}

