/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428380
// Address: 0x0000000000428380

//----- (0000000000428380) ----------------------------------------------------
bool __fastcall sub_428380(__int64 a1, _BYTE *a2)
{
  _BOOL8 result; // x0
  unsigned int v3; // w2
  int v4; // w1

  result = 0;
  if ( a2 )
  {
    if ( *a2 == 36 )
    {
      v3 = (unsigned __int8)a2[1];
      if ( a2[1] )
      {
        v4 = (unsigned __int8)a2[2];
        result = v4 == 46 || (unsigned __int64)(v4 == 0);
        if ( result && v3 != 102 )
        {
          if ( v3 <= 0x66 )
          {
            if ( v3 < 0x61 )
              return 0;
            if ( v3 > 0x62 && v3 != 100 )
              return 0;
          }
          else if ( v3 != 116 && v3 != 120 && v3 != 112 )
          {
            return 0;
          }
        }
      }
    }
  }
  return result;
}
