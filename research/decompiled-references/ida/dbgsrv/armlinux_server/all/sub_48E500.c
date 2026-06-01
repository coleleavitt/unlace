/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E500
// Address: 0x000000000048E500

//----- (000000000048E500) ----------------------------------------------------
__int64 __fastcall sub_48E500(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x2
  __int16 v3; // w4
  unsigned __int8 *v4; // x5
  unsigned int v5; // w3
  unsigned __int16 v6; // w3
  unsigned int v8; // w3
  unsigned int v9; // w3

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
    goto LABEL_7;
  v3 = *v2;
  v4 = v2 + 1;
  v5 = *v2;
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0xC0) != 0xC0 )
    {
      if ( (unsigned __int64)v4 < a2 )
      {
        v6 = v2[1];
        *a1 = (unsigned __int64)(v2 + 2);
        return (v6 | (unsigned __int16)(v3 << 8)) & 0x7FFF;
      }
      goto LABEL_12;
    }
    if ( (unsigned __int64)v4 < a2 )
    {
      if ( a2 <= (unsigned __int64)(v2 + 2) )
      {
        v8 = v2[1] << 8;
        v2 += 2;
      }
      else
      {
        v9 = *(unsigned __int16 *)(v2 + 1);
        v2 += 3;
        v8 = (unsigned __int16)__rev16(v9);
      }
      goto LABEL_8;
    }
    ++v2;
LABEL_7:
    v8 = 0;
LABEL_8:
    *a1 = (unsigned __int64)v2;
    return v8;
  }
LABEL_12:
  *a1 = (unsigned __int64)v4;
  return v5;
}
