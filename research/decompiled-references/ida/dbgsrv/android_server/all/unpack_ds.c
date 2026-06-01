/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_ds
// Address: 0x00000000000BB880

//----- (00000000000BB880) ----------------------------------------------------
_BYTE *__fastcall unpack_ds(const void **a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 *v3; // x11
  _BYTE *v5; // x8
  unsigned int v6; // w10
  unsigned __int16 v7; // w9
  __int16 v8; // t1
  __int16 v9; // t1
  unsigned __int16 v10; // w10
  size_t v11; // x20
  _BYTE *v12; // x22
  _BYTE *v13; // x21
  _BYTE *v14; // x0
  __int16 v16; // t1

  v3 = (unsigned __int8 *)*a1;
  if ( (unsigned __int64)*a1 >= a2 )
  {
    v6 = 0;
    v5 = *a1;
  }
  else
  {
    v5 = v3 + 1;
    v6 = *v3;
    if ( (v6 & 0x80) != 0 )
    {
      if ( (~(_BYTE)v6 & 0xC0) == 0 )
      {
        if ( (~(_BYTE)v6 & 0xE0) != 0 )
        {
          if ( (unsigned __int64)v5 >= a2 )
          {
            v7 = 0;
          }
          else
          {
            v5 = v3 + 2;
            v7 = v3[1] | ((v6 & 0x3F) << 8);
            if ( (unsigned __int64)(v3 + 2) < a2 )
              goto LABEL_9;
          }
        }
        else
        {
          if ( (unsigned __int64)v5 >= a2 )
          {
            v7 = 0;
          }
          else
          {
            v5 = v3 + 2;
            v7 = v3[1] << 8;
            if ( (unsigned __int64)(v3 + 2) < a2 )
            {
              v8 = (unsigned __int8)*v5;
              v5 = v3 + 3;
              v7 |= v8;
            }
          }
          if ( (unsigned __int64)v5 < a2 )
          {
LABEL_9:
            v9 = (unsigned __int8)*v5++;
            v10 = v9 << 8;
            if ( (unsigned __int64)v5 < a2 )
              goto LABEL_29;
            goto LABEL_30;
          }
        }
        v10 = 0;
        if ( (unsigned __int64)v5 < a2 )
        {
LABEL_29:
          v16 = (unsigned __int8)*v5++;
          v10 |= v16;
        }
LABEL_30:
        v6 = v10 | (v7 << 16);
        goto LABEL_12;
      }
      if ( (unsigned __int64)v5 < a2 )
      {
        v5 = v3 + 2;
        v6 = v3[1] | ((v6 & 0x7F) << 8);
      }
    }
  }
LABEL_12:
  v11 = v6;
  v12 = &v5[v6];
  v13 = nullptr;
  *a1 = v5;
  if ( (unsigned __int64)v12 <= a2 && v12 >= v5 )
  {
    if ( (a3 & 1) == 0 || v6 && *v5 )
    {
      v14 = qalloc((void *)(v6 + 1LL));
      if ( !v14 )
        sub_6B464((__int64)"unpack_ds");
      v13 = v14;
      memcpy(v14, *a1, v11);
      v13[v11] = 0;
      *a1 = v12;
    }
    else
    {
      return nullptr;
    }
  }
  return v13;
}
