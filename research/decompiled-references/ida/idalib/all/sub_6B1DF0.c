__int64 __fastcall sub_6B1DF0(char **a1, __int64 *a2, char a3)
{
  char *v6; // rcx
  int v7; // esi
  char v8; // al
  __int64 v9; // rdx
  char v11; // dl
  int v12; // r9d

  if ( !a1 )
    return 0;
  v6 = *a1;
  v7 = 0;
  v8 = **a1;
  if ( !v8 )
    goto LABEL_9;
  while ( 1 )
  {
    ++v6;
    if ( v8 >= 0 )
      break;
    v7 = v8 & 0x7F | (v7 << 7);
    v8 = *v6;
    if ( !*v6 )
      goto LABEL_9;
  }
  *a1 = v6;
  v9 = 0;
  if ( !a3 )
    goto LABEL_5;
  v11 = *v6;
  v12 = 0;
  if ( !*v6 )
  {
LABEL_9:
    *a1 = v6;
    return 0;
  }
  while ( 1 )
  {
    ++v6;
    if ( v11 >= 0 )
      break;
    v12 = v11 & 0x7F | (v12 << 7);
    v11 = *v6;
    if ( !*v6 )
      goto LABEL_9;
  }
  *a1 = v6;
  v9 = (v12 << 6) | v11 & 0x3Fu;
LABEL_5:
  if ( a2 )
    *a2 = (v9 << 32) | (v7 << 6) | v8 & 0x3Fu;
  return 1;
}
