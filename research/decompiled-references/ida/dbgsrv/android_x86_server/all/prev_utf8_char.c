/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_utf8_char
// Address: 0x000A2A80

//----- (000A2A80) --------------------------------------------------------
char __cdecl prev_utf8_char(int *a1, char **a2, unsigned int a3)
{
  char *v3; // edi
  char *v4; // esi
  char result; // al
  int v6; // ecx
  char *v7; // esi
  char v8; // cl
  int utf8_char; // ecx
  char *v10[6]; // [esp+4h] [ebp-18h] BYREF

  v10[1] = (char *)__readgsdword(0x14u);
  if ( a1 )
    *a1 = -1;
  v3 = *a2;
  v4 = *a2 - 1;
  if ( (unsigned int)v4 < a3 )
    return 0;
  v6 = (unsigned __int8)*v4;
  if ( (v6 & 0x80u) == 0 )
  {
    if ( a1 )
      *a1 = v6;
    *a2 = v4;
    return 1;
  }
  if ( (v6 & 0xFFFFFFC0) != 0x80 )
    return 0;
  if ( (v6 & 0xC0) == 0x80 )
  {
    v7 = v3 - 2;
    while ( (unsigned int)v7 >= a3 && v3 - v7 <= 4 )
    {
      v8 = *v7-- & 0xC0;
      if ( v8 != (char)0x80 )
      {
        v4 = v7 + 1;
        goto LABEL_18;
      }
    }
    return 0;
  }
LABEL_18:
  v10[0] = v4;
  utf8_char = get_utf8_char(v10);
  result = 0;
  if ( utf8_char != -1 && v10[0] <= v3 )
  {
    if ( a1 )
      *a1 = utf8_char;
    *a2 = v4;
    return 1;
  }
  return result;
}
// A2AEE: mask 0xFFFFFFC0 is shortened because ecx.4 <= 0xFF
