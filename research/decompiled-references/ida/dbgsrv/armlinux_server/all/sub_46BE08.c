/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BE08
// Address: 0x000000000046BE08

//----- (000000000046BE08) ----------------------------------------------------
__int64 __fastcall sub_46BE08(char **a1)
{
  char *v1; // x2
  unsigned __int64 v2; // x4
  char *v3; // x1
  __int64 v4; // x21
  size_t v6; // x2
  char *v7; // x3
  char *v9; // [xsp+28h] [xbp-18h] BYREF
  char v10; // [xsp+30h] [xbp-10h] BYREF
  _BYTE v11[7]; // [xsp+31h] [xbp-Fh] BYREF

  v1 = *a1;
  v2 = (unsigned __int64)a1[1];
  v3 = *a1 + 1;
  if ( v2 < (unsigned __int64)v3 )
  {
    v4 = 1;
    v10 = 0;
  }
  else
  {
    *a1 = v3;
    v4 = 1;
    v10 = *v1;
    if ( v10 < 0 )
    {
      v4 = 2;
      v6 = 1;
      if ( (v10 & 0xC0) == 0xC0 )
      {
        v4 = 5;
        v6 = 3;
        if ( (v10 & 0xE0) == 0xE0 )
          v6 = 4;
        else
          v4 = 4;
      }
      v7 = &v3[v6];
      if ( v3 <= &v3[v6] && v2 >= (unsigned __int64)v7 )
      {
        *a1 = v7;
        memcpy(v11, v3, v6);
      }
    }
  }
  v9 = &v10;
  return sub_48E5A8((unsigned __int8 **)&v9, (unsigned __int64)&v11[v4 - 1]);
}
