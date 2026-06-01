/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dw
// Address: 0x0000000100072920

//----- (0000000100072920) ----------------------------------------------------
__int64 __fastcall unpack_dw(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x10
  unsigned __int8 *v3; // x8
  int v4; // w9
  __int16 v6; // t1

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    LOWORD(v4) = 0;
    v3 = (unsigned __int8 *)*a1;
  }
  else
  {
    v3 = v2 + 1;
    v4 = *v2;
    if ( (char)*v2 < 0 )
    {
      if ( (~v4 & 0xC0) != 0 )
      {
        if ( (unsigned __int64)v3 < a2 )
        {
          v3 = v2 + 2;
          LOWORD(v4) = v2[1] | ((v4 & 0x7F) << 8);
        }
      }
      else if ( (unsigned __int64)v3 >= a2 )
      {
        LOWORD(v4) = 0;
      }
      else
      {
        v3 = v2 + 2;
        LOWORD(v4) = v2[1] << 8;
        if ( (unsigned __int64)(v2 + 2) < a2 )
        {
          v6 = *v3;
          v3 = v2 + 3;
          LOWORD(v4) = v4 | v6;
        }
      }
    }
  }
  *a1 = (unsigned __int64)v3;
  return (unsigned __int16)v4;
}
