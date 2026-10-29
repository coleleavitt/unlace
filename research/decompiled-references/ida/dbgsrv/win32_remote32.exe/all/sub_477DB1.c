/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477DB1
// Address: 0x00477DB1

//----- (00477DB1) --------------------------------------------------------
void __stdcall sub_477DB1(int *a1, int a2, int *a3)
{
  int *i; // esi

  sub_47A78B(*a1);
  for ( i = &dword_4B7A54; i != &dword_4B7A58; ++i )
  {
    if ( (wchar_t **)*i != &off_4B6028 )
      *i = sub_47E9D4(i, (int)&off_4B6028);
  }
  sub_47A7D3(*a3);
}
// 4B6028: using guessed type wchar_t *off_4B6028;
// 4B7A54: using guessed type int dword_4B7A54;
// 4B7A58: using guessed type int dword_4B7A58;
