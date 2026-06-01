__int64 __fastcall sub_CC99A0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-10h] BYREF

  v5 = *(unsigned __int16 *)a2;
  LOWORD(v5) = v5 & 0x1FF;
  if ( (_WORD)v5 == 242 )
    goto LABEL_33;
  if ( (unsigned __int16)v5 <= 0xF2u )
  {
    if ( (_WORD)v5 == 132 )
      return sub_CCB5D0();
    if ( (unsigned __int16)v5 > 0x84u )
    {
      if ( (_WORD)v5 == 139 )
        return sub_CC42A0(a1, a2);
      if ( (unsigned __int16)v5 <= 0x8Bu )
      {
        if ( (_WORD)v5 == 133 )
          return sub_CCAF10();
      }
      else
      {
        result = 1;
        if ( (_WORD)v5 == 238 )
          return result;
        if ( (_WORD)v5 == 241 )
          return sub_CCA4D0();
      }
    }
    else
    {
      if ( (_WORD)v5 == 2 )
        return sub_CC99A0(a1);
      if ( (unsigned __int16)v5 <= 2u )
      {
        if ( (_WORD)v5 == 1 )
          return sub_CCA800();
      }
      else
      {
        if ( (_WORD)v5 == 130 )
          return sub_CCB600();
        if ( (_WORD)v5 == 131 )
          return sub_CC9BC0();
      }
    }
    goto LABEL_38;
  }
  if ( (_WORD)v5 == 249 )
    return sub_CCA340();
  if ( (unsigned __int16)v5 <= 0xF9u )
  {
    if ( (_WORD)v5 == 244 )
      return sub_CCAA40();
    if ( (unsigned __int16)v5 < 0xF4u )
      return sub_CCAC40();
    if ( (_WORD)v5 == 245 )
      return sub_CC6D50(a1, a2, 1);
    if ( (_WORD)v5 == 248 )
      return sub_CB1190(a1);
    goto LABEL_38;
  }
  if ( (_WORD)v5 == 254 )
    return sub_CB1130(a1);
  if ( (unsigned __int16)v5 <= 0xFEu )
  {
    if ( (_WORD)v5 == 251 )
      return sub_CCB700();
    if ( (_WORD)v5 == 252 )
      return sub_CC9780(a1, (_QWORD *)a2);
    goto LABEL_38;
  }
  if ( (unsigned __int16)v5 <= 0x100u )
  {
LABEL_33:
    v7 = a2 | 4;
    return sub_CAAFE0(a1, (__int64 *)&v7);
  }
LABEL_38:
  result = 0;
  LOWORD(v5) = (v5 + 509) & 0x1FF;
  if ( (unsigned __int16)v5 <= 0x7Eu )
    return sub_CC7500(a1, a2, v5, a4, a5);
  return result;
}
