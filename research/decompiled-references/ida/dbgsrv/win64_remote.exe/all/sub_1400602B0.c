/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400602B0
// Address: 0x00000001400602B0

//----- (00000001400602B0) ----------------------------------------------------
__int64 __fastcall sub_1400602B0(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 v4; // cl
  unsigned __int8 v6; // dl

  if ( *a1 != 54936 )
    goto LABEL_14;
  v4 = *a2;
  if ( *a2 <= 0x7Fu )
    return 1;
  if ( v4 < 0x81u )
    goto LABEL_14;
  if ( v4 != 0xFF && a3 >= 2 )
  {
    v6 = a2[1];
    if ( (unsigned __int8)(v6 - 64) <= 0x3Eu || (unsigned __int8)(v6 + 0x80) <= 0x7Eu )
      return 2;
  }
  if ( (unsigned __int8)(v4 + 127) <= 0x7Du && a3 >= 4 && (unsigned __int8)(a2[1] - 48) <= 9u )
    return 4;
LABEL_14:
  *errno() = 22;
  return 0xFFFFFFFFLL;
}
