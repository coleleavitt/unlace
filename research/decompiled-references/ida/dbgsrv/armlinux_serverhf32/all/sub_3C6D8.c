/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C6D8
// Address: 0x0003C6D8

//----- (0003C6D8) --------------------------------------------------------
int __fastcall sub_3C6D8(int a1, void **a2, int a3)
{
  pthread_mutex_t *v6; // r7
  int *v7; // r0
  int v8; // r6
  _DWORD *v9; // r1
  int v10; // r4
  _DWORD v12[2]; // [sp+4h] [bp-10h] BYREF

  v6 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v7 = ((int *(__fastcall *)())off_D2D44)();
  sub_4C6E4(v7, nullptr, 0);
  v8 = sub_3E348();
  if ( sub_4E45C(*(_DWORD *)(v8 + 16), a1) )
  {
    sub_3C280(*(_DWORD **)(v8 + 16), 0, a2);
    sub_4E5C8(*(_DWORD *)(v8 + 16), a3 & 1);
    v10 = 0;
  }
  else
  {
    v9 = (_DWORD *)(a3 & 2);
    if ( (a3 & 2) != 0 )
      v9 = v12;
    v12[1] = -1;
    v12[0] = &off_CFAA0;
    v10 = sub_3C41C(v8, (int)v9, a2, ((a3 ^ 4) & 4) != 0);
    sub_4E5C8(*(_DWORD *)(v8 + 16), a3 & 1);
  }
  sub_7A128(v6);
  return v10;
}
// 4E45C: using guessed type int __fastcall sub_4E45C(_DWORD, _DWORD);
// 4E5C8: using guessed type int __fastcall sub_4E5C8(_DWORD, _DWORD);
// CFAA0: using guessed type _UNKNOWN *off_CFAA0;
// D2D44: using guessed type int (__fastcall *off_D2D44)(_DWORD);
// D3A90: using guessed type int dword_D3A90;
