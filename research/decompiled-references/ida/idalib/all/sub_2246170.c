__int64 __fastcall sub_2246170(char **a1)
{
  unsigned __int64 v1; // rsi
  char *v3; // rbx
  char *v4; // r9
  char *v5; // r8
  char *v6; // rcx
  char v7; // al
  char v8; // dl
  char *v9; // rcx
  char *i; // r8
  char v11; // al
  char v12; // dl

  v1 = (unsigned __int64)a1[1];
  if ( !v1 )
    return 10;
  v3 = *a1;
  if ( v1 > 1 )
  {
    v4 = v3 + 2;
    v5 = "0x";
    v6 = *a1;
    while ( 1 )
    {
      v7 = *v6;
      if ( (unsigned __int8)(*v6 - 65) < 0x1Au )
        v7 = *v6 + 32;
      v8 = *v5;
      if ( (unsigned __int8)(*v5 - 65) < 0x1Au )
        v8 = *v5 + 32;
      if ( v8 != v7 )
        break;
      ++v6;
      ++v5;
      if ( v4 == v6 )
      {
        *a1 = v4;
        a1[1] = (char *)(v1 - 2);
        return 16;
      }
    }
    v9 = *a1;
    for ( i = "0b"; ; ++i )
    {
      v11 = *v9;
      if ( (unsigned __int8)(*v9 - 65) < 0x1Au )
        v11 = *v9 + 32;
      v12 = *i;
      if ( (unsigned __int8)(*i - 65) < 0x1Au )
        v12 = *i + 32;
      if ( v12 != v11 )
        break;
      if ( v4 == ++v9 )
      {
        *a1 = v4;
        a1[1] = (char *)(v1 - 2);
        return 2;
      }
    }
    if ( *(_WORD *)v3 == 28464 )
    {
      *a1 = v4;
      a1[1] = (char *)(v1 - 2);
      return 8;
    }
    if ( *v3 == 48 && (unsigned __int8)(v3[1] - 48) <= 9u )
    {
      *a1 = v3 + 1;
      a1[1] = (char *)(v1 - 1);
      return 8;
    }
  }
  return 10;
}
