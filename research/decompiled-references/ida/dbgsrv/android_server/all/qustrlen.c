/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrlen
// Address: 0x00000000000B1B34

//----- (00000000000B1B34) ----------------------------------------------------
__int64 __fastcall qustrlen(unsigned __int8 *a1)
{
  __int64 v1; // x19
  int utf8_char; // w0
  unsigned __int8 *v3; // x8
  unsigned __int8 *v5[2]; // [xsp+0h] [xbp-30h] BYREF

  v5[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
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
