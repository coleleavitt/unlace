/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493DF8
// Address: 0x0000000000493DF8

//----- (0000000000493DF8) ----------------------------------------------------
char *__fastcall sub_493DF8(__int64 a1, int a2, int a3)
{
  _QWORD *v6; // x20
  __int64 v8; // x1

  v6 = sub_491248(48);
  v6[2] = 0;
  *((_BYTE *)v6 + 24) = 0;
  *((_DWORD *)v6 + 7) = 0;
  v6[4] = 0;
  *((_BYTE *)v6 + 40) = 0;
  *((_BYTE *)v6 + 41) = 0;
  v6[4] = sub_493CB0(nullptr, 0);
  *((_BYTE *)v6 + 40) = 0;
  *v6 = a1 + 24;
  *((_BYTE *)v6 + 41) = 0;
  v6[1] = *(_QWORD *)(a1 + 32);
  **(_QWORD **)(a1 + 32) = v6;
  v8 = *(_QWORD *)(a1 + 40) + 1LL;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v8;
  *((_DWORD *)v6 + 4) = a2;
  *((_DWORD *)v6 + 7) = a3;
  return (char *)(v6 + 2);
}
