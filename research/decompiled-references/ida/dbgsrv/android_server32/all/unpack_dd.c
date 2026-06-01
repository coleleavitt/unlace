/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dd
// Address: 0x0007CAC0

//----- (0007CAC0) --------------------------------------------------------
int __fastcall unpack_dd(unsigned int *a1, unsigned int a2)
{
  unsigned __int8 *v2; // r3
  int v3; // r2
  unsigned __int8 *v4; // r5
  int v5; // r4
  unsigned __int16 v6; // r6

  v2 = (unsigned __int8 *)*a1;
  v3 = 0;
  if ( *a1 < a2 )
  {
    v4 = v2 + 1;
    v3 = *v2;
    if ( (v3 & 0x80) == 0 )
    {
LABEL_3:
      ++v2;
      goto LABEL_16;
    }
    if ( (v3 & 0xC0) != 0xC0 )
    {
      if ( (unsigned int)v4 < a2 )
      {
        v3 = ((v3 << 8) & 0x7FFF) + v2[1];
        v2 += 2;
        goto LABEL_16;
      }
      goto LABEL_3;
    }
    if ( (v3 & 0xE0) == 0xE0 )
    {
      v5 = 0;
      if ( (unsigned int)v4 < a2 )
      {
        v4 = v2 + 2;
        v5 = v2[1] << 8;
      }
      if ( (unsigned int)v4 < a2 )
        v5 |= *v4++;
      v6 = 0;
      if ( (unsigned int)v4 >= a2 )
        goto LABEL_11;
    }
    else
    {
      v6 = 0;
      v5 = 0;
      if ( (unsigned int)v4 < a2 )
      {
        v5 = ((v3 << 8) & 0x3FFF) + v2[1];
        v4 = v2 + 2;
      }
      if ( (unsigned int)v4 >= a2 )
      {
LABEL_11:
        v2 = v4;
        if ( (unsigned int)v4 >= a2 )
        {
LABEL_13:
          v3 = (v5 << 16) + v6;
          goto LABEL_16;
        }
LABEL_12:
        v6 |= *v2++;
        goto LABEL_13;
      }
    }
    v2 = v4 + 1;
    v6 = *v4 << 8;
    if ( (unsigned int)(v4 + 1) >= a2 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_16:
  *a1 = (unsigned int)v2;
  return v3;
}
