/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BB180
// Address: 0x080BB180

//----- (080BB180) --------------------------------------------------------
int __cdecl sub_80BB180(int a1)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)operator new(8u);
  sub_80BFBD0(v1);
  *v1 = &off_811C640;
  v1[1] = a1;
  return sub_80BFD00();
}
// 811C640: using guessed type _UNKNOWN *off_811C640;
