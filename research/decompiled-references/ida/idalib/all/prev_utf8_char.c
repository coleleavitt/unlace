__int64 __fastcall prev_utf8_char(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  _BYTE *v4; // rbx
  int utf8_char; // eax
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( a1 )
  {
    *a1 = -1;
    v3 = *a2;
    v4 = (_BYTE *)(*a2 - 1);
    if ( (unsigned __int64)v4 >= a3 )
    {
      utf8_char = *(char *)(v3 - 1);
      if ( *(char *)(v3 - 1) < 0 )
        goto LABEL_4;
LABEL_16:
      *a1 = utf8_char;
      goto LABEL_17;
    }
    return 0;
  }
  v3 = *a2;
  v4 = (_BYTE *)(*a2 - 1);
  if ( (unsigned __int64)v4 < a3 )
    return 0;
  LOBYTE(utf8_char) = *(_BYTE *)(v3 - 1);
  if ( (utf8_char & 0x80u) != 0 )
  {
LABEL_4:
    if ( (utf8_char & 0xC0) == 0x80 )
    {
      while ( (unsigned __int64)--v4 >= a3 && (__int64)(v3 - (_QWORD)v4) <= 4 )
      {
        if ( (*v4 & 0xC0) != 0x80 )
        {
          v7[0] = v4;
          utf8_char = get_utf8_char(v7);
          if ( utf8_char == -1 || v3 < v7[0] )
            return 0;
          if ( !a1 )
            goto LABEL_17;
          goto LABEL_16;
        }
      }
    }
    return 0;
  }
LABEL_17:
  *a2 = (unsigned __int64)v4;
  return 1;
}
