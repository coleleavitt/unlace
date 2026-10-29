/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_833B8
// Address: 0x000833B8

//----- (000833B8) --------------------------------------------------------
int *__fastcall sub_833B8(int *a1, int a2, _DWORD *a3)
{
  *a1 = (int)&std::string::_Rep::_S_empty_rep_storage[3];
  sub_82D18(a1, *(_DWORD *)(*a3 - 12) + 1);
  sub_83014(a1, 1u, a2);
  sub_82DD4(a1, a3);
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
