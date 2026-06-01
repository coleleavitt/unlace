__int64 __fastcall sub_17A8EB0(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 v3; // al

  v1 = *(_BYTE *)(a1 + 16);
  if ( v1 == 39 )
    return a1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 39 )
    return 0;
  while ( 1 )
  {
    if ( v1 == 8 )
      goto LABEL_5;
    if ( v1 != 9 && v1 != 27 )
    {
      if ( v1 == 24 )
        goto LABEL_5;
      if ( v1 != 40 )
        break;
    }
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !a1 )
LABEL_10:
      BUG();
LABEL_6:
    v1 = *(_BYTE *)(a1 + 16);
  }
  if ( v1 <= 1u )
  {
LABEL_5:
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !a1 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( v1 != 30 )
  {
    if ( v1 == 39 )
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
      v3 = *(_BYTE *)(a1 + 16);
      if ( v3 != 8 )
      {
        if ( v3 == 9 || v3 == 27 )
        {
LABEL_24:
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_17;
        }
        if ( v3 != 24 )
        {
          if ( v3 == 40 )
            goto LABEL_24;
          if ( v3 > 1u )
            break;
        }
      }
      a1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !a1 )
        goto LABEL_20;
    }
  }
  while ( v3 == 30 );
  if ( v3 != 39 )
    return 0;
  return a1;
}
