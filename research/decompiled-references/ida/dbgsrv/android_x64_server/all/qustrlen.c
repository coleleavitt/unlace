/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrlen
// Address: 0x00000000000B66F0

//----- (00000000000B66F0) ----------------------------------------------------
__int64 __fastcall qustrlen(char *a1)
{
  __int64 v1; // rbx
  int utf8_char; // eax
  char *v3; // rcx
  char *v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  v5[0] = a1;
  if ( !*a1 )
    return 0;
  v1 = 0;
  do
  {
    utf8_char = get_utf8_char(v5);
    v3 = v5[0];
    if ( utf8_char == -1 )
      v3 = ++v5[0];
    ++v1;
  }
  while ( *v3 );
  return v1;
}
