/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_valid_utf8
// Address: 0x00000000000B62C0

//----- (00000000000B62C0) ----------------------------------------------------
__int64 __fastcall is_valid_utf8(char *a1)
{
  unsigned int v1; // ebp
  char *v3[4]; // [rsp+8h] [rbp-20h] BYREF

  v3[1] = (char *)__readfsqword(0x28u);
  v3[0] = a1;
  LOBYTE(v1) = 1;
  if ( *a1 )
  {
    while ( (unsigned int)get_utf8_char(v3) != -1 )
    {
      if ( !*v3[0] )
        return v1;
    }
    return 0;
  }
  return v1;
}
// B631B: variable 'v1' is possibly undefined
