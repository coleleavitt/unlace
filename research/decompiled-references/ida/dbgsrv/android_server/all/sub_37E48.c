/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37E48
// Address: 0x0000000000037E48

//----- (0000000000037E48) ----------------------------------------------------
__int64 __fastcall sub_37E48(__int64 a1, __int64 a2)
{
  int v2; // w8

  *(_QWORD *)(a2 + 8) = *(int *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a2 = 2;
  *(_DWORD *)(a2 + 16) = v2;
  return 0;
}
