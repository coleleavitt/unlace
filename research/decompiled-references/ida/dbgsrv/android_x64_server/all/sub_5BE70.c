/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BE70
// Address: 0x000000000005BE70

//----- (000000000005BE70) ----------------------------------------------------
void __fastcall sub_5BE70(_QWORD **ptr)
{
  *ptr = &off_147088;
  sub_488B0((__int64)(ptr + 4), ptr[5]);
  sub_5E2F0((__int64)(ptr + 1), ptr[2]);
  operator delete(ptr);
}
// 147088: using guessed type __int64 (__fastcall *off_147088)();
