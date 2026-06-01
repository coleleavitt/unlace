/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dw
// Address: 0x0007CA70

//----- (0007CA70) --------------------------------------------------------
int __fastcall unpack_dw(unsigned int *a1, unsigned int a2)
{
  unsigned __int8 *v2; // r4
  unsigned __int16 v3; // r2
  unsigned __int8 *v4; // r3

  v2 = (unsigned __int8 *)*a1;
  v3 = 0;
  if ( *a1 >= a2 )
  {
    v4 = (unsigned __int8 *)*a1;
  }
  else
  {
    v4 = v2 + 1;
    v3 = *v2;
    if ( (v3 & 0x80) != 0 )
    {
      if ( (v3 & 0xC0) == 0xC0 )
      {
        v3 = 0;
        if ( (unsigned int)v4 < a2 )
        {
          v4 = v2 + 2;
          v3 = v2[1] << 8;
        }
        if ( (unsigned int)v4 < a2 )
          v3 |= *v4++;
      }
      else if ( (unsigned int)v4 < a2 )
      {
        v3 = ((v3 << 8) & 0x7FFF) + v2[1];
        v4 = v2 + 2;
      }
    }
  }
  *a1 = (unsigned int)v4;
  return v3;
}
