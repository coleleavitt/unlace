/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dd
// Address: 0x000000010006DAEC

//----- (000000010006DAEC) ----------------------------------------------------
__int64 __fastcall unpack_dd(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x10
  unsigned __int8 *v3; // x9
  __int64 v4; // x8
  unsigned __int16 v5; // w10
  __int16 v7; // t1
  __int16 v8; // t1
  unsigned __int16 v9; // w8
  __int16 v10; // t1

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    v4 = 0;
    v3 = (unsigned __int8 *)*a1;
  }
  else
  {
    v3 = v2 + 1;
    v4 = *v2;
    if ( (char)*v2 < 0 )
    {
      if ( (~(_DWORD)v4 & 0xC0) == 0 )
      {
        if ( (~(_DWORD)v4 & 0xE0) != 0 )
        {
          if ( (unsigned __int64)v3 >= a2 )
          {
            v5 = 0;
          }
          else
          {
            v3 = v2 + 2;
            v5 = v2[1] | ((v4 & 0x3F) << 8);
            if ( (unsigned __int64)v3 < a2 )
              goto LABEL_18;
          }
        }
        else
        {
          if ( (unsigned __int64)v3 >= a2 )
          {
            v5 = 0;
          }
          else
          {
            v3 = v2 + 2;
            v5 = v2[1] << 8;
          }
          if ( (unsigned __int64)v3 < a2 )
          {
            v7 = *v3++;
            v5 |= v7;
          }
          if ( (unsigned __int64)v3 < a2 )
          {
LABEL_18:
            v8 = *v3++;
            v9 = v8 << 8;
            if ( (unsigned __int64)v3 < a2 )
              goto LABEL_22;
            goto LABEL_23;
          }
        }
        v9 = 0;
        if ( (unsigned __int64)v3 < a2 )
        {
LABEL_22:
          v10 = *v3++;
          v9 |= v10;
        }
LABEL_23:
        v4 = v9 | (v5 << 16);
        goto LABEL_8;
      }
      if ( (unsigned __int64)v3 < a2 )
      {
        v3 = v2 + 2;
        v4 = v2[1] | ((unsigned __int8)(v4 & 0x7F) << 8);
      }
    }
  }
LABEL_8:
  *a1 = (unsigned __int64)v3;
  return v4;
}
