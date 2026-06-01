/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4FE0
// Address: 0x00000000000D4FE0

//----- (00000000000D4FE0) ----------------------------------------------------
__int64 __fastcall sub_D4FE0(__int64 a1)
{
  __int64 result; // x0

  if ( *(_QWORD *)(a1 + 32) )
    return (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 56));
  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 56));
  if ( result == 0xFFFFFFFFLL )
    return -1;
  return result;
}
