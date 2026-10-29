/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F1A4
// Address: 0x000000010000F1A4

//----- (000000010000F1A4) ----------------------------------------------------
bool __fastcall sub_10000F1A4(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // x9
  __int64 v4; // x10
  __int128 v5; // q0

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 <= a2 )
  {
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 16) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 72) + 20LL * a2;
    v5 = *(_OWORD *)v4;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v4 + 16);
    *(_OWORD *)a3 = v5;
  }
  return v3 > a2;
}
