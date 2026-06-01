/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AA50
// Address: 0x000000000045AA50

//----- (000000000045AA50) ----------------------------------------------------
_BOOL8 __fastcall sub_45AA50(__int64 a1)
{
  __int64 v2; // rdi
  _BOOL8 result; // rax

  v2 = sub_45A880();
  result = 0;
  if ( v2 )
    return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 488LL))(v2, a1, 0) >= 0;
  return result;
}
