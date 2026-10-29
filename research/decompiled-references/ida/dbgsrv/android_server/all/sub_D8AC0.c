/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8AC0
// Address: 0x00000000000D8AC0

//----- (00000000000D8AC0) ----------------------------------------------------
void __fastcall sub_D8AC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( *(_QWORD *)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
    *(_DWORD *)(a2 + 52) = a4;
}
