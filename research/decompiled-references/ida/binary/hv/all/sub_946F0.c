char __fastcall sub_946F0(char *a1, _BYTE *a2)
{
  char v3; // cl
  char result; // al
  char v5; // dl
  _BYTE *v6; // rax

LABEL_1:
  v3 = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v5 = *a2;
      if ( !*a2 )
        break;
      result = v5 == 63 || v5 == v3;
      if ( !result )
      {
        if ( v5 == 42 )
        {
          result = sub_946F0(a1 + 1);
          if ( !result )
          {
            ++a2;
            goto LABEL_1;
          }
        }
        return result;
      }
      v3 = *++a1;
      v6 = a2 + 1;
      if ( !v3 )
      {
        v5 = a2[1];
        goto LABEL_11;
      }
      ++a2;
    }
  }
  else
  {
    v5 = *a2;
    v6 = a2;
LABEL_11:
    while ( v5 == 42 )
      v5 = *++v6;
    v3 = 0;
  }
  return v5 == v3;
}

