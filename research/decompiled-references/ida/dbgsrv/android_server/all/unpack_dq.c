/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dq
// Address: 0x00000000000BB69C

//----- (00000000000BB69C) ----------------------------------------------------
unsigned __int64 __fastcall unpack_dq(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x11
  unsigned int v3; // w8
  unsigned __int8 *v4; // x9
  unsigned __int16 v5; // w10
  __int16 v6; // t1
  __int16 v7; // t1
  unsigned __int16 v8; // w8
  unsigned __int8 *v9; // x10
  unsigned int v10; // w11
  unsigned __int16 v11; // w12
  __int16 v12; // t1
  __int16 v13; // t1
  unsigned __int16 v14; // w11
  __int16 v16; // t1
  __int16 v17; // t1

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    v3 = 0;
    v4 = (unsigned __int8 *)*a1;
    goto LABEL_12;
  }
  v4 = v2 + 1;
  v3 = *v2;
  if ( (v3 & 0x80) == 0 )
    goto LABEL_12;
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
          goto LABEL_38;
        goto LABEL_39;
      }
    }
    v8 = 0;
    if ( (unsigned __int64)v4 < a2 )
    {
LABEL_38:
      v16 = *v4++;
      v8 |= v16;
    }
LABEL_39:
    v3 = v8 | (v5 << 16);
    goto LABEL_12;
  }
  if ( (unsigned __int64)v4 < a2 )
  {
    v4 = v2 + 2;
    v3 = v2[1] | ((v3 & 0x7F) << 8);
  }
LABEL_12:
  *a1 = (unsigned __int64)v4;
  if ( (unsigned __int64)v4 >= a2 )
  {
    v10 = 0;
    v9 = v4;
  }
  else
  {
    v9 = v4 + 1;
    v10 = *v4;
    if ( (v10 & 0x80) != 0 )
    {
      if ( (~(_BYTE)v10 & 0xC0) == 0 )
      {
        if ( (~(_BYTE)v10 & 0xE0) != 0 )
        {
          if ( (unsigned __int64)v9 >= a2 )
          {
            v11 = 0;
          }
          else
          {
            v9 = v4 + 2;
            v11 = v4[1] | ((v10 & 0x3F) << 8);
            if ( (unsigned __int64)(v4 + 2) < a2 )
              goto LABEL_20;
          }
        }
        else
        {
          if ( (unsigned __int64)v9 >= a2 )
          {
            v11 = 0;
          }
          else
          {
            v9 = v4 + 2;
            v11 = v4[1] << 8;
            if ( (unsigned __int64)(v4 + 2) < a2 )
            {
              v12 = *v9;
              v9 = v4 + 3;
              v11 |= v12;
            }
          }
          if ( (unsigned __int64)v9 < a2 )
          {
LABEL_20:
            v13 = *v9++;
            v14 = v13 << 8;
            if ( (unsigned __int64)v9 < a2 )
              goto LABEL_42;
            goto LABEL_43;
          }
        }
        v14 = 0;
        if ( (unsigned __int64)v9 < a2 )
        {
LABEL_42:
          v17 = *v9++;
          v14 |= v17;
        }
LABEL_43:
        v10 = v14 | (v11 << 16);
        goto LABEL_23;
      }
      if ( (unsigned __int64)v9 < a2 )
      {
        v9 = v4 + 2;
        v10 = v4[1] | ((v10 & 0x7F) << 8);
      }
    }
  }
LABEL_23:
  *a1 = (unsigned __int64)v9;
  return v3 | ((unsigned __int64)v10 << 32);
}
