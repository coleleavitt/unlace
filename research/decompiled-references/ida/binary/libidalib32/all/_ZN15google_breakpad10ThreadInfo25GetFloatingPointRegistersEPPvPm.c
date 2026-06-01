unsigned __int64 *__fastcall google_breakpad::ThreadInfo::GetFloatingPointRegisters(
        google_breakpad::ThreadInfo *this,
        void **a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *result; // rax

  if ( !a2 && !a3 )
    __assert_fail(
      "fp_regs || size",
      "src/client/linux/dump_writer_common/thread_info.cc",
      0x16Au,
      "void google_breakpad::ThreadInfo::GetFloatingPointRegisters(void**, size_t*)");
  if ( a2 )
  {
    result = (unsigned __int64 *)a2;
    *a2 = (char *)this + 232;
  }
  if ( a3 )
  {
    *a3 = 512;
    return a3;
  }
  return result;
}

