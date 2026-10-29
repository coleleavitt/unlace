/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75028
// Address: 0x00075028

//----- (00075028) --------------------------------------------------------
_DWORD *__fastcall sub_75028(int a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // r0

  v6 = sub_805CC(0x28u);
  v6[5] = a1;
  *((_QWORD *)v6 + 3) = a2;
  *((_QWORD *)v6 + 4) = a2 + a3;
  *v6 = &off_D0CD4;
  v6[2] = a3;
  v6[3] = 0;
  v6[4] = 0;
  return sub_74988(v6);
}
// D0CD4: using guessed type _UNKNOWN *;
