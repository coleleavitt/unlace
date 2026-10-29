/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_utf8
// Address: 0x0000000100073DE0

//----- (0000000100073DE0) ----------------------------------------------------
__int64 __fastcall skip_utf8(char **a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rbx
  int utf8_char; // eax
  char *v6; // [rsp+8h] [rbp-28h] BYREF

  v2 = *a1;
  v6 = *a1;
  if ( a2 )
  {
    v3 = a2;
    do
    {
      utf8_char = get_utf8_char(&v6);
      if ( utf8_char == -1 )
      {
        ++v6;
      }
      else if ( !utf8_char )
      {
        goto LABEL_9;
      }
      --v3;
    }
    while ( v3 );
    v3 = 0;
LABEL_9:
    v2 = v6;
  }
  else
  {
    v3 = 0;
  }
  *a1 = v2;
  return v3;
}
