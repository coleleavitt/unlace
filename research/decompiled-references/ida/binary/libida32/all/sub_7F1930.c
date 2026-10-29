__int64 __fastcall sub_7F1930(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 6);
  if ( (_BYTE)result == 4 )
  {
    qfseek(a2, -2, 1);
    *(_BYTE *)(a1 + 6) = 5;
    goto LABEL_8;
  }
  if ( (_BYTE)result == 5 )
  {
LABEL_8:
    qfseek(a2, -4, 1);
    *(_DWORD *)(a1 + 37) = *(unsigned __int16 *)(a1 + 18);
    goto LABEL_9;
  }
  byte_2CABFC0 = 0;
  if ( (_BYTE)result == 6 )
  {
LABEL_9:
    byte_2CABFC0 = 1;
    *(_BYTE *)(a1 + 6) = 7;
    goto LABEL_10;
  }
  if ( (_BYTE)result != 7 )
  {
    if ( (unsigned __int8)result > 9u )
      return result;
    return qfseek(a2, -2, 1);
  }
LABEL_10:
  *(_WORD *)(a1 + 41) = 32;
  qfseek(a2, -2, 1);
  result = *(unsigned __int8 *)(a1 + 6);
  if ( (unsigned __int8)result <= 9u )
    return qfseek(a2, -2, 1);
  return result;
}

