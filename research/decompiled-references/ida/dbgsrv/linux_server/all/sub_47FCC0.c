/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FCC0
// Address: 0x000000000047FCC0

//----- (000000000047FCC0) ----------------------------------------------------
__int16 __fastcall sub_47FCC0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int16 result; // ax
  unsigned __int8 *v4; // r8
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax

  v2 = (unsigned __int8 *)*a1;
  result = 0;
  if ( *a1 >= a2 )
    goto LABEL_6;
  result = *v2;
  v4 = v2 + 1;
  if ( (result & 0x80u) != 0 )
  {
    if ( (~*v2 & 0xC0) == 0 )
    {
      if ( (unsigned __int64)v4 >= a2 )
      {
        ++v2;
        result = 0;
      }
      else if ( (unsigned __int64)(v2 + 2) >= a2 )
      {
        v7 = v2[1];
        v2 += 2;
        result = v7 << 8;
      }
      else
      {
        v6 = *(_WORD *)(v2 + 1);
        v2 += 3;
        result = __ROL2__(v6, 8);
      }
      goto LABEL_6;
    }
    if ( (unsigned __int64)v4 < a2 )
    {
      v5 = *(_WORD *)v2;
      v2 += 2;
      result = __ROL2__(v5, 8) & 0x7FFF;
LABEL_6:
      *a1 = (unsigned __int64)v2;
      return result;
    }
  }
  *a1 = (unsigned __int64)v4;
  return result;
}
