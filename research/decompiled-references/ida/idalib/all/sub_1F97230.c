__int64 __fastcall sub_1F97230(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // cl

  if ( !sub_B8E990(a3) )
  {
    if ( !*(_BYTE *)(a1 + 157) )
      return sub_1F96FE0(a1, a3);
    v4 = *(_BYTE *)(a3 + 8) & 0x7F;
    if ( v4 > 0x12u )
    {
      if ( ((v4 + 94) & 0x7Fu) > 5 )
        return sub_1F96FE0(a1, a3);
    }
    else if ( ((1LL << v4) & 0x40182) == 0 )
    {
      return sub_1F96FE0(a1, a3);
    }
  }
  return 0;
}
