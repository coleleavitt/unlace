/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sanitize_file_name
// Address: 0x000AEB60

//----- (000AEB60) --------------------------------------------------------
char __cdecl sanitize_file_name(char *s, int a2)
{
  char *v2; // esi
  char v3; // al
  char *v4; // eax
  char v5; // cl
  unsigned __int8 v6; // dl
  size_t v7; // eax
  char v8; // al
  char *v9; // edi
  int v10; // ecx
  char *v12; // [esp+8h] [ebp-14h]

  while ( 1 )
  {
    v12 = strrchr(s, 47);
    v2 = strrchr(s, 92);
    if ( v12 > v2 )
      v2 = v12;
    if ( !v2 )
      break;
    v3 = v2[1];
    if ( (unsigned __int8)v3 > 0x1Fu )
      goto LABEL_11;
    if ( (unsigned __int8)(v3 - 1) <= 0x1Eu )
    {
      v4 = v2 + 2;
      do
      {
        v5 = *v4;
        v6 = *v4++ - 1;
      }
      while ( v6 < 0x1Fu );
      if ( v5 )
      {
LABEL_11:
        v7 = strlen(v2);
        memmove(s, v2 + 1, v7);
        break;
      }
    }
    *v2 = 0;
  }
  v8 = *s;
  if ( *s )
    goto LABEL_13;
  if ( a2 )
  {
    qtmpnam(s, a2);
    v8 = *s;
    if ( !*s )
      return 1;
LABEL_13:
    v9 = s + 1;
    v10 = 1342177281;
    do
    {
      if ( (unsigned __int8)v8 < 0x20u
        || (unsigned __int8)(v8 - 63) <= 0x1Eu && _bittest(&v10, (unsigned __int8)(v8 - 63))
        || v8 == 42 )
      {
        *(v9 - 1) = 95;
      }
      v8 = *v9++;
    }
    while ( v8 );
    return 1;
  }
  return 0;
}
