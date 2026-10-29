/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_utf8_char
// Address: 0x00000000000B64B0

//----- (00000000000B64B0) ----------------------------------------------------
char __fastcall prev_utf8_char(_DWORD *a1, char **a2, unsigned __int64 a3)
{
  char *v3; // r12
  char *v4; // rbx
  char result; // al
  int v6; // eax
  char *v7; // rbx
  char v8; // al
  int utf8_char; // ecx
  char *v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v10[1] = (char *)__readfsqword(0x28u);
  if ( a1 )
    *a1 = -1;
  v3 = *a2;
  v4 = *a2 - 1;
  if ( (unsigned __int64)v4 < a3 )
    return 0;
  v6 = (unsigned __int8)*v4;
  if ( (v6 & 0x80u) == 0 )
  {
    if ( a1 )
      *a1 = v6;
LABEL_8:
    *a2 = v4;
    return 1;
  }
  if ( (v6 & 0xFFFFFFC0) != 0x80 )
    return 0;
  if ( (v6 & 0xC0) == 0x80 )
  {
    v7 = v3 - 2;
    while ( (unsigned __int64)v7 >= a3 && v3 - v7 <= 4 )
    {
      v8 = *v7-- & 0xC0;
      if ( v8 != (char)0x80 )
      {
        v4 = v7 + 1;
        goto LABEL_17;
      }
    }
    return 0;
  }
LABEL_17:
  v10[0] = v4;
  utf8_char = get_utf8_char(v10);
  result = 0;
  if ( utf8_char != -1 && v10[0] <= v3 )
  {
    if ( a1 )
      *a1 = utf8_char;
    goto LABEL_8;
  }
  return result;
}
