/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E8D0
// Address: 0x0008E8D0

//----- (0008E8D0) --------------------------------------------------------
int __fastcall sub_8E8D0(int a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r2

  if ( !a1 )
    return 0;
  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v1 = *(_DWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 60);
  if ( !*(_QWORD *)(a1 + 56) )
    return *(_DWORD *)(a1 + 88);
  if ( !(v1 ^ 0xFFFF | v2) )
    return *(_DWORD *)(a1 + 88);
  v3 = *(_DWORD *)(a1 + 80) ^ v1 | *(_DWORD *)(a1 + 84) ^ v2;
  v4 = 0;
  if ( v3 )
    return *(_DWORD *)(a1 + 88);
  return v4;
}
