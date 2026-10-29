__int64 sub_75C0A0()
{
  unsigned int v0; // ecx
  char *v1; // rax
  char v2; // dl
  bool v3; // cc
  int v4; // edx

  v0 = 0;
  v1 = qword_2CD44C0;
  v2 = *qword_2CD44C0;
  v3 = *qword_2CD44C0 <= 86;
  if ( *qword_2CD44C0 == 86 )
    goto LABEL_7;
  while ( !v3 )
  {
    if ( v2 != 114 )
      return v0;
    v4 = 4;
LABEL_6:
    while ( 1 )
    {
      ++v1;
      v0 |= v4;
      qword_2CD44C0 = v1;
      v2 = *v1;
      v3 = *v1 <= 86;
      if ( *v1 != 86 )
        break;
LABEL_7:
      v4 = 2;
    }
  }
  if ( v2 != 68 )
  {
    if ( v2 != 75 )
      return v0;
    v4 = 1;
    goto LABEL_6;
  }
  if ( v1[1] == 120 )
  {
    ++v1;
    v4 = 8;
    goto LABEL_6;
  }
  return v0;
}
