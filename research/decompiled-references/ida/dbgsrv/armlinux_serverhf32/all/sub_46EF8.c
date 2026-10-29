/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46EF8
// Address: 0x00046EF8

//----- (00046EF8) --------------------------------------------------------
int __fastcall sub_46EF8(int a1, unsigned __int8 *a2)
{
  int v4; // r2
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3
  unsigned __int8 v9[8]; // [sp+0h] [bp-24h] BYREF
  int v10; // [sp+8h] [bp-1Ch]
  int v11; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h]
  int v13; // [sp+14h] [bp-10h]

  if ( sub_461C4(a2, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24)) )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 12);
  v10 = 0;
  v9[0] = 2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  sub_459A0(v9, (unsigned __int8 *)(v5 + 24 * v4 - 24));
  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v8 = v6 - 1;
    *(_DWORD *)(a1 + 16) = v8;
    sub_455C8((unsigned __int8 *)(v7 + 24 * v8));
  }
  sub_455C8(v9);
  return 1;
}
