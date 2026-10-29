/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dd
// Address: 0x00000000000BB5A8

//----- (00000000000BB5A8) ----------------------------------------------------
__int64 __fastcall unpack_dd(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x11
  unsigned int v3; // w8
  unsigned __int8 *v4; // x9
  unsigned __int16 v5; // w10
  __int16 v6; // t1
  __int16 v7; // t1
  unsigned __int16 v8; // w8
  __int16 v10; // t1

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
      if ( (~(_BYTE)v3 & 0xC0) == 0 )
      {
        if ( (~(_BYTE)v3 & 0xE0) != 0 )
        {
          if ( (unsigned __int64)v4 >= a2 )
          {
            v5 = 0;
          }
          else
          {
            v4 = v2 + 2;
            v5 = v2[1] | ((v3 & 0x3F) << 8);
            if ( (unsigned __int64)(v2 + 2) < a2 )
              goto LABEL_9;
          }
        }
        else
        {
          if ( (unsigned __int64)v4 >= a2 )
          {
            v5 = 0;
          }
          else
          {
            v4 = v2 + 2;
            v5 = v2[1] << 8;
            if ( (unsigned __int64)(v2 + 2) < a2 )
            {
              v6 = *v4;
              v4 = v2 + 3;
              v5 |= v6;
            }
          }
          if ( (unsigned __int64)v4 < a2 )
          {
LABEL_9:
            v7 = *v4++;
            v8 = v7 << 8;
            if ( (unsigned __int64)v4 < a2 )
              goto LABEL_21;
            goto LABEL_22;
          }
        }
        v8 = 0;
        if ( (unsigned __int64)v4 < a2 )
        {
LABEL_21:
          v10 = *v4++;
          v8 |= v10;
        }
LABEL_22:
        v3 = v8 | (v5 << 16);
        goto LABEL_12;
      }
      if ( (unsigned __int64)v4 < a2 )
      {
        v4 = v2 + 2;
        v3 = v2[1] | ((v3 & 0x7F) << 8);
      }
    }
  }
LABEL_12:
  *a1 = (unsigned __int64)v4;
  return v3;
}
