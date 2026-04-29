unsigned __int64 __fastcall sub_3F8D80(__int64 a1, unsigned __int8 a2, int a3, unsigned __int8 a4, int a5)
{
  char v6; // dl
  unsigned int v7; // r9d
  char v9; // dl
  char v10; // dl

  v6 = *(_BYTE *)(a1 + 57);
  v7 = 63;
  if ( v6 >= 0 )
    return sub_3F8CC0(a1, a2, a4, a3, a5, v7);
  v9 = v6 & 0x7F;
  if ( (unsigned __int8)(v9 - 19) > 2u )
  {
    v7 = 64;
    if ( (unsigned __int8)(v9 - 9) > 3u )
      v7 = 63;
    return sub_3F8CC0(a1, a2, a4, a3, a5, v7);
  }
  v10 = *(_BYTE *)(a1 + 96);
  v7 = 67;
  if ( (unsigned __int8)(v10 - 19) <= 2u )
    return sub_3F8CC0(a1, a2, a4, a3, a5, v7);
  return sub_3F8CC0(a1, a2, a4, a3, a5, (unsigned int)((unsigned __int8)(v10 - 9) < 4u) + 65);
}
