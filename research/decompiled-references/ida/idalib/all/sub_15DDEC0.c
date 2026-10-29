__int64 __fastcall sub_15DDEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // al

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( (unsigned int)v4 - 34 <= 5 || v4 == 18 )
    return 1;
  else
    return sub_15DDD90(a2, a3);
}
