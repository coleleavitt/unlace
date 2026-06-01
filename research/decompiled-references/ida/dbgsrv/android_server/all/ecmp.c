/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ecmp
// Address: 0x00000000000B38F0

//----- (00000000000B38F0) ----------------------------------------------------
__int64 __fastcall ecmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v2; // w15
  unsigned int v3; // w9
  unsigned int v4; // w12
  unsigned int v5; // w11
  unsigned int v6; // w10
  unsigned __int16 v7; // w18
  __int64 result; // x0
  unsigned __int16 v9; // [xsp+12h] [xbp-3Eh]
  unsigned __int16 v10; // [xsp+14h] [xbp-3Ch]
  unsigned __int16 v11; // [xsp+16h] [xbp-3Ah]
  unsigned __int16 v12; // [xsp+18h] [xbp-38h]
  unsigned __int16 v13; // [xsp+2Ah] [xbp-26h]
  unsigned __int16 v14; // [xsp+2Ch] [xbp-24h]
  unsigned __int16 v15; // [xsp+2Eh] [xbp-22h]
  unsigned __int16 v16; // [xsp+30h] [xbp-20h]
  unsigned __int16 v17; // [xsp+32h] [xbp-1Eh]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int16)a1[7] >> 15;
  v3 = a1[7] & 0x7FFF;
  v4 = a1[6];
  v5 = a1[5];
  v13 = a1[4];
  v14 = a1[3];
  v15 = a1[2];
  v16 = a1[1];
  v17 = *a1;
  v6 = a2[7] & 0x7FFF;
  v9 = a2[4];
  v10 = a2[3];
  v11 = a2[2];
  v12 = a2[1];
  v7 = *a2;
  if ( v2 )
    result = 0xFFFFFFFFLL;
  else
    result = 1;
  if ( v2 == (__int16)a2[7] >> 15 )
  {
    if ( v3 == v6 )
    {
      if ( v4 == a2[6] )
      {
        if ( v5 == a2[5] )
        {
          v3 = v13;
          v6 = v9;
          if ( v13 == v9 )
          {
            v3 = v14;
            v6 = v10;
            if ( v14 == v10 )
            {
              v3 = v15;
              v6 = v11;
              if ( v15 == v11 )
              {
                v3 = v16;
                v6 = v12;
                if ( v16 == v12 )
                {
                  v3 = v17;
                  v6 = v7;
                  if ( v17 == v7 )
                    return 0;
                }
              }
            }
          }
        }
        else
        {
          v3 = v5;
          v6 = a2[5];
        }
      }
      else
      {
        v3 = v4;
        v6 = a2[6];
      }
    }
    if ( v3 > v6 )
      return (unsigned int)result;
    else
      return (unsigned int)-(int)result;
  }
  return result;
}
