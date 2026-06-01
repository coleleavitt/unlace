/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008ED20
// Address: 0x000000014008ED20

//----- (000000014008ED20) ----------------------------------------------------
void __fastcall sub_14008ED20(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    sub_140020450(a2 + 32);
  }
}
