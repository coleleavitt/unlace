/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FD1C
// Address: 0x0003FD1C

//----- (0003FD1C) --------------------------------------------------------
int __fastcall sub_3FD1C(__int64 a1)
{
  int v1; // r4
  unsigned int v2; // r3
  int result; // r0

  v1 = a1;
  LODWORD(a1) = 1;
  *(_QWORD *)(v1 + 24) = a1;
  *(_DWORD *)(v1 + 12) = v1 + 4;
  *(_DWORD *)(v1 + 16) = v1 + 4;
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  v2 = *(_DWORD *)(sub_3E4E0() + 44);
  result = v1;
  if ( *(_DWORD *)(v1 + 28) >= v2 )
    *(_DWORD *)(v1 + 28) = 0;
  return result;
}
