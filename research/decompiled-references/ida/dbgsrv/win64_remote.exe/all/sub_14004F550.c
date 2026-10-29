/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F550
// Address: 0x000000014004F550

//----- (000000014004F550) ----------------------------------------------------
__int64 __fastcall sub_14004F550(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 440);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 152LL))(v1, 0);
  return result;
}
