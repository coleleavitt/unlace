char __fastcall sub_8C0FA0(__int64 a1)
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
          v1 = sub_80F230(a1);
          v2 = v1;
          v3 = *(_WORD *)v1 & 0x1FF;
          if ( v3 > 0x4Fu )
            break;
          if ( v3 != 27 )
            goto LABEL_12;
          a1 = *(_QWORD *)(v1 + 16);
        }
        if ( v3 > 0x59u )
          break;
        a1 = *(_QWORD *)(v1 + 16);
        if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
          return 0;
      }
      if ( ((v3 + 393) & 0x1FFu) <= 1 )
        break;
      if ( v3 == 129 )
      {
        result = sub_8C0FA0(*(_QWORD *)(v1 + 32));
        if ( result )
          return result;
        a1 = *(_QWORD *)(v2 + 40);
      }
      else
      {
LABEL_12:
        if ( v3 != 130 )
          goto LABEL_13;
        result = sub_8C0FA0(*(_QWORD *)(v1 + 40));
        if ( result )
          return result;
        a1 = *(_QWORD *)(v2 + 48);
      }
    }
    if ( ((*(_WORD *)(v1 + 2) >> 3) & 0x3F) != 0x20 )
      break;
    a1 = *(_QWORD *)(v1 + 24);
  }
LABEL_13:
  result = 1;
  if ( v3 != 124 )
  {
    result = 0;
    if ( v3 == 4 )
      return *(_BYTE *)(v2 + 2) >> 3 == 5;
  }
  return result;
}

