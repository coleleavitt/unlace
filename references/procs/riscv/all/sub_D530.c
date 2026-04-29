__int64 __fastcall sub_D530(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v8; // ecx
  __int64 result; // rax
  char v10; // dl
  char v11; // al

  v8 = word_2AEB0[a5];
  *(_WORD *)(a2 + 24) = v8;
  if ( (_WORD)v8 == 169 )
    return sub_D370(a1, a2, a3, a4, a5, a6);
  result = 0;
  if ( (*(_BYTE *)(a1 + 468) & 8) == 0 )
  {
    sub_BD30(a1, a2 + 80, a4, v8);
    v10 = *(_BYTE *)(a2 + 85);
    *(_WORD *)(a2 + 86) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
    v11 = *(_BYTE *)(a1 + 468);
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = v10;
    *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 32 * ((v11 & 8) == 0));
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}
