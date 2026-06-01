/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrlen
// Address: 0x0000000100073E70

//----- (0000000100073E70) ----------------------------------------------------
__int64 __fastcall qustrlen(char *a1)
{
  __int64 v1; // rbx
  int utf8_char; // eax
  char *v3; // rcx
  char *v5; // [rsp+0h] [rbp-20h] BYREF

  v5 = a1;
  if ( !*a1 )
    return 0;
  v1 = 0;
  do
  {
    utf8_char = get_utf8_char(&v5);
    v3 = v5;
    if ( utf8_char == -1 )
      v3 = ++v5;
    ++v1;
  }
  while ( *v3 );
  return v1;
}
