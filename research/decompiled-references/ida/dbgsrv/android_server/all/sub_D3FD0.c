/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3FD0
// Address: 0x00000000000D3FD0

//----- (00000000000D3FD0) ----------------------------------------------------
__int64 __fastcall sub_D3FD0(__int64 a1)
{
  __int64 v1; // x8

  if ( !a1 )
    return -1;
  v1 = *(_QWORD *)(a1 + 320);
  if ( v1 )
    return *(_QWORD *)(v1 + 160);
  else
    return -1;
}
