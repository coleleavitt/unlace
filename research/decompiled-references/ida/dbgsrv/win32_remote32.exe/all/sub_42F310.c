/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F310
// Address: 0x0042F310

//----- (0042F310) --------------------------------------------------------
char __userpurge sub_42F310@<al>(int a1@<ebx>, int a2, int a3, int a4, char a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // esi
  _DWORD *v6; // edi
  char v7; // bl

  v5 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v6 = sub_428030();
  sub_438730(v6[4], a2, v6[3]);
  v7 = sub_42CA10((int)v6, a1, a4, a3, a5 ^ 1);
  sub_4562F0(v5);
  return v7;
}
