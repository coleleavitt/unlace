/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C93C
// Address: 0x0003C93C

//----- (0003C93C) --------------------------------------------------------
int __fastcall sub_3C93C(int a1, void **a2, int a3, char a4)
{
  pthread_mutex_t *v8; // r9
  int v9; // r4
  int v10; // r4

  v8 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v9 = sub_3E4E0();
  sub_4E518(*(_DWORD *)(v9 + 16), a1, *(_DWORD *)(v9 + 12));
  v10 = sub_3C5B4(v9, a3, a2, a4 ^ 1);
  sub_7A290(v8);
  return v10;
}
// 4E518: using guessed type int __fastcall sub_4E518(_DWORD, _DWORD, _DWORD);
// D4AB0: using guessed type int dword_D4AB0;
