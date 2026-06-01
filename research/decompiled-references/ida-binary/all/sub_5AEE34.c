_QWORD *__fastcall sub_5AEE34(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  if ( !a2 && !a3 )
    __assert_fail(
      "fp_regs || size",
      "src/client/linux/dump_writer_common/thread_info.cc",
      0x16Au,
      "void google_breakpad::ThreadInfo::GetFloatingPointRegisters(void**, size_t*)");
  if ( a2 )
  {
    result = a2;
    *a2 = a1 + 232;
  }
  if ( a3 )
  {
    *a3 = 512;
    return a3;
  }
  return result;
}
