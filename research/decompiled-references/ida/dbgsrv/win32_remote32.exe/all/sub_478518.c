/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478518
// Address: 0x00478518

//----- (00478518) --------------------------------------------------------
int __cdecl sub_478518(__m128i SrcStr)
{
  int result; // eax
  unsigned __int16 *v2; // eax
  int v3; // [esp+0h] [ebp-14h] BYREF
  int v4; // [esp+4h] [ebp-10h]
  char v5; // [esp+Ch] [ebp-8h]
  WCHAR DestStr; // [esp+10h] [ebp-4h] BYREF

  result = 0xFFFF;
  if ( SrcStr.m128i_i16[0] != -1 )
  {
    sub_467FF8((int)&v3, (_DWORD *)SrcStr.m128i_i32[1]);
    if ( SrcStr.m128i_i16[0] >= 0x100u )
    {
      v2 = *(unsigned __int16 **)(v4 + 168);
      if ( v2 )
      {
        if ( sub_47EF48(v2, 0x100u, &SrcStr, 1, &DestStr, 1) )
        {
          result = DestStr;
LABEL_14:
          if ( v5 )
            *(_DWORD *)(v3 + 848) &= ~2u;
          return result;
        }
        LOWORD(result) = SrcStr.m128i_i16[0];
      }
      else
      {
        LOWORD(result) = SrcStr.m128i_i16[0];
      }
    }
    else if ( (byte_4A72BA[2 * SrcStr.m128i_u8[0]] & 1) != 0 )
    {
      LOWORD(result) = *(unsigned __int8 *)(*(_DWORD *)(v4 + 148) + SrcStr.m128i_u8[0]);
    }
    else
    {
      LOWORD(result) = SrcStr.m128i_u8[0];
    }
    result = (unsigned __int16)result;
    goto LABEL_14;
  }
  return result;
}
