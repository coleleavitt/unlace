/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408270
// Address: 0x0000000000408270

//----- (0000000000408270) ----------------------------------------------------
__int64 __fastcall sub_408270(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 2044) != *(_DWORD *)(a1 + 8) )
    return 0;
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
