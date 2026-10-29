/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96070
// Address: 0x00096070

//----- (00096070) --------------------------------------------------------
_DWORD *__fastcall sub_96070(int a1, int a2, int a3)
{
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r6
  _DWORD *result; // r0

  v6 = sub_948A0(a1);
  if ( !v6 )
    return nullptr;
  v7 = v6;
  result = sub_93AC6(a1 + 368, 20);
  *result = &off_DBF08;
  result[1] = 16843050;
  result[2] = a2;
  result[3] = a3;
  result[4] = v7;
  return result;
}
// DBF08: using guessed type _UNKNOWN *off_DBF08;
