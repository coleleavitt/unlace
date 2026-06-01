/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431080
// Address: 0x0000000000431080

//----- (0000000000431080) ----------------------------------------------------
__int64 __fastcall sub_431080(__int64 a1, __int64 *a2)
{
  __syscall_slong_t v3; // x20

  v3 = sub_492630();
  sub_448310(a2);
  a2[1] = v3;
  *(_BYTE *)a2 = 9;
  return 0;
}
