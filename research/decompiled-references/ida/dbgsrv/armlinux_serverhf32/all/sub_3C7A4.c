/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C7A4
// Address: 0x0003C7A4

//----- (0003C7A4) --------------------------------------------------------
int __fastcall sub_3C7A4(int a1, void **a2, int a3, char a4)
{
  pthread_mutex_t *v8; // r9
  int v9; // r4
  int v10; // r4

  v8 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v9 = sub_3E348();
  sub_4E394(*(_DWORD *)(v9 + 16), a1, *(_DWORD *)(v9 + 12));
  v10 = sub_3C41C(v9, a3, a2, a4 ^ 1);
  sub_7A128(v8);
  return v10;
}
// 4E394: using guessed type int __fastcall sub_4E394(_DWORD, _DWORD, _DWORD);
// D3A90: using guessed type int dword_D3A90;
