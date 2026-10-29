/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B7F0
// Address: 0x000000014005B7F0

//----- (000000014005B7F0) ----------------------------------------------------
__int64 __fastcall sub_14005B7F0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // r8
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r11
  unsigned __int8 *v5; // r10
  unsigned __int16 v6; // r9

  v2 = (unsigned __int8 *)*a1;
  v3 = 0;
  if ( *a1 < a2 )
  {
    v4 = *v2;
    v5 = ++v2;
    v3 = v4;
    if ( (v4 & 0x80u) != 0 )
    {
      if ( (v4 & 0xC0) == 0xC0 )
      {
        v3 = 0;
        if ( (unsigned __int64)v5 < a2 )
        {
          v2 = v5 + 1;
          v3 = *v5 << 8;
          if ( (unsigned __int64)(v5 + 1) < a2 )
          {
            v6 = *v2 | v3;
            *a1 = (unsigned __int64)(v5 + 2);
            return v6;
          }
        }
      }
      else if ( (unsigned __int64)v5 < a2 )
      {
        v2 = v5 + 1;
        v3 = ((v4 << 8) | *v5) & 0x7FFF;
      }
    }
  }
  *a1 = (unsigned __int64)v2;
  return v3;
}
