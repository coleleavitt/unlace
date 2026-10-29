/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4610C
// Address: 0x0004610C

//----- (0004610C) --------------------------------------------------------
int __fastcall sub_4610C(int a1, int a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // kr00_8
  unsigned int v6; // r2
  int v7; // r7
  void *v8; // r0
  unsigned int v9; // r3
  _DWORD *v10; // r5
  unsigned __int8 v12[8]; // [sp+0h] [bp-24h] BYREF
  int v13; // [sp+8h] [bp-1Ch]
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]

  v12[0] = 2;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  sub_459A0(v12, a3);
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 4) + 1;
  v7 = a2 - *(_DWORD *)a1;
  if ( v6 > *(_DWORD *)(a1 + 8) )
  {
    v8 = sub_77EB0(a1, (void *)v5, v6, 0x18u);
    v9 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = v8;
    v5 = __PAIR64__(v9, (unsigned int)v8);
  }
  v10 = (_DWORD *)(v5 + v7);
  memmove((void *)(v5 + v7 + 24), (const void *)(v5 + v7), 24 * HIDWORD(v5) - v7);
  *(_BYTE *)(v5 + v7) = 2;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  sub_459A0((unsigned __int8 *)(v5 + v7), v12);
  ++*(_DWORD *)(a1 + 4);
  sub_455C8(v12);
  return v5 + v7;
}
