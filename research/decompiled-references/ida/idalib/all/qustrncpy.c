__int64 __fastcall qustrncpy(_BYTE *a1, char *a2, __int64 a3)
{
  _BYTE *v3; // rdx
  _BYTE *i; // rax
  char v5; // cl
  char v7; // dl
  _BYTE *v8; // rbx
  _BYTE *v9; // rax
  char v10; // al
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_23:
    BUG();
  }
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(1538);
    goto LABEL_23;
  }
  v3 = &a1[a3];
  for ( i = a1; ; ++i )
  {
    v5 = *a2++;
    *i = v5;
    if ( !v5 )
      return 1;
    if ( v3 == i + 1 )
      break;
  }
  *i = 0;
  if ( a1 >= i )
    return 0;
  v7 = *(i - 1);
  if ( v7 >= 0 )
    return 0;
  v8 = i - 1;
  v9 = i - 3;
  if ( a1 < v9 )
    a1 = v9;
  if ( (v7 & 0xC0) == 0x80 )
  {
    do
    {
      if ( a1 >= v8 )
        break;
      v10 = *--v8;
    }
    while ( (v10 & 0xC0) == 0x80 );
  }
  v11[0] = v8;
  if ( (unsigned int)get_utf8_char(v11) != -1 )
    return 0;
  *v8 = 0;
  return 0;
}
