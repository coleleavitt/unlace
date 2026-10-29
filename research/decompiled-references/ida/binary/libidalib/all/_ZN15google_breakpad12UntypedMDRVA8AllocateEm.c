bool __fastcall google_breakpad::UntypedMDRVA::Allocate(google_breakpad::UntypedMDRVA *this, __int64 a2)
{
  if ( *((_QWORD *)this + 2) )
    __assert_fail(
      "size_ == 0",
      "src/client/minidump_file_writer.cc",
      0x154u,
      "bool google_breakpad::UntypedMDRVA::Allocate(size_t)");
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = google_breakpad::MinidumpFileWriter::Allocate(
                            *(google_breakpad::MinidumpFileWriter **)this,
                            *((_QWORD *)this + 2));
  return *((_DWORD *)this + 2) != -1;
}

