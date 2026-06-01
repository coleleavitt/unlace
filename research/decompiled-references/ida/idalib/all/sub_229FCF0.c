char *__fastcall sub_229FCF0(__int64 a1, char *a2)
{
  const char *v2; // rdx
  char *result; // rax
  char **v4; // rax

  v2 = (const char *)a1;
  result = a2;
  if ( a2 == byte_9 )
  {
    if ( *(_QWORD *)a1 == 0x72612C626D756874LL && *(_BYTE *)(a1 + 8) == 109 )
      v2 = "arm,thumb";
    if ( *(_QWORD *)v2 == 0x6D7568742C6D7261LL )
    {
      v4 = &off_2BEDF40;
      if ( v2[8] == 98 )
        return v4[2];
    }
    return nullptr;
  }
  if ( !a2 )
    return result;
  if ( a2 == &byte_7 )
  {
    if ( *(_DWORD *)a1 == 1635151465 && *(_WORD *)(a1 + 4) == 26988 )
    {
      v4 = (char **)&off_2BEDEE0;
      if ( *(_BYTE *)(a1 + 6) == 100 )
        return v4[2];
    }
    return nullptr;
  }
  if ( a2 != byte_4 )
  {
    if ( a2 == &byte_5 )
    {
      if ( *(_DWORD *)a1 == 1836410996 )
      {
        v4 = (char **)&off_2BEDF10;
        if ( *(_BYTE *)(a1 + 4) == 98 )
          return v4[2];
      }
    }
    else if ( a2 == (_BYTE *)&dword_0 + 3 && *(_WORD *)a1 == 29281 )
    {
      v4 = (char **)&off_2BEDF28;
      if ( *(_BYTE *)(a1 + 2) == 109 )
        return v4[2];
    }
    return nullptr;
  }
  if ( *(_DWORD *)a1 != 1701736302 )
    return nullptr;
  v4 = (char **)&off_2BEDEF8;
  return v4[2];
}
