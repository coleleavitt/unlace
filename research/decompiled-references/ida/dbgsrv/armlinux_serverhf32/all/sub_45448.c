/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45448
// Address: 0x00045448

//----- (00045448) --------------------------------------------------------
int __fastcall sub_45448(int a1, int a2, unsigned __int8 *a3)
{
  int v5; // r1
  int v7; // r5
  void *v8; // r0
  int v9; // r3
  int v10; // r3
  _BYTE *v11; // r0
  int v12; // r3
  char *v13; // r0
  unsigned __int8 v15[8]; // [sp+0h] [bp-20h] BYREF
  int v16; // [sp+8h] [bp-18h]
  int v17; // [sp+Ch] [bp-14h]
  int v18; // [sp+10h] [bp-10h]
  int v19; // [sp+14h] [bp-Ch]

  v5 = *(_DWORD *)(a1 + 40);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(void **)(a1 + 36);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 44) )
  {
    v8 = sub_77EB0(a1 + 36, v8, v5 + 1, 4u);
    v5 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 36) = v8;
  }
  *((_DWORD *)v8 + v5) = v7;
  v9 = *(_DWORD *)(a1 + 40);
  v15[0] = 2;
  v16 = 0;
  v17 = 0;
  *(_DWORD *)(a1 + 40) = v9 + 1;
  v18 = 0;
  v19 = 0;
  sub_459A0(v15, a3);
  v10 = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a1 + 20) )
  {
    v11 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v10 + 1, 0x18u);
    v10 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v11;
  }
  else
  {
    v11 = *(_BYTE **)(a1 + 12);
  }
  v12 = 24 * v10;
  v11[v12] = 2;
  v13 = &v11[v12];
  *((_DWORD *)v13 + 2) = 0;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 4) = 0;
  *((_DWORD *)v13 + 5) = 0;
  sub_459A0((unsigned __int8 *)v13, v15);
  ++*(_DWORD *)(a1 + 16);
  sub_455C8(v15);
  return sub_4521C((_DWORD *)a1, nullptr, nullptr, a2);
}
