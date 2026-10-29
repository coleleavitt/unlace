char __fastcall sub_C939F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned __int16 v3; // dx
  char result; // al

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v1 = sub_BFB9F0(a1);
          v2 = v1;
          v3 = *(_WORD *)v1 & 0x1FF;
          if ( v3 > 0x4Eu )
            break;
          if ( v3 != 26 )
            goto LABEL_16;
          a1 = *(_QWORD *)(v1 + 16);
        }
        if ( v3 > 0x58u )
          break;
        a1 = *(_QWORD *)(v1 + 16);
        if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
          return 0;
      }
      if ( ((v3 + 394) & 0x1FFu) > 1 )
        break;
      if ( ((*(_WORD *)(v1 + 2) >> 3) & 0x3F) != 0x20 )
        goto LABEL_16;
      a1 = *(_QWORD *)(v1 + 24);
    }
    if ( ((v3 + 384) & 0x1FFu) > 1 )
      break;
    if ( v3 == 128 )
    {
      result = sub_C939F0(*(_QWORD *)(v1 + 32));
      if ( result )
        return result;
      a1 = *(_QWORD *)(v2 + 40);
    }
    else
    {
      result = sub_C939F0(*(_QWORD *)(v1 + 40));
      if ( result )
        return result;
      a1 = *(_QWORD *)(v2 + 48);
    }
  }
  result = 1;
  if ( v3 == 123 )
    return result;
LABEL_16:
  result = 0;
  if ( v3 == 4 )
    return *(_BYTE *)(v2 + 2) >> 3 == 5;
  return result;
}
