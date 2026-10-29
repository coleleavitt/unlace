/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD040
// Address: 0x00000000000AD040

//----- (00000000000AD040) ----------------------------------------------------
void __fastcall sub_AD040(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  *(_OWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = a4;
      *(_DWORD *)(a1 + 24) = a2;
    }
  }
}
