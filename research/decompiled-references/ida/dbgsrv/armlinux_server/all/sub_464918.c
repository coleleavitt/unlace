/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464918
// Address: 0x0000000000464918

//----- (0000000000464918) ----------------------------------------------------
__int64 __fastcall sub_464918(__int64 a1)
{
  int v1; // w1

  v1 = *(_DWORD *)(a1 + 176);
  if ( v1 < 0 )
    return 0;
  else
    return *(_QWORD *)(a1 + 104) + 120LL * v1;
}
