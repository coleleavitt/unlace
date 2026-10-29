/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4FA8
// Address: 0x00000000000D4FA8

//----- (00000000000D4FA8) ----------------------------------------------------
__int64 __fastcall sub_D4FA8(__int64 a1)
{
  if ( *(_QWORD *)a1 )
    return (*(__int64 (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 56));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(a1 + 64))(*(_QWORD *)(a1 + 56));
}
