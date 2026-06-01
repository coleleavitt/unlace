unsigned __int64 __fastcall sub_31280(__int64 a1)
{
  __int64 i; // rbp
  unsigned __int16 v2; // ax
  unsigned __int64 result; // rax
  char v4; // cl

  if ( !a1 )
    return 0;
  i = a1;
  v2 = *(_WORD *)(a1 + 16);
  if ( v2 > 0x5Fu )
    goto LABEL_17;
LABEL_3:
  if ( v2 > 0x2Eu )
  {
    if ( ((1LL << ((unsigned __int8)v2 - 47)) & 0x1000004100803LL) != 0 )
      goto LABEL_21;
    if ( v2 != 80 )
    {
      if ( v2 == 68 && (unsigned __int64)sub_BFF0(i) > 1 && (unsigned __int64)sub_BFF0(i) > 1 )
      {
        for ( i = *((_QWORD *)sub_C020((_BYTE *)i) + 1); i; i = *(_QWORD *)sub_C020((_BYTE *)i) )
        {
          v2 = *(_WORD *)(i + 16);
          if ( v2 <= 0x5Fu )
            goto LABEL_3;
LABEL_17:
          if ( v2 <= 0xF6u )
          {
            if ( v2 > 0xC0u )
            {
              result = (0x24C0004001C801uLL >> ((unsigned __int8)v2 + 63)) & 1;
              if ( (_DWORD)result )
                goto LABEL_21;
              return result;
            }
            v4 = v2 - 111;
            if ( (unsigned __int16)(v2 - 111) > 0x3Au )
              return 0;
            result = (0x700400080000101uLL >> v4) & 1;
            if ( ((0x700400080000101uLL >> v4) & 1) == 0 )
              return result;
            goto LABEL_21;
          }
          if ( v2 != 330 || !sub_BFF0(i) )
            return 0;
LABEL_22:
          if ( !sub_BFF0(i) )
            return 0;
        }
      }
      return 0;
    }
    return 1;
  }
  if ( v2 <= 0x1Eu )
  {
    if ( ((1LL << v2) & 0x7F000) == 0 )
    {
      if ( ((1LL << v2) & 0x44400001) == 0 )
        return 0;
LABEL_21:
      if ( sub_BFF0(i) )
        goto LABEL_22;
      return 0;
    }
    return 1;
  }
  return 0;
}
