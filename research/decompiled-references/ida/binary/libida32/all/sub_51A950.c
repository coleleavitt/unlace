bool __fastcall sub_51A950(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // dl
  bool result; // al
  int v5; // ebp

  v2 = a1 & 0xF;
  v3 = a2 & 0xF;
  if ( (a1 & 0xF) != 8 )
  {
    if ( v2 > 8u )
    {
      if ( v2 == 10 )
        goto LABEL_12;
    }
    else if ( (unsigned __int8)(v2 - 2) <= 5u )
    {
      if ( (a1 & 0x30) != 0x20 )
        goto LABEL_5;
LABEL_12:
      if ( (a2 & 8) == 0 )
      {
        if ( (a2 & 0xE) == 0 )
          goto LABEL_9;
        result = 0;
        if ( (a2 & 0x30) == 0x20 )
          goto LABEL_9;
        return result;
      }
      result = 0;
      if ( v3 == 8 )
        return result;
LABEL_9:
      v5 = sub_54C420(a1);
      return v5 <= (int)sub_54C420(a2);
    }
    result = 0;
    if ( v3 == 8 )
      return result;
    if ( v3 <= 8u )
    {
      if ( (unsigned __int8)(v3 - 2) <= 5u )
        return result;
      goto LABEL_9;
    }
    goto LABEL_21;
  }
LABEL_5:
  if ( v3 == 8 )
    goto LABEL_9;
  if ( v3 > 8u )
  {
    result = 0;
LABEL_21:
    if ( v3 == 10 )
      return result;
    goto LABEL_9;
  }
  if ( (unsigned __int8)(v3 - 2) > 5u )
    goto LABEL_9;
  result = 0;
  if ( (a2 & 0x30) != 0x20 )
    goto LABEL_9;
  return result;
}

