/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B300
// Address: 0x000000000045B300

//----- (000000000045B300) ----------------------------------------------------
__int64 __fastcall sub_45B300(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 440);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 160LL))(v1, 0);
  return result;
}
