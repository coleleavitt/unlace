/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4648F8
// Address: 0x00000000004648F8

//----- (00000000004648F8) ----------------------------------------------------
__int64 __fastcall sub_4648F8(__int64 a1)
{
  int v1; // w1

  v1 = *(_DWORD *)(a1 + 172);
  if ( v1 < 0 )
    return 0;
  else
    return *(_QWORD *)(a1 + 104) + 120LL * v1;
}
