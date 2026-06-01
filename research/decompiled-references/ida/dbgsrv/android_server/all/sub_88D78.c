/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88D78
// Address: 0x0000000000088D78

//----- (0000000000088D78) ----------------------------------------------------
__int64 __fastcall sub_88D78(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = a1[2];
  *a1 = &off_15DC60;
  result = qsem_free(v2);
  a1[1] = 0;
  a1[2] = 0;
  return result;
}
// 15DC60: using guessed type void (__fastcall __noreturn *off_15DC60)();
