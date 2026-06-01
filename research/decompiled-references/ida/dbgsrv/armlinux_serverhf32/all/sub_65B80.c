/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65B80
// Address: 0x00065B80

//----- (00065B80) --------------------------------------------------------
_DWORD *__fastcall sub_65B80(_DWORD *a1)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)a1[3];
  *a1 = &off_D0488;
  sub_65B5C((int)(a1 + 1), v2);
  return a1;
}
// D0488: using guessed type _UNKNOWN *off_D0488;
