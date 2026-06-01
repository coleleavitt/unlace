__int64 __fastcall sub_54ED70(char **a1, int *a2, int *a3)
{
  char *v4; // rcx
  int v5; // esi
  char v6; // al
  char *v7; // r10
  char *v8; // r9
  int v9; // esi
  unsigned __int8 v11; // al
  char *v12; // rsi
  char *v13; // rcx
  int v14; // eax
  char v15; // dl
  int v16; // eax

  if ( !a1 )
    return 0;
  v4 = *a1;
  v5 = 0;
  v6 = **a1;
  v7 = *a1 + 4;
  if ( v6 >= 0 )
  {
LABEL_5:
    *a1 = v4;
    return 0;
  }
  while ( 1 )
  {
    v8 = v4 + 1;
    v9 = v6 & 0x7F | v5;
    if ( v4 + 1 == v7 )
      break;
    ++v4;
    v5 = v9 << 7;
    v6 = *v8;
    if ( *v8 >= 0 )
      goto LABEL_5;
  }
  v11 = *v7;
  if ( !*v7 )
  {
    v4 = *a1 + 4;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a3 = (16 * v9) | v11 & 0xF;
    v11 = v4[1];
  }
  v12 = v4 + 2;
  v13 = v4 + 6;
  v14 = (v11 >> 4) & 7;
  do
  {
    v15 = *v12;
    v16 = v14 << 7;
    if ( *v12 >= 0 )
    {
      v4 = v12;
      goto LABEL_5;
    }
    ++v12;
    v14 = v15 & 0x7F | v16;
  }
  while ( v12 != v13 );
  if ( a2 )
    *a2 = v14;
  *a1 = v12;
  return 1;
}

