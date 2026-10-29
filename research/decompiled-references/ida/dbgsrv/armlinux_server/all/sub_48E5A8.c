/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E5A8
// Address: 0x000000000048E5A8

//----- (000000000048E5A8) ----------------------------------------------------
__int64 __fastcall sub_48E5A8(unsigned __int8 **a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // x2
  __int64 result; // x0
  unsigned __int8 *v5; // x3
  int v6; // w3
  unsigned int v7; // w3
  unsigned __int8 *v8; // x5
  int v9; // w0
  unsigned int v10; // w0
  unsigned int v11; // w0

  v2 = *a1;
  result = 0;
  if ( (unsigned __int64)v2 >= a2 )
    goto LABEL_6;
  result = *v2;
  v5 = v2 + 1;
  if ( (result & 0x80) == 0 )
    goto LABEL_12;
  if ( (result & 0xC0) == 0xC0 )
  {
    if ( (result & 0xE0) == 0xE0 )
    {
      if ( (unsigned __int64)v5 < a2 )
      {
        if ( a2 <= (unsigned __int64)(v2 + 2) )
        {
          result = v2[1] << 24;
          v2 += 2;
          goto LABEL_6;
        }
        v7 = __rev16(*(unsigned __int16 *)(v2 + 1)) << 16;
        if ( a2 <= (unsigned __int64)(v2 + 3) )
        {
          result = v7;
          v2 += 3;
          goto LABEL_6;
        }
        v8 = v2 + 4;
        v9 = v2[3];
        if ( a2 > (unsigned __int64)(v2 + 4) )
        {
          v11 = *(unsigned __int16 *)(v2 + 3);
          v2 += 5;
          result = v7 + (unsigned __int16)__rev16(v11);
          goto LABEL_6;
        }
        goto LABEL_19;
      }
    }
    else if ( (unsigned __int64)v5 < a2 )
    {
      v7 = (v2[1] + ((result & 0x3F) << 8)) << 16;
      if ( (unsigned __int64)(v2 + 2) >= a2 )
      {
        result = v7;
        v2 += 2;
        goto LABEL_6;
      }
      v8 = v2 + 3;
      v9 = v2[2];
      if ( a2 > (unsigned __int64)(v2 + 3) )
      {
        v10 = *((unsigned __int16 *)v2 + 1);
        v2 += 4;
        result = v7 + (unsigned __int16)__rev16(v10);
        goto LABEL_6;
      }
LABEL_19:
      result = v7 + (v9 << 8);
      v2 = v8;
      goto LABEL_6;
    }
    ++v2;
    result = 0;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v5 < a2 )
  {
    v6 = v2[1];
    v2 += 2;
    result = v6 + (((_DWORD)result << 8) & 0xFFFF7F00);
LABEL_6:
    *a1 = v2;
    return result;
  }
LABEL_12:
  *a1 = v5;
  return result;
}
