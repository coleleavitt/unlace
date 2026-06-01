_WORD *__fastcall sub_80F090(_WORD *a1)
{
  _WORD *result; // rax
  unsigned __int16 v2; // dx
  unsigned __int64 v3; // rdx

  result = a1;
  v2 = *a1 & 0x1FF;
  if ( v2 <= 0x4Fu )
    goto LABEL_6;
  while ( v2 <= 0x59u )
  {
LABEL_3:
    v3 = *((_QWORD *)result + 2);
LABEL_4:
    if ( result == (_WORD *)v3 )
      return result;
    while ( 1 )
    {
      result = (_WORD *)v3;
      v2 = *(_WORD *)v3 & 0x1FF;
      if ( v2 > 0x4Fu )
        break;
LABEL_6:
      if ( v2 > 0x3Cu )
      {
        if ( v2 <= 0x3Eu )
          goto LABEL_3;
        return result;
      }
      if ( v2 != 49 )
      {
        if ( v2 == 9 )
          goto LABEL_3;
        return result;
      }
      v3 = *((_QWORD *)result + 2) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*((_QWORD *)result + 2) & 4) == 0 )
        goto LABEL_4;
      v3 = *(_QWORD *)(v3 + 40);
      if ( result == (_WORD *)v3 )
        return result;
    }
  }
  return result;
}

