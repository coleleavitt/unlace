bool __fastcall sub_567380(_BYTE *a1, char *a2, char *a3)
{
  char v3; // r8
  char v4; // bl
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // r9
  char v8; // r9
  char v9; // al
  __int64 v10; // rbp
  char v11; // dl
  char v12; // cl
  char v13; // dl

  v3 = *a2;
  v4 = *a3;
  if ( (unsigned __int8)(*a3 ^ *a2) > 0x3Fu )
    return 0;
  v5 = v3 & 0xF;
  v6 = v4 & 0xF;
  if ( (v3 & 0xF) != (v4 & 0xF) )
  {
    if ( (v6 > 9u) | a1[8] ^ 1
      || v5 > 9u
      || ((v3 & 0xE) != 0 || (v3 & 0x30) == 0) && ((v4 & 0xE) != 0 || (v4 & 0x30) == 0)
      || (v6 == 9) != (v5 == 9) )
    {
      return 0;
    }
    goto LABEL_30;
  }
  v8 = v3 & 0x30;
  v9 = v4 & 0x30;
  if ( v5 != 10 )
  {
    if ( v5 <= 0xAu )
    {
      if ( (v3 & 8) == 0 )
      {
        if ( v5 > 2u && (*a2 & 0x20) == 0 )
          return (v4 & 0x20) == 0;
        return 0;
      }
      if ( v5 != 8 || !a1[8] || v8 && v9 )
        return 0;
LABEL_30:
      v10 = sub_565B80(v3, a2);
      if ( v10 >= 0 )
        return v10 == sub_565B80(v4, a2);
      return 0;
    }
    if ( v5 != 12 || !a1[8] )
      return 0;
    if ( v8 )
    {
      if ( v9 )
        return 0;
      v9 = v3 & 0x30;
    }
    if ( v9 == 48 )
      return 0;
    return a1[9] == (v9 == 32);
  }
  if ( !a1[8] )
    return 0;
  if ( v8 )
  {
    if ( v9 )
      return 0;
    v9 = v3 & 0x30;
  }
  if ( v9 == 48 )
    return 0;
  v11 = a3[1];
  if ( !v11 )
    return 0;
  v12 = a2[1];
  if ( !v12 )
    return 0;
  v13 = v11 & 0xF;
  if ( (v12 & 0xF) == 0xC )
  {
    if ( v13 != 12 )
      return 0;
    return a1[9] == (v9 == 32);
  }
  if ( v13 == 12 )
    return 0;
  return a1[10] == (v9 == 32);
}
