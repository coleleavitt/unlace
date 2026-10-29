__int64 __fastcall is_ident(_BYTE *a1, const char *a2)
{
  _BYTE *v2; // rbx
  char v4; // r12
  unsigned int utf8_char; // eax
  unsigned int v6; // ebx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v2 = a1;
  if ( !*a1 || (*(_BYTE *)(get_ph(a1, a2) + 8) & 8) == 0 && (unsigned int)str2reg(a1) != -1 )
    return 0;
  v7[0] = a1;
  v4 = 1;
  while ( *v2 )
  {
    utf8_char = get_utf8_char(v7);
    v6 = utf8_char;
    if ( utf8_char == -1
      || v4 && (unsigned __int8)(((unsigned int)sub_8B6A20(utf8_char) >> 16) - 15) <= 2u
      || !(unsigned __int8)is_valid_cp(v6, 6, 0) )
    {
      return 0;
    }
    v2 = (_BYTE *)v7[0];
    v4 = 0;
  }
  return 1;
}
