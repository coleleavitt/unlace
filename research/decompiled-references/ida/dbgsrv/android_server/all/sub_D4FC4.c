/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4FC4
// Address: 0x00000000000D4FC4

//----- (00000000000D4FC4) ----------------------------------------------------
__int64 __fastcall sub_D4FC4(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD); // x4

  v1 = *(__int64 (__fastcall **)(_QWORD))(a1 + 32);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 56));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(a1 + 80))(*(_QWORD *)(a1 + 56));
}
