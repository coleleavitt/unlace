/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetIPInfo
// Address: 0x00000000000E7B7E

//----- (00000000000E7B7E) ----------------------------------------------------
__int64 __fastcall Unwind_GetIPInfo(__int64 a1, _DWORD *a2)
{
  *a2 = *(_QWORD *)(a1 + 192) >> 63;
  return *(_QWORD *)(a1 + 152);
}
