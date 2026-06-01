/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEFE0
// Address: 0x000AEFE0

//----- (000AEFE0) --------------------------------------------------------
char __fastcall sub_AEFE0(char *s, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *i; // esi
  unsigned __int8 v5; // al
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  char result; // al
  _BYTE *v9; // esi
  char *v10; // eax
  char *v11; // edi
  char *v12; // ecx

  for ( i = a2; ; i = (unsigned __int8 *)(HIDWORD(v7) + 1) )
  {
    v5 = *i;
    if ( *i == 47 )
    {
      if ( !i[1] )
        return 1;
    }
    else if ( i <= a2 || v5 )
    {
      if ( v5 == 42 && i[1] == 42 && (i == a2 || *(i - 1) == 47) )
      {
        v6 = i[2];
        if ( !v6 )
          return 1;
        if ( v6 == 47 )
        {
          v9 = i + 3;
          v10 = s + 1;
          if ( *s != 47 )
            v10 = s;
          v11 = v10;
          while ( *v11 != 46 || (a3 & 1) == 0 || *v9 == 46 )
          {
            if ( (unsigned __int8)sub_AEFE0(v11, a3) )
              return 1;
            v12 = strchr(v11, 47);
            result = 0;
            v11 = v12 + 1;
            if ( !v12 )
              return result;
          }
          return 0;
        }
      }
    }
    else if ( *(i - 1) == 47 )
    {
      return 1;
    }
    if ( *s == 46 && (a3 & 1) != 0 && v5 != 46 || !sub_AEE60(i, s, (int)&qword_13ACD8) )
      return 0;
    LODWORD(v7) = strchr(s, 47);
    HIDWORD(v7) = strchr((const char *)i, 47);
    if ( !v7 )
      break;
    result = 0;
    if ( !(_DWORD)v7 || !HIDWORD(v7) )
      return result;
    s = (char *)(v7 + 1);
  }
  return 1;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
