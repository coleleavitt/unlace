/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008EA00
// Address: 0x000000014008EA00

//----- (000000014008EA00) ----------------------------------------------------
void __fastcall sub_14008EA00(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 792) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 792) &= ~1u;
    sub_140020450(a2 + 704);
  }
}
