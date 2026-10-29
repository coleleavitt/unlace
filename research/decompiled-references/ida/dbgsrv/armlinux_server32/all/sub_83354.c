/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83354
// Address: 0x00083354

//----- (00083354) --------------------------------------------------------
int *__fastcall sub_83354(int *a1, char *s, _DWORD *a3)
{
  size_t v6; // r8

  v6 = strlen(s);
  *a1 = (int)&std::string::_Rep::_S_empty_rep_storage[3];
  sub_82D18(a1, *(_DWORD *)(*a3 - 12) + v6);
  sub_82F00(a1, (unsigned int)s, v6);
  sub_82DD4(a1, a3);
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
