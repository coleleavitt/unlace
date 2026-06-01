__int64 __fastcall sub_15DE340(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // al

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( ((v4 + 94) & 0x7Fu) > 0xC && (unsigned int)v4 - 59 > 2 )
    return sub_15DE260(a2, a3);
  else
    return 1;
}
