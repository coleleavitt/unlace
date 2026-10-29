/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_SetIP
// Address: 0x00000000000E7B93

//----- (00000000000E7B93) ----------------------------------------------------
void __fastcall Unwind_SetIP(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 152) = a2;
}
