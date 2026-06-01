/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53314
// Address: 0x00053314

//----- (00053314) --------------------------------------------------------
int __fastcall sub_53314(int a1, unsigned __int8 *a2)
{
  __int64 v3; // r6
  int v4; // r5
  unsigned __int64 v5; // r0
  unsigned __int64 v6; // r6
  _DWORD *v7; // r4
  int v9; // [sp+8h] [bp-14h]
  int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  v12 = 64 - 8 * *((_DWORD *)a2 + 1);
  v10 = 0xFFFFFFFFFFFFFFFFLL >> v12 >> 32;
  v11 = *(_DWORD *)(a1 + 12);
  HIDWORD(v3) = v10 & v11;
  *(_DWORD *)(a1 + 12) = v10 & v11;
  v9 = *(_DWORD *)(a1 + 8);
  LODWORD(v3) = (0xFFFFFFFFFFFFFFFFLL >> v12) & v9;
  *(_DWORD *)(a1 + 8) = v3;
  v4 = *a2;
  *(_BYTE *)a1 = v4;
  v5 = 0x8000000000000000LL >> v12;
  v6 = v3 & (0x8000000000000000LL >> v12);
  v7 = (_DWORD *)(a1 + 8);
  if ( !v4 && v6 )
  {
    *v7 = v9 | ~(unsigned int)(0xFFFFFFFFFFFFFFFFLL >> v12) | v5;
    v7[1] = v11 | ~v10 | HIDWORD(v5);
    LODWORD(v5) = ~v10;
  }
  return v5;
}
