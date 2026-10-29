/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46150
// Address: 0x00046150

//----- (00046150) --------------------------------------------------------
void __fastcall sub_46150(int a1, unsigned __int8 *a2)
{
  int v3; // r3
  _BYTE *v4; // r0
  int v5; // r3
  char *v6; // r0
  unsigned __int8 v7[8]; // [sp+0h] [bp-24h] BYREF
  int v8; // [sp+8h] [bp-1Ch]
  int v9; // [sp+Ch] [bp-18h]
  int v10; // [sp+10h] [bp-14h]
  int v11; // [sp+14h] [bp-10h]

  v7[0] = 2;
  v9 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  sub_45B30(v7, a2);
  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
  {
    v4 = sub_78018(a1, *(void **)a1, v3 + 1, 0x18u);
    v3 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = v4;
  }
  else
  {
    v4 = *(_BYTE **)a1;
  }
  v5 = 24 * v3;
  v4[v5] = 2;
  v6 = &v4[v5];
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  sub_45B30((unsigned __int8 *)v6, v7);
  ++*(_DWORD *)(a1 + 4);
  sub_45758(v7);
}
