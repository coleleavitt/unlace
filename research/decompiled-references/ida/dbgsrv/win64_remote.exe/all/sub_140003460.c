/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003460
// Address: 0x0000000140003460

//----- (0000000140003460) ----------------------------------------------------
__int64 __fastcall sub_140003460(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
