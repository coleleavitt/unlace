__int64 __fastcall sub_D610(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  unsigned __int16 v9; // r8
  char v11; // dl
  unsigned int v12; // ecx
  char v13; // al

  v9 = word_2AEA0[a5];
  *(_WORD *)(a2 + 24) = v9;
  if ( v9 == 170 )
    return sub_D370(a1, a2, a3, a4, a5, a6);
  if ( (*(_BYTE *)(a1 + 468) & 8) != 0 )
    return 0;
  sub_C050(a1, a2 + 80, a3, a4, v9);
  v11 = *(_BYTE *)(a2 + 85);
  v12 = *(unsigned __int16 *)(a2 + 26);
  v13 = *(_BYTE *)(a1 + 468);
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = v11;
  *(_WORD *)(a2 + 46) = (char)(((a4 >> 4) & 0x1F) + 32 * ((v13 & 8) == 0));
  return v12;
}
