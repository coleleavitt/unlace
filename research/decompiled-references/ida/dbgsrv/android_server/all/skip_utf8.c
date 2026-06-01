/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_utf8
// Address: 0x00000000000B1AA4

//----- (00000000000B1AA4) ----------------------------------------------------
__int64 __fastcall skip_utf8(unsigned __int8 **a1, __int64 a2)
{
  __int64 v2; // x20
  unsigned __int8 *v4; // x8
  int utf8_char; // w0
  unsigned __int8 *v7[2]; // [xsp+0h] [xbp-30h] BYREF

  v2 = a2;
  v7[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a1;
  v7[0] = *a1;
  if ( a2 )
  {
    do
    {
      while ( 1 )
      {
        utf8_char = get_utf8_char(v7);
        if ( utf8_char != -1 )
          break;
        ++v7[0];
        if ( !--v2 )
          goto LABEL_7;
      }
      if ( !utf8_char )
        break;
      --v2;
    }
    while ( v2 );
LABEL_7:
    v4 = v7[0];
  }
  *a1 = v4;
  return v2;
}
