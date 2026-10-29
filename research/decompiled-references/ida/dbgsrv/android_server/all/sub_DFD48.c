/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFD48
// Address: 0x00000000000DFD48

//----- (00000000000DFD48) ----------------------------------------------------
__int64 __fastcall sub_DFD48(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x0

  if ( !*(_BYTE *)(result + 32) )
  {
    v1 = result;
    v2 = *(_QWORD *)(result + 24);
    *(_BYTE *)(v1 + 32) = 1;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    *(_BYTE *)(v1 + 32) = 0;
  }
  return result;
}
