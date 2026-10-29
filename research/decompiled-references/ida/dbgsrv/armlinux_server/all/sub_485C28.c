/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485C28
// Address: 0x0000000000485C28

//----- (0000000000485C28) ----------------------------------------------------
__int64 __fastcall sub_485C28(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x2
  unsigned int v2; // w3
  __int16 v3; // w1
  unsigned __int8 v5; // w5
  unsigned __int8 v6; // w4
  unsigned __int8 v7; // w6
  unsigned __int8 v8; // w4
  int v9; // w1
  unsigned __int8 v10; // w5
  unsigned __int8 v11; // w4
  unsigned int v12; // w1

  v1 = *a1;
  v2 = 0;
  v3 = **a1;
  if ( **a1 )
  {
    if ( (v3 & 0x80) != 0 )
    {
      if ( (v3 & 0xE0) == 0xC0 )
      {
        v8 = v1[1];
        v2 = -1;
        if ( (unsigned __int8)(v8 + 0x80) <= 0x3Fu )
        {
          v9 = ((v3 & 0x1F) << 6) | v8 & 0x3F;
          if ( v9 > 127 )
          {
            v2 = v9;
            *a1 = v1 + 2;
          }
        }
      }
      else if ( (v3 & 0xF0) == 0xE0 )
      {
        v10 = v1[1];
        v2 = -1;
        if ( (unsigned __int8)(v10 + 0x80) <= 0x3Fu )
        {
          v11 = v1[2];
          if ( (unsigned __int8)(v11 + 0x80) <= 0x3Fu )
          {
            v12 = v11 & 0x3F | (unsigned __int16)(v3 << 12) | ((v10 & 0x3F) << 6);
            if ( v12 > 0x7FF )
            {
              v2 = v12;
              *a1 = v1 + 3;
            }
          }
        }
      }
      else
      {
        v2 = -1;
        if ( (v3 & 0xF8) == 0xF0 )
        {
          v5 = v1[1];
          if ( (unsigned __int8)(v5 + 0x80) <= 0x3Fu )
          {
            v6 = v1[2];
            if ( (unsigned __int8)(v6 + 0x80) <= 0x3Fu )
            {
              v7 = v1[3];
              if ( (unsigned __int8)(v7 + 0x80) <= 0x3Fu )
              {
                v2 = ((v3 & 7) << 18) | ((v5 & 0x3F) << 12) | ((v6 & 0x3F) << 6) | v7 & 0x3F;
                if ( v2 - 0x10000 > 0xFFFFF )
                  return (unsigned int)-1;
                else
                  *a1 = v1 + 4;
              }
            }
          }
        }
      }
    }
    else
    {
      v2 = **a1;
      *a1 = v1 + 1;
    }
  }
  return v2;
}
