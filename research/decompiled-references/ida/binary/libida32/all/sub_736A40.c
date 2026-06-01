__int64 sub_736A40()
{
  int v0; // esi
  char *i; // rax
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v0 = 0;
  v4 = __readfsqword(0x28u);
  v3 = 0;
  for ( i = qword_2CAA5C0; *i == 120; qword_2CAA5C0 = i )
  {
    v0 |= 1u;
LABEL_4:
    ++i;
  }
  if ( *i == 119 )
  {
    v0 |= 2u;
    goto LABEL_4;
  }
  if ( v0 )
    sub_74FB30(&v3);
  return v3;
}

