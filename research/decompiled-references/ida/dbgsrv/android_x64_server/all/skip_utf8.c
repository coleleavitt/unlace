/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_utf8
// Address: 0x00000000000B6660

//----- (00000000000B6660) ----------------------------------------------------
__int64 __fastcall skip_utf8(char **a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rbx
  int utf8_char; // eax
  char *v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = (char *)__readfsqword(0x28u);
  v2 = *a1;
  v6[0] = *a1;
  if ( a2 )
  {
    v3 = a2;
    do
    {
      while ( 1 )
      {
        utf8_char = get_utf8_char(v6);
        if ( utf8_char != -1 )
          break;
        ++v6[0];
        if ( !--v3 )
          goto LABEL_8;
      }
      if ( !utf8_char )
        goto LABEL_9;
      --v3;
    }
    while ( v3 );
LABEL_8:
    v3 = 0;
LABEL_9:
    v2 = v6[0];
  }
  else
  {
    v3 = 0;
  }
  *a1 = v2;
  return v3;
}
