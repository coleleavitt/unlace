/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dd
// Address: 0x00000000000C0230

//----- (00000000000C0230) ----------------------------------------------------
__int64 __fastcall unpack_dd(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 result; // rax
  unsigned __int8 *v4; // r8
  int v5; // edx
  int v6; // eax
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  int v9; // ecx
  __int16 v10; // cx

  v2 = (unsigned __int8 *)*a1;
  result = 0;
  if ( *a1 >= a2 )
    goto LABEL_14;
  v4 = v2 + 1;
  result = *v2;
  if ( (result & 0x80u) == 0LL )
  {
    *a1 = (unsigned __int64)v4;
    return result;
  }
  if ( (result & 0xFFFFFFC0) != 0xC0 )
  {
    if ( (unsigned __int64)v4 >= a2 )
    {
      *a1 = (unsigned __int64)v4;
      return result;
    }
    v9 = v2[1];
    v2 += 2;
    result = v9 | ((unsigned __int8)(result & 0x7F) << 8);
LABEL_14:
    *a1 = (unsigned __int64)v2;
    return result;
  }
  if ( (result & 0xFFFFFFE0) == 0xE0 )
  {
    if ( (unsigned __int64)v4 >= a2 )
    {
      v5 = 0;
    }
    else
    {
      v4 = v2 + 2;
      v5 = v2[1] << 8;
      if ( (unsigned __int64)v4 < a2 )
      {
        v6 = *v4++;
        v5 |= v6;
      }
    }
    if ( (unsigned __int64)v4 < a2 )
    {
LABEL_10:
      v7 = *v4++;
      v8 = v7 << 8;
      if ( (unsigned __int64)v4 < a2 )
        goto LABEL_22;
      goto LABEL_23;
    }
  }
  else if ( (unsigned __int64)v4 >= a2 )
  {
    v5 = 0;
  }
  else
  {
    v4 = v2 + 2;
    v5 = ((result & 0x3F) << 8) | v2[1];
    if ( (unsigned __int64)v4 < a2 )
      goto LABEL_10;
  }
  v8 = 0;
  if ( (unsigned __int64)v4 < a2 )
  {
LABEL_22:
    v10 = *v4++;
    v8 |= v10;
  }
LABEL_23:
  *a1 = (unsigned __int64)v4;
  return (v5 << 16) | (unsigned int)v8;
}
