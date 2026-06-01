/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1968
// Address: 0x00000000000C1968

//----- (00000000000C1968) ----------------------------------------------------
__int64 sub_C1968()
{
  unsigned __int8 v0; // w8
  void *v2; // x19

  v0 = atomic_load((unsigned __int8 *)&byte_168E20);
  if ( (v0 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_168E20) )
  {
    v2 = operator new(0x58u);
    sub_C0EC8((__int64)v2);
    qword_168E18 = (__int64)v2;
    _cxa_guard_release((__guard *)&byte_168E20);
  }
  sub_C15CC(qword_168E18);
  return qword_168E18;
}
// 167DD0: using guessed type __int64[512];
// 168E18: using guessed type __int64 qword_168E18;
// 168E20: using guessed type char byte_168E20;
