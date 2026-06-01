/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dq
// Address: 0x0000000100072AA4

//----- (0000000100072AA4) ----------------------------------------------------
unsigned __int64 __fastcall unpack_dq(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x10
  unsigned __int8 *v3; // x9
  unsigned int v4; // w8
  unsigned __int16 v5; // w10
  unsigned __int8 *v6; // x10
  __int64 v7; // x11
  unsigned __int16 v8; // w9
  __int16 v10; // t1
  __int16 v11; // t1
  unsigned __int16 v12; // w8
  __int16 v13; // t1
  __int16 v14; // t1
  unsigned __int16 v15; // w11
  __int16 v16; // t1
  __int16 v17; // t1

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    v4 = 0;
    v3 = (unsigned __int8 *)*a1;
    goto LABEL_8;
  }
  v3 = v2 + 1;
  v4 = *v2;
  if ( ((char)*v2 & 0x80000000) == 0 )
    goto LABEL_8;
  if ( (~v4 & 0xC0) == 0 )
  {
    if ( (~v4 & 0xE0) != 0 )
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
          goto LABEL_30;
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
        v10 = *v3++;
        v5 |= v10;
      }
      if ( (unsigned __int64)v3 < a2 )
      {
LABEL_30:
        v11 = *v3++;
        v12 = v11 << 8;
        if ( (unsigned __int64)v3 < a2 )
          goto LABEL_40;
        goto LABEL_41;
      }
    }
    v12 = 0;
    if ( (unsigned __int64)v3 < a2 )
    {
LABEL_40:
      v16 = *v3++;
      v12 |= v16;
    }
LABEL_41:
    v4 = v12 | (v5 << 16);
    goto LABEL_8;
  }
  if ( (unsigned __int64)v3 < a2 )
  {
    v3 = v2 + 2;
    v4 = v2[1] | ((v4 & 0x7F) << 8);
  }
LABEL_8:
  *a1 = (unsigned __int64)v3;
  if ( (unsigned __int64)v3 >= a2 )
  {
    v7 = 0;
    v6 = v3;
  }
  else
  {
    v6 = v3 + 1;
    v7 = *v3;
    if ( (char)*v3 < 0 )
    {
      if ( (~(_DWORD)v7 & 0xC0) == 0 )
      {
        if ( (~(_DWORD)v7 & 0xE0) != 0 )
        {
          if ( (unsigned __int64)v6 >= a2 )
          {
            v8 = 0;
          }
          else
          {
            v6 = v3 + 2;
            v8 = v3[1] | ((v7 & 0x3F) << 8);
            if ( (unsigned __int64)v6 < a2 )
              goto LABEL_36;
          }
        }
        else
        {
          if ( (unsigned __int64)v6 >= a2 )
          {
            v8 = 0;
          }
          else
          {
            v6 = v3 + 2;
            v8 = v3[1] << 8;
          }
          if ( (unsigned __int64)v6 < a2 )
          {
            v13 = *v6++;
            v8 |= v13;
          }
          if ( (unsigned __int64)v6 < a2 )
          {
LABEL_36:
            v14 = *v6++;
            v15 = v14 << 8;
            if ( (unsigned __int64)v6 < a2 )
              goto LABEL_44;
            goto LABEL_45;
          }
        }
        v15 = 0;
        if ( (unsigned __int64)v6 < a2 )
        {
LABEL_44:
          v17 = *v6++;
          v15 |= v17;
        }
LABEL_45:
        v7 = v15 | (v8 << 16);
        goto LABEL_15;
      }
      if ( (unsigned __int64)v6 < a2 )
      {
        v6 = v3 + 2;
        v7 = v3[1] | ((unsigned __int8)(v7 & 0x7F) << 8);
      }
    }
  }
LABEL_15:
  *a1 = (unsigned __int64)v6;
  return v4 | (unsigned __int64)(v7 << 32);
}
