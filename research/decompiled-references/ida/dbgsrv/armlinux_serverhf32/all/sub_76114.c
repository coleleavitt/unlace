/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76114
// Address: 0x00076114

//----- (00076114) --------------------------------------------------------
int __fastcall sub_76114(unsigned int *a1, unsigned int a2)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *v3; // r5
  __int16 v4; // r4
  int v5; // r2
  unsigned __int16 v6; // r2
  unsigned __int8 *v7; // r3
  int v8; // r2
  int v10; // r2
  unsigned int v11; // r2

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    *a1 = (unsigned int)v2;
    return 0;
  }
  else
  {
    v3 = v2 + 1;
    v4 = *v2;
    v5 = *v2;
    if ( (v4 & 0x80) != 0 )
    {
      if ( (v4 & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)v3 < a2 )
        {
          v10 = v2[1];
          if ( a2 > (unsigned int)(v2 + 2) )
          {
            v11 = *(unsigned __int16 *)(v2 + 1);
            v7 = v2 + 3;
            v8 = (unsigned __int16)__rev16(v11);
          }
          else
          {
            v7 = v2 + 2;
            v8 = v10 << 8;
          }
        }
        else
        {
          v7 = v2 + 1;
          v8 = 0;
        }
        goto LABEL_6;
      }
      if ( (unsigned int)v3 < a2 )
      {
        v6 = v2[1];
        v7 = v2 + 2;
        v8 = (v6 | (unsigned __int16)(v4 << 8)) & 0x7FFF;
LABEL_6:
        *a1 = (unsigned int)v7;
        return v8;
      }
    }
    *a1 = (unsigned int)v3;
    return v5;
  }
}
