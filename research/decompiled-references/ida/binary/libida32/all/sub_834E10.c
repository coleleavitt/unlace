unsigned __int8 *__fastcall sub_834E10(unsigned __int8 *a1)
{
  __int64 v1; // rdx
  unsigned __int8 *result; // rax
  __int64 v3; // rsi

  v1 = *a1;
  result = a1;
  if ( (_BYTE)v1 )
  {
    while ( 1 )
    {
      if ( (_BYTE)v1 == 118 )
        return result;
      if ( (unsigned __int8)(v1 - 112) <= 1u )
      {
        result += (unsigned __int16)__ROL2__(*(_WORD *)(result + 1), 8);
        goto LABEL_12;
      }
      if ( (_BYTE)v1 == 120 )
      {
        result += (unsigned __int16)__ROL2__(*(_WORD *)(result + 5), 8);
        goto LABEL_12;
      }
      if ( (unsigned __int8)v1 > 0x60u )
        break;
      if ( (unsigned __int8)v1 > 0x5Du )
        goto LABEL_9;
      if ( (unsigned __int8)v1 > 0x5Au )
        goto LABEL_21;
      if ( (unsigned __int8)v1 > 0x54u )
      {
LABEL_9:
        if ( (unsigned __int8)(result[1] - 15) < 2u )
          result += 2;
      }
LABEL_11:
      result += byte_239F9C0[v1];
LABEL_12:
      v1 = *result;
      if ( !(_BYTE)v1 )
        return nullptr;
    }
    if ( (_BYTE)v1 != 97 )
    {
      if ( (unsigned __int8)(v1 + 100) <= 8u )
      {
        v3 = 341;
        if ( _bittest64(&v3, (unsigned int)(v1 + 100)) )
          result += result[1];
      }
      goto LABEL_11;
    }
LABEL_21:
    if ( (unsigned __int8)(result[3] - 15) < 2u )
      result += 2;
    goto LABEL_11;
  }
  return nullptr;
}

