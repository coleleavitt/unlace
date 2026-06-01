/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37C40
// Address: 0x00037C40

//----- (00037C40) --------------------------------------------------------
int __fastcall sub_37C40(int a1, int a2)
{
  char *v3; // r0
  int v4; // r1
  int v5; // r2
  int v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch]
  int v9; // [sp+8h] [bp-8h]

  v8 = 0;
  v7 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_B3CBE;
  qgetenv(v3, (int)&v7);
  *(_BYTE *)a2 = 7;
  v4 = v8;
  v5 = v9;
  *(_DWORD *)(a2 + 8) = v7;
  *(_DWORD *)(a2 + 12) = v4;
  *(_DWORD *)(a2 + 16) = v5;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
