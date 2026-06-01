_BOOL8 __fastcall sub_D6210(__int64 a1)
{
  if ( !dbg )
    return 0;
  if ( dword_252744 )
  {
    byte_252748 = 1;
    byte_252408 = 0;
    return 1;
  }
  else
  {
    return dword_25274C >= 0 || (int)sub_D5C00(*(_BYTE *)(a1 + 12), 1) > 0;
  }
}

