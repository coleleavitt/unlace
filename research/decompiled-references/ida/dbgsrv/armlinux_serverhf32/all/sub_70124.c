/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70124
// Address: 0x00070124

//----- (00070124) --------------------------------------------------------
int __fastcall sub_70124(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r2
  int v2; // r3
  int v4; // r1
  int v5; // r4
  int v6; // r5
  int v7; // r3
  unsigned __int8 *v8; // r2
  int v9; // r4
  int v10; // r1
  int v11; // r1

  v1 = *a1;
  v2 = **a1;
  if ( !**a1 )
    return v2;
  if ( (v2 & 0x80) == 0 )
  {
    *a1 = v1 + 1;
    return v2;
  }
  if ( (v2 & 0xE0) == 0xC0 )
  {
    v11 = v1[1];
    if ( (v11 ^ 0x80u) <= 0x3F )
    {
      v7 = (v2 << 6) & 0x7C0 | v11 & 0x3F;
      if ( v7 > 127 )
      {
        v8 = v1 + 2;
        goto LABEL_23;
      }
    }
    return -1;
  }
  if ( (v2 & 0xF0) == 0xE0 )
  {
    v9 = v1[1];
    if ( (v9 ^ 0x80u) <= 0x3F )
    {
      v10 = v1[2];
      if ( (v10 ^ 0x80u) <= 0x3F )
      {
        v7 = v10 & 0x3F | (unsigned __int16)((_WORD)v2 << 12) | ((_WORD)v9 << 6) & 0xFC0;
        if ( (unsigned int)v7 >= 0x800 )
        {
          v8 = v1 + 3;
          goto LABEL_23;
        }
      }
    }
    return -1;
  }
  if ( (v2 & 0xF8) != 0xF0 )
    return -1;
  v4 = v1[1];
  if ( (v4 ^ 0x80u) > 0x3F )
    return -1;
  v5 = v1[2];
  if ( (v5 ^ 0x80u) > 0x3F )
    return -1;
  v6 = v1[3];
  if ( (v6 ^ 0x80u) > 0x3F )
    return -1;
  v7 = (v2 << 18) & 0x1C0000 | (v4 << 12) & 0x3F000 | v6 & 0x3F | (v5 << 6) & 0xFC0;
  if ( (unsigned int)(v7 - 0x10000) >= 0x100000 )
    return -1;
  v8 = v1 + 4;
LABEL_23:
  *a1 = v8;
  return v7;
}
