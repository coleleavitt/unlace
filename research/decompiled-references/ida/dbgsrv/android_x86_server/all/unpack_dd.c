/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dd
// Address: 0x000AD7C0

//----- (000AD7C0) --------------------------------------------------------
int __cdecl unpack_dd(unsigned int *a1, unsigned int a2)
{
  unsigned __int8 *v2; // edi
  int result; // eax
  unsigned __int8 *v4; // edx
  int v5; // edi
  int v6; // eax
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  int v9; // edx
  __int16 v10; // si

  v2 = (unsigned __int8 *)*a1;
  result = 0;
  if ( *a1 < a2 )
  {
    v4 = v2 + 1;
    result = *v2;
    if ( (result & 0x80u) == 0 )
      goto LABEL_21;
    if ( (result & 0xFFFFFFC0) == 0xC0 )
    {
      if ( (result & 0xFFFFFFE0) == 0xE0 )
      {
        if ( (unsigned int)v4 >= a2 )
        {
          v5 = 0;
        }
        else
        {
          v4 = v2 + 2;
          v5 = v2[1] << 8;
          if ( (unsigned int)v4 < a2 )
          {
            v6 = *v4++;
            v5 |= v6;
          }
        }
        if ( (unsigned int)v4 < a2 )
        {
LABEL_9:
          v7 = *v4++;
          v8 = v7 << 8;
          if ( (unsigned int)v4 < a2 )
            goto LABEL_19;
          goto LABEL_20;
        }
      }
      else if ( (unsigned int)v4 >= a2 )
      {
        v5 = 0;
      }
      else
      {
        v4 = v2 + 2;
        v5 = ((result & 0x3F) << 8) | v2[1];
        if ( (unsigned int)v4 < a2 )
          goto LABEL_9;
      }
      v8 = 0;
      if ( (unsigned int)v4 < a2 )
      {
LABEL_19:
        v10 = *v4++;
        v8 |= v10;
      }
LABEL_20:
      result = (v5 << 16) | v8;
      goto LABEL_21;
    }
    if ( (unsigned int)v4 >= a2 )
    {
LABEL_21:
      v2 = v4;
      goto LABEL_22;
    }
    v9 = v2[1];
    v2 += 2;
    result = v9 | ((result & 0x7F) << 8);
  }
LABEL_22:
  *a1 = (unsigned int)v2;
  return result;
}
