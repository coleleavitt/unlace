/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dd
// Address: 0x000000010007B300

//----- (000000010007B300) ----------------------------------------------------
__int64 __fastcall unpack_dd(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // r8
  __int64 result; // rax
  unsigned __int8 *v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int16 v10; // si

  v2 = (unsigned __int8 *)*a1;
  result = 0;
  if ( *a1 < a2 )
  {
    v4 = v2 + 1;
    result = *v2;
    if ( (result & 0x80u) == 0LL )
      goto LABEL_22;
    if ( (~(_BYTE)result & 0xC0) == 0 )
    {
      if ( (~(_BYTE)result & 0xE0) != 0 )
      {
        if ( (unsigned __int64)v4 >= a2 )
        {
          v5 = 0;
        }
        else
        {
          v5 = ((result & 0x3F) << 8) | v2[1];
          v4 = v2 + 2;
          if ( (unsigned __int64)(v2 + 2) < a2 )
            goto LABEL_16;
        }
      }
      else
      {
        if ( (unsigned __int64)v4 >= a2 )
        {
          v5 = 0;
        }
        else
        {
          v5 = v2[1] << 8;
          v4 = v2 + 2;
        }
        if ( (unsigned __int64)v4 < a2 )
        {
          v7 = *v4++;
          v5 |= v7;
        }
        if ( (unsigned __int64)v4 < a2 )
        {
LABEL_16:
          v8 = *v4++;
          v9 = v8 << 8;
          if ( (unsigned __int64)v4 < a2 )
            goto LABEL_20;
          goto LABEL_21;
        }
      }
      v9 = 0;
      if ( (unsigned __int64)v4 < a2 )
      {
LABEL_20:
        v10 = *v4++;
        v9 |= v10;
      }
LABEL_21:
      result = (v5 << 16) | (unsigned int)v9;
      goto LABEL_22;
    }
    if ( (unsigned __int64)v4 >= a2 )
    {
LABEL_22:
      v2 = v4;
      goto LABEL_23;
    }
    v6 = v2[1];
    v2 += 2;
    result = v6 | ((unsigned __int8)(result & 0x7F) << 8);
  }
LABEL_23:
  *a1 = (unsigned __int64)v2;
  return result;
}
