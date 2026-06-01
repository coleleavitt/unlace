/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F80
// Address: 0x00046F80

//----- (00046F80) --------------------------------------------------------
int __fastcall sub_46F80(int a1, __int64 *a2)
{
  _DWORD *v4; // r4
  int v5; // r1
  __int64 v6; // kr00_8
  int v7; // r1
  __int64 v8; // kr08_8
  int v9; // r3
  int v10; // r2
  int v11; // r3
  __int64 v12; // kr10_8
  int v13; // r3
  int v14; // r2
  int v15; // r3
  unsigned __int8 v17[8]; // [sp+0h] [bp-20h] BYREF
  int v18; // [sp+8h] [bp-18h]
  int v19; // [sp+Ch] [bp-14h]
  int v20; // [sp+10h] [bp-10h]
  int v21; // [sp+14h] [bp-Ch]

  v4 = (_DWORD *)(24 * *(_DWORD *)(a1 + 16) - 24 + *(_DWORD *)(a1 + 12));
  if ( sub_45CC0((int)v4) )
    return 0;
  v5 = v4[2];
  v6 = *a2;
  v17[0] = 2;
  *(_DWORD *)a2 = v5;
  v7 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 1) = v4[3];
  *((_DWORD *)a2 + 2) = v4[4];
  *((_QWORD *)v4 + 1) = v6;
  v4[4] = v7;
  v8 = *(_QWORD *)(a1 + 12);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  sub_459A0(v17, (unsigned __int8 *)(v8 + 24 * HIDWORD(v8) - 24));
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 )
  {
    v10 = *(_DWORD *)(a1 + 12);
    v11 = v9 - 1;
    *(_DWORD *)(a1 + 16) = v11;
    sub_455C8((unsigned __int8 *)(v10 + 24 * v11));
  }
  sub_455C8(v17);
  v12 = *(_QWORD *)(a1 + 12);
  v13 = 24 * HIDWORD(v12) - 24;
  v14 = *(unsigned __int8 *)(v12 + v13);
  v15 = v13 + v12;
  if ( v14 == 5 )
    return *(_DWORD *)(v15 + 8);
  sub_70A2C(1532);
  return 0;
}
