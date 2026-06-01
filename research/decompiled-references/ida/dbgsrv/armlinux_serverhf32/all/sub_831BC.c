/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_831BC
// Address: 0x000831BC

//----- (000831BC) --------------------------------------------------------
int *__fastcall sub_831BC(int *a1, char *s, _DWORD *a3)
{
  size_t v6; // r8

  v6 = strlen(s);
  *a1 = (int)&std::string::_Rep::_S_empty_rep_storage[3];
  sub_82B80(a1, *(_DWORD *)(*a3 - 12) + v6);
  sub_82D68(a1, (unsigned int)s, v6);
  sub_82C3C(a1, a3);
  return a1;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
