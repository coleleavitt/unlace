unsigned __int64 *__fastcall google_breakpad::ThreadInfo::GetGeneralPurposeRegisters(
        google_breakpad::ThreadInfo *this,
        void **a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *result; // rax

  if ( !a2 && !a3 )
    __assert_fail(
      "gp_regs || size",
      "src/client/linux/dump_writer_common/thread_info.cc",
      0x156u,
      "void google_breakpad::ThreadInfo::GetGeneralPurposeRegisters(void**, size_t*)");
  if ( a2 )
  {
    result = (unsigned __int64 *)a2;
    *a2 = (char *)this + 16;
  }
  if ( a3 )
  {
    *a3 = 216;
    return a3;
  }
  return result;
}

