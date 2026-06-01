/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96024
// Address: 0x00096024

//----- (00096024) --------------------------------------------------------
_DWORD *__fastcall sub_96024(int a1, int a2, int a3)
{
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r6
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r4
  _DWORD *result; // r0

  v6 = sub_948A0(a1);
  if ( !v6 )
    return nullptr;
  v7 = v6;
  v8 = sub_948A0(a1);
  if ( !v8 )
    return nullptr;
  v9 = v8;
  result = sub_93AC6(a1 + 368, 24);
  *result = &off_DBED4;
  result[1] = 16843050;
  result[2] = v7;
  result[3] = a2;
  result[4] = a3;
  result[5] = v9;
  return result;
}
// DBED4: using guessed type _UNKNOWN *off_DBED4;
