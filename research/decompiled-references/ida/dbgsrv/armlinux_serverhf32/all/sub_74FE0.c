/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74FE0
// Address: 0x00074FE0

//----- (00074FE0) --------------------------------------------------------
_DWORD *__fastcall sub_74FE0(int a1, int a2)
{
  _DWORD *v4; // r4
  __int64 v5; // r0

  v4 = sub_805CC(0x18u);
  v4[4] = a2;
  v4[5] = a1;
  *v4 = &off_D0CC0;
  LODWORD(v5) = sub_775B4(a1);
  *((_QWORD *)v4 + 1) = v5;
  return sub_74988(v4);
}
// 75006: variable 'v5' is possibly undefined
// D0CC0: using guessed type _UNKNOWN *;
