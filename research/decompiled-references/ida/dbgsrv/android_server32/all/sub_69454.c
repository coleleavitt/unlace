/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69454
// Address: 0x00069454

//----- (00069454) --------------------------------------------------------
int __fastcall sub_69454(int a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  unsigned int v6; // r4
  _BYTE *v7; // r0
  __int64 v8; // kr00_8
  bool v9; // zf
  int v10; // r4
  __int64 v11; // r2
  _BYTE *v12; // r0
  int v13; // r4
  unsigned int v14; // r6
  _BYTE *v15; // r0
  int v17; // [sp+8h] [bp-20h]
  _BYTE v19[5]; // [sp+18h] [bp-10h] BYREF
  _BYTE v20[5]; // [sp+1Dh] [bp-Bh] BYREF
  _BYTE v21[6]; // [sp+22h] [bp-6h] BYREF

  sub_6937C(a1, a2, 1);
  v17 = *a3;
  v6 = a3[1];
  v7 = pack_dd(v19, (unsigned int)v20, v6);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v19, v7 - v19);
  ((void (__fastcall *)(int, int, unsigned int))loc_30B84)(a1, v17, v6);
  v11 = (unsigned int)a3[3];
  v8 = v11 + 1;
  v10 = v11 + 1;
  v9 = (_DWORD)v11 == -1;
  LODWORD(v11) = 0;
  if ( !v9 )
    LODWORD(v11) = v8;
  if ( v10 )
    HIDWORD(v11) = HIDWORD(v8);
  v12 = pack_dq(v19, (unsigned int)v21, v11, HIDWORD(v11));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v19, v12 - v19);
  v13 = a3[4];
  v14 = a3[5];
  v15 = pack_dd(v19, (unsigned int)v20, v14);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v19, v15 - v19);
  ((void (__fastcall *)(int, int, unsigned int))loc_30B84)(a1, v13, v14);
  if ( a4 )
    sub_6937C(a1, a4, 0);
  return _stack_chk_guard - *(_DWORD *)&v21[2];
}
