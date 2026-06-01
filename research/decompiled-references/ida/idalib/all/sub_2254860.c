bool __fastcall sub_2254860(unsigned int a1)
{
  bool result; // al
  char *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  char *v5; // rsi

  result = 1;
  v2 = (char *)&unk_26F9780;
  v3 = 711;
  if ( a1 != 173 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      v5 = &v2[8 * (v3 >> 1)];
      if ( a1 > *((_DWORD *)v5 + 1) )
      {
        v2 = v5 + 8;
        v4 = v3 - v4 - 1;
        if ( v4 <= 0 )
          goto LABEL_7;
      }
      else if ( !v4 )
      {
LABEL_7:
        result = 0;
        if ( v2 != (char *)&unk_26FADB8 )
          return a1 >= *(_DWORD *)v2;
        return result;
      }
      v3 = v4;
    }
  }
  return result;
}
