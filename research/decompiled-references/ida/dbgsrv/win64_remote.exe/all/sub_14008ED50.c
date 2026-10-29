/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008ED50
// Address: 0x000000014008ED50

//----- (000000014008ED50) ----------------------------------------------------
void __fastcall sub_14008ED50(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    sub_140020450(a2 + 32);
  }
}
