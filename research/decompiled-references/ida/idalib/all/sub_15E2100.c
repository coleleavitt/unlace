__int64 __fastcall sub_15E2100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // al

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( v4 == 43 || (unsigned int)v4 - 49 <= 2 )
    return 1;
  else
    return sub_15E2060(a2, a3);
}
