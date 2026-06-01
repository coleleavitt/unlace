/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444718
// Address: 0x0000000000444718

//----- (0000000000444718) ----------------------------------------------------
__int64 __fastcall sub_444718(__int64 *a1, __int64 a2)
{
  int v3; // w1
  __int64 v4; // x0

  v3 = *((_DWORD *)a1 + 2);
  if ( v3 < 0 )
    return sub_444690(a2, ~v3);
  v4 = *a1;
  if ( v4 && *(_DWORD *)v4 == 289621065 && (unsigned __int64)v3 < *(_QWORD *)(v4 + 32) )
    return *(_QWORD *)(v4 + 24) + 32LL * v3;
  else
    return 0;
}
