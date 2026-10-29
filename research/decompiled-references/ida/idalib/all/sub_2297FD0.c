void *__fastcall sub_2297FD0(char *s1, size_t n)
{
  char *v2; // r12
  size_t v3; // rbp
  const void **v4; // rbx
  char **v6; // rax

  v2 = s1;
  v3 = n;
  if ( n == 10 )
  {
    if ( *(_QWORD *)s1 != 0x312D746C61626F63LL || *((_WORD *)s1 + 4) != 12336 )
      goto LABEL_3;
    v6 = &off_2BEC060;
    goto LABEL_27;
  }
  if ( n == 7 )
  {
    if ( *(_DWORD *)s1 != 1818458467 || *((_WORD *)s1 + 2) != 28271 || s1[6] != 101 )
      goto LABEL_3;
    v6 = &off_2BEC080;
    goto LABEL_27;
  }
  if ( n != 8 )
  {
    if ( n == 9 )
    {
      if ( *(_QWORD *)s1 == 0x31732D656C707061LL && s1[8] == 48 )
      {
        v6 = &off_2BEC200;
      }
      else
      {
        if ( *(_QWORD *)s1 != 0x31612D656C707061LL || s1[8] != 56 )
          goto LABEL_3;
        v6 = &off_2BEC220;
      }
    }
    else
    {
      if ( n != 12 || *(_QWORD *)s1 != 0x616C2D656C707061LL || *((_DWORD *)s1 + 2) != 1953719668 )
        goto LABEL_3;
      v6 = &off_2BEC240;
    }
    goto LABEL_27;
  }
  switch ( *(_QWORD *)s1 )
  {
    case 0x38612D656C707061LL:
      v6 = &off_2BEC0A0;
      goto LABEL_27;
    case 0x39612D656C707061LL:
      v6 = &off_2BEC0C0;
      goto LABEL_27;
    case 0x34732D656C707061LL:
      v6 = &off_2BEC0E0;
      goto LABEL_27;
    case 0x35732D656C707061LL:
      v6 = &off_2BEC100;
      goto LABEL_27;
    case 0x36732D656C707061LL:
      v6 = &off_2BEC120;
      goto LABEL_27;
    case 0x37732D656C707061LL:
      v6 = &off_2BEC140;
      goto LABEL_27;
    case 0x38732D656C707061LL:
      v6 = &off_2BEC160;
      goto LABEL_27;
    case 0x316D2D656C707061LL:
      v6 = &off_2BEC180;
      goto LABEL_27;
    case 0x326D2D656C707061LL:
      v6 = &off_2BEC1A0;
      goto LABEL_27;
    case 0x336D2D656C707061LL:
      v6 = &off_2BEC1C0;
      goto LABEL_27;
    case 0x39732D656C707061LL:
      v6 = &off_2BEC1E0;
LABEL_27:
      v2 = v6[2];
      v3 = (size_t)v6[3];
      break;
  }
LABEL_3:
  v4 = (const void **)&off_2C76300;
  do
  {
    if ( (const void *)v3 == v4[1] && (!v3 || !memcmp(v2, *v4, v3)) )
      return (void *)v4[2];
    v4 += 6;
  }
  while ( v4 != (const void **)&off_2C77140 );
  return nullptr;
}
