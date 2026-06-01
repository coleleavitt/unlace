/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FA78
// Address: 0x0005FA78

//----- (0005FA78) --------------------------------------------------------
int __fastcall sub_5FA78(int a1, int a2, unsigned int a3)
{
  _BYTE *v6; // r0
  int v7; // r4
  void *v9[3]; // [sp+8h] [bp-18h] BYREF
  _BYTE v10[5]; // [sp+14h] [bp-Ch] BYREF
  _BYTE v11[7]; // [sp+19h] [bp-7h] BYREF

  *(_DWORD *)&v11[3] = **(_DWORD **)(loc_5FB18 + 391822);
  sub_6DA58((int)v9, 55);
  sub_68B38((int)v9, a2);
  v6 = pack_dd(v10, (unsigned int)v11, a3);
  ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(v9, v10, v6 - v10);
  v7 = sub_680B0(a1 + 100, (int)v9, -1, 0);
  if ( v9[0] )
  {
    v9[1] = nullptr;
    qfree(v9[0]);
    v9[2] = nullptr;
    v9[0] = nullptr;
  }
  return v7;
}
