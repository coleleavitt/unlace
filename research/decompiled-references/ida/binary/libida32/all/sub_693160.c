__int64 __fastcall sub_693160(char **a1, bool *a2)
{
  char *v4; // rdx
  int v5; // eax
  char *v6; // r9
  __int64 result; // rax
  bool v8; // dl
  int v9; // r8d
  char *v10; // rsi
  int v11; // r8d
  char v12; // al
  int v13; // edx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v4 = *a1;
  v5 = **a1;
  if ( **a1 )
  {
    v6 = v4 + 1;
    if ( v5 >= 0 )
    {
      *a1 = v6;
      result = (unsigned int)(v5 - 1);
      v8 = 0;
      goto LABEL_5;
    }
    v9 = (unsigned __int8)v4[1];
    if ( !(_BYTE)v9 )
    {
      *a1 = v6;
      result = 0xFFFFFFFFLL;
      v8 = 0;
      goto LABEL_5;
    }
    v10 = v4 + 2;
    v11 = v5 & 0x7F | (v9 << 7);
    *a1 = v4 + 2;
    result = (unsigned int)(v11 - 1);
    if ( v11 == 0x7FFF )
    {
      v12 = v4[2];
      v13 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          ++v10;
          if ( v12 >= 0 )
            break;
          v13 = v12 & 0x7F | (v13 << 7);
          v12 = *v10;
          if ( !*v10 )
            goto LABEL_15;
        }
        *a1 = v10;
        result = (v13 << 6) | v12 & 0x3Fu;
        v8 = (unsigned int)result >> 3 == 0;
        goto LABEL_5;
      }
LABEL_15:
      *a1 = v10;
      return 0xFFFFFFFFLL;
    }
    v8 = 0;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    v8 = 0;
  }
LABEL_5:
  if ( a2 )
    *a2 = v8;
  return result;
}

