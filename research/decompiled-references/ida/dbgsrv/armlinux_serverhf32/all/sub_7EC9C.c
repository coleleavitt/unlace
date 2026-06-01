/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EC9C
// Address: 0x0007EC9C

//----- (0007EC9C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_7EC9C(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r5
  int v2; // r4
  const unsigned __int16 **v3; // r0
  int v4; // t1

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( (v2 & 0x80) == 0 )
    {
      v3 = _ctype_b_loc();
      do
      {
        if ( ((*v3)[v2] & 0x2000) == 0 )
          break;
        v4 = *++v1;
        v2 = v4;
      }
      while ( (v4 & 0x80) == 0 );
    }
  }
  return v1;
}
