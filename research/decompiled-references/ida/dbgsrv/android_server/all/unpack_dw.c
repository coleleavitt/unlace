/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dw
// Address: 0x00000000000BB51C

//----- (00000000000BB51C) ----------------------------------------------------
__int64 __fastcall unpack_dw(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x10
  unsigned int v3; // w8
  unsigned __int8 *v4; // x9
  int v6; // t1

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    v3 = 0;
    v4 = (unsigned __int8 *)*a1;
  }
  else
  {
    v4 = v2 + 1;
    v3 = *v2;
    if ( (v3 & 0x80) != 0 )
    {
      if ( (~(_BYTE)v3 & 0xC0) != 0 )
      {
        if ( (unsigned __int64)v4 < a2 )
        {
          v4 = v2 + 2;
          v3 = v2[1] | ((v3 & 0x7F) << 8);
        }
      }
      else if ( (unsigned __int64)v4 >= a2 )
      {
        v3 = 0;
      }
      else
      {
        v4 = v2 + 2;
        v3 = v2[1] << 8;
        if ( (unsigned __int64)(v2 + 2) < a2 )
        {
          v6 = *v4;
          v4 = v2 + 3;
          v3 |= v6;
        }
      }
    }
  }
  *a1 = (unsigned __int64)v4;
  return v3;
}
