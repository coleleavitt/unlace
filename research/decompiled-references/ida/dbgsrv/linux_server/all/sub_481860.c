/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481860
// Address: 0x0000000000481860

//----- (0000000000481860) ----------------------------------------------------
void __fastcall sub_481860(std::exception *a1)
{
  *(_QWORD *)a1 = &off_4C4D00;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}
// 4C4D00: using guessed type __int64 (__fastcall *off_4C4D00)();
