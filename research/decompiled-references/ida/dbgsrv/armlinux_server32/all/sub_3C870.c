/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C870
// Address: 0x0003C870

//----- (0003C870) --------------------------------------------------------
int __fastcall sub_3C870(int a1, void **a2, int a3)
{
  pthread_mutex_t *v6; // r7
  int *v7; // r0
  int v8; // r6
  _DWORD *v9; // r1
  int v10; // r4
  _DWORD v12[2]; // [sp+4h] [bp-10h] BYREF

  v6 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v7 = ((int *(__fastcall *)())off_D3D64)();
  sub_4C864(v7, nullptr, 0);
  v8 = sub_3E4E0();
  if ( sub_4E5E0(*(_DWORD *)(v8 + 16), a1) )
  {
    sub_3C418(*(_DWORD **)(v8 + 16), 0, a2);
    sub_4E74C(*(_DWORD *)(v8 + 16), a3 & 1);
    v10 = 0;
  }
  else
  {
    v9 = (_DWORD *)(a3 & 2);
    if ( (a3 & 2) != 0 )
      v9 = v12;
    v12[1] = -1;
    v12[0] = &off_D0AA0;
    v10 = sub_3C5B4(v8, (int)v9, a2, ((a3 ^ 4) & 4) != 0);
    sub_4E74C(*(_DWORD *)(v8 + 16), a3 & 1);
  }
  sub_7A290(v6);
  return v10;
}
// 4E5E0: using guessed type int __fastcall sub_4E5E0(_DWORD, _DWORD);
// 4E74C: using guessed type int __fastcall sub_4E74C(_DWORD, _DWORD);
// D0AA0: using guessed type _UNKNOWN *off_D0AA0;
// D3D64: using guessed type int (__fastcall *off_D3D64)(_DWORD);
// D4AB0: using guessed type int dword_D4AB0;
