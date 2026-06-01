/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_762E4
// Address: 0x000762E4

//----- (000762E4) --------------------------------------------------------
unsigned int __fastcall sub_762E4(unsigned __int8 **a1, unsigned int a2)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *v3; // r4
  unsigned int v4; // r2
  int v5; // r4
  bool v7; // cf
  int v8; // r2
  unsigned __int8 *v9; // r4
  int v10; // r5
  unsigned int v11; // r1
  int v12; // r2
  unsigned int v13; // r1

  v2 = *a1;
  if ( (unsigned int)*a1 >= a2 )
  {
    *a1 = v2;
    return 0;
  }
  v3 = v2 + 1;
  v4 = *v2;
  if ( (v4 & 0x80) != 0 )
  {
    if ( (v4 & 0xC0) != 0xC0 )
    {
      if ( (unsigned int)v3 < a2 )
      {
        v5 = v2[1];
        v2 += 2;
        v4 = ((v4 << 8) & 0xFFFF7F00) + v5;
LABEL_6:
        *a1 = v2;
        return v4;
      }
      goto LABEL_15;
    }
    if ( (v4 & 0xE0) != 0xE0 )
    {
      if ( (unsigned int)v3 < a2 )
      {
        v7 = (unsigned int)(v2 + 2) >= a2;
        v8 = ((v4 << 8) & 0x3F00) + v2[1];
        if ( (unsigned int)(v2 + 2) >= a2 )
          v2 += 2;
        v4 = v8 << 16;
        if ( v7 )
          goto LABEL_6;
        v9 = v2 + 3;
        v10 = v2[2];
        if ( a2 > (unsigned int)(v2 + 3) )
        {
          v11 = *((unsigned __int16 *)v2 + 1);
          v2 += 4;
          v4 += (unsigned __int16)__rev16(v11);
          goto LABEL_6;
        }
LABEL_23:
        v4 += v10 << 8;
        v2 = v9;
        goto LABEL_6;
      }
LABEL_17:
      ++v2;
      v4 = 0;
      goto LABEL_6;
    }
    if ( (unsigned int)v3 >= a2 )
      goto LABEL_17;
    v12 = v2[1];
    if ( a2 <= (unsigned int)(v2 + 2) )
    {
      v2 += 2;
      v4 = v12 << 24;
      goto LABEL_6;
    }
    v3 = v2 + 3;
    v4 = __rev16(*(unsigned __int16 *)(v2 + 1)) << 16;
    if ( a2 > (unsigned int)(v2 + 3) )
    {
      v9 = v2 + 4;
      v10 = v2[3];
      if ( a2 > (unsigned int)(v2 + 4) )
      {
        v13 = *(unsigned __int16 *)(v2 + 3);
        v2 += 5;
        v4 += (unsigned __int16)__rev16(v13);
        goto LABEL_6;
      }
      goto LABEL_23;
    }
  }
LABEL_15:
  *a1 = v3;
  return v4;
}
