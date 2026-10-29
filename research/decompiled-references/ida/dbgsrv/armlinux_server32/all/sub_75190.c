/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75190
// Address: 0x00075190

//----- (00075190) --------------------------------------------------------
_DWORD *__fastcall sub_75190(int a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // r0

  v6 = sub_808A4(0x28u);
  v6[5] = a1;
  *((_QWORD *)v6 + 3) = a2;
  *((_QWORD *)v6 + 4) = a2 + a3;
  *v6 = &off_D1CD4;
  v6[2] = a3;
  v6[3] = 0;
  v6[4] = 0;
  return sub_74AF4(v6);
}
// D1CD4: using guessed type _UNKNOWN *;
