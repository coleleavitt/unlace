/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F0BA
// Address: 0x0006F0BA

//----- (0006F0BA) --------------------------------------------------------
int __fastcall sub_6F0BA(int a1, char *a2, char *a3, int *a4)
{
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r2
  int v12; // r3
  int v13; // r5

  *(_DWORD *)a1 = 0;
  sub_1B09C(a1 + 12, a2);
  sub_1B09C(a1 + 24, a3);
  v7 = *a4;
  v8 = a4[1];
  v9 = a4[2];
  v10 = a4[3];
  a4 += 4;
  *(_DWORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 40) = v8;
  *(_DWORD *)(a1 + 44) = v9;
  *(_DWORD *)(a1 + 48) = v10;
  v11 = a4[1];
  v12 = a4[2];
  v13 = a4[3];
  *(_DWORD *)(a1 + 52) = *a4;
  *(_DWORD *)(a1 + 56) = v11;
  *(_DWORD *)(a1 + 60) = v12;
  *(_DWORD *)(a1 + 64) = v13;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 4) = qmutex_create();
  *(_DWORD *)(a1 + 8) = qsem_create(nullptr, 0);
  return a1;
}
