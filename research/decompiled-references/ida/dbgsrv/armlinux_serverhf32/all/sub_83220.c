/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83220
// Address: 0x00083220

//----- (00083220) --------------------------------------------------------
int *__fastcall sub_83220(int *a1, int a2, _DWORD *a3)
{
  *a1 = (int)&std::string::_Rep::_S_empty_rep_storage[3];
  sub_82B80(a1, *(_DWORD *)(*a3 - 12) + 1);
  sub_82E7C(a1, 1u, a2);
  sub_82C3C(a1, a3);
  return a1;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
