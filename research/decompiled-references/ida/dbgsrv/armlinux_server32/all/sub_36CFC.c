/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36CFC
// Address: 0x00036CFC

//----- (00036CFC) --------------------------------------------------------
int __fastcall sub_36CFC(int a1, int a2)
{
  int v3; // r1
  const char *v4; // r0
  int v6; // r5
  int v7; // r6
  int v8; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+4h] [bp-Ch]
  int v10; // [sp+8h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 12);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( v3 )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = (const char *)&dword_8DB98;
  sub_7A894(v4, (int)&v8);
  *(_BYTE *)a2 = 7;
  v7 = v8;
  v6 = v9;
  *(_DWORD *)(a2 + 16) = v10;
  *(_DWORD *)(a2 + 8) = v7;
  *(_DWORD *)(a2 + 12) = v6;
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
