__int64 __fastcall sub_3DABE0(__int64 a1)
{
  if ( (~(_WORD)a1 & 0x600) != 0 )
    return 0;
  else
    return is_stkvar(a1, 15);
}

