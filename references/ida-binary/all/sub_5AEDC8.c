_QWORD *__fastcall sub_5AEDC8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  if ( !a2 && !a3 )
    __assert_fail(
      "gp_regs || size",
      "src/client/linux/dump_writer_common/thread_info.cc",
      0x156u,
      "void google_breakpad::ThreadInfo::GetGeneralPurposeRegisters(void**, size_t*)");
  if ( a2 )
  {
    result = a2;
    *a2 = a1 + 16;
  }
  if ( a3 )
  {
    *a3 = 216;
    return a3;
  }
  return result;
}
