/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37FAC
// Address: 0x00037FAC

//----- (00037FAC) --------------------------------------------------------
int __fastcall sub_37FAC(int a1, int a2)
{
  int v3; // r1
  int v4; // r6
  int v5; // r2
  _BYTE *v6; // r3
  int v7; // r0
  _BYTE *v9; // [sp+4h] [bp-14h] BYREF
  int v10; // [sp+8h] [bp-10h]
  int v11; // [sp+Ch] [bp-Ch]
  _BYTE v12[4]; // [sp+10h] [bp-8h] BYREF

  v3 = 0;
  v10 = 0;
  v9 = nullptr;
  v11 = 0;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = 0;
  v6 = nullptr;
  if ( v4 >= 1 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v10 = 0;
    v12[0] = v7;
    sub_37884((void **)&v9, v4 + 1, v12);
    v9[v4] = 0;
    v3 = v11;
    v5 = v10;
    v6 = v9;
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = v6;
  *(_DWORD *)(a2 + 12) = v5;
  *(_DWORD *)(a2 + 16) = v3;
  return 0;
}
