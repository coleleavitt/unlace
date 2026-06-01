__int64 __fastcall sub_17A9050(__int64 a1)
{
  int v1; // eax
  int v3; // eax

  v1 = *(unsigned __int8 *)(a1 + 16);
  if ( (unsigned int)(v1 - 25) <= 1 )
    return a1;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
    return 0;
  while ( 1 )
  {
    if ( (_BYTE)v1 == 8 )
      goto LABEL_5;
    if ( (_BYTE)v1 != 9 && (_BYTE)v1 != 27 )
    {
      if ( (_BYTE)v1 == 24 )
        goto LABEL_5;
      if ( (_BYTE)v1 != 40 )
        break;
    }
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !a1 )
LABEL_10:
      BUG();
LABEL_6:
    v1 = *(unsigned __int8 *)(a1 + 16);
  }
  if ( (unsigned __int8)v1 <= 1u )
  {
LABEL_5:
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !a1 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( (_BYTE)v1 != 30 )
  {
    if ( (unsigned int)(v1 - 25) <= 1 )
      return a1;
    return 0;
  }
  do
  {
    a1 = *(_QWORD *)(sub_F5DC20(a1) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_17:
    if ( !a1 )
LABEL_20:
      BUG();
    while ( 1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 16);
      if ( (_BYTE)v3 != 8 )
      {
        if ( (_BYTE)v3 == 9 || (_BYTE)v3 == 27 )
        {
LABEL_24:
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_17;
        }
        if ( (_BYTE)v3 != 24 )
        {
          if ( (_BYTE)v3 == 40 )
            goto LABEL_24;
          if ( (unsigned __int8)v3 > 1u )
            break;
        }
      }
      a1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !a1 )
        goto LABEL_20;
    }
  }
  while ( (_BYTE)v3 == 30 );
  if ( (unsigned int)(v3 - 25) > 1 )
    return 0;
  return a1;
}
