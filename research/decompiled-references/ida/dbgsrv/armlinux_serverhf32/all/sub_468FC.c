/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468FC
// Address: 0x000468FC

//----- (000468FC) --------------------------------------------------------
void __fastcall sub_468FC(int a1)
{
  int v2; // r1
  int v3; // r3
  int v4; // r3
  int v5; // r2
  int v6; // r3
  unsigned __int8 v7[8]; // [sp+0h] [bp-24h] BYREF
  int v8; // [sp+8h] [bp-1Ch]
  int v9; // [sp+Ch] [bp-18h]
  int v10; // [sp+10h] [bp-14h]
  int v11; // [sp+14h] [bp-10h]

  v2 = *(_DWORD *)(a1 + 12);
  v3 = 24 * *(_DWORD *)(a1 + 16);
  v7[0] = 2;
  v9 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  sub_459A0(v7, (unsigned __int8 *)(v2 + v3 - 24));
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 12);
    v6 = v4 - 1;
    *(_DWORD *)(a1 + 16) = v6;
    sub_455C8((unsigned __int8 *)(v5 + 24 * v6));
  }
  sub_455C8(v7);
}
