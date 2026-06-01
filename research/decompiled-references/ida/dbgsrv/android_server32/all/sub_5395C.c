/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5395C
// Address: 0x0005395C

//----- (0005395C) --------------------------------------------------------
int __fastcall sub_5395C(unsigned __int8 *a1, int a2)
{
  unsigned int v3; // r5
  int v4; // r6
  __int64 v5; // r0
  __int64 v6; // kr00_8
  unsigned __int64 v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r1

  v3 = *((_DWORD *)a1 + 3);
  v4 = *(_DWORD *)(a2 + 8);
  LODWORD(v5) = *((_DWORD *)a1 + 2);
  HIDWORD(v5) = v3;
  v6 = v5 >> v4;
  v7 = __PAIR64__(v3, v5) >> v4;
  v8 = HIDWORD(v6);
  v9 = *a1;
  if ( *a1 )
    v8 = HIDWORD(v7);
  *((_DWORD *)a1 + 3) = v8;
  v10 = v6;
  if ( v9 )
    v10 = v7;
  *((_DWORD *)a1 + 2) = v10;
  return v7;
}
