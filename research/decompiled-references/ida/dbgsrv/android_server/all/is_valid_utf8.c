/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_valid_utf8
// Address: 0x00000000000B1710

//----- (00000000000B1710) ----------------------------------------------------
__int64 __fastcall is_valid_utf8(unsigned __int8 *a1)
{
  unsigned __int8 *v2[2]; // [xsp+0h] [xbp-20h] BYREF

  v2[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2[0] = a1;
  if ( !*a1 )
    return 1;
  while ( (unsigned int)get_utf8_char(v2) != -1 )
  {
    if ( !*v2[0] )
      return 1;
  }
  return 0;
}
