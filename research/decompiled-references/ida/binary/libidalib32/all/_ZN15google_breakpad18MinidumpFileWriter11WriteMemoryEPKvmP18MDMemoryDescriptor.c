__int64 __fastcall google_breakpad::MinidumpFileWriter::WriteMemory(
        google_breakpad::MinidumpFileWriter *a1,
        const void *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v5; // rax
  _BYTE v8[48]; // [rsp+20h] [rbp-30h] BYREF

  if ( !a2 )
    __assert_fail(
      "src",
      "src/client/minidump_file_writer.cc",
      0x102u,
      "bool google_breakpad::MinidumpFileWriter::WriteMemory(const void*, size_t, MDMemoryDescriptor*)");
  if ( !a4 )
    __assert_fail(
      "output",
      "src/client/minidump_file_writer.cc",
      0x103u,
      "bool google_breakpad::MinidumpFileWriter::WriteMemory(const void*, size_t, MDMemoryDescriptor*)");
  google_breakpad::UntypedMDRVA::UntypedMDRVA((google_breakpad::UntypedMDRVA *)v8, a1);
  if ( (unsigned __int8)google_breakpad::UntypedMDRVA::Allocate((google_breakpad::UntypedMDRVA *)v8, a3) != 1 )
    return 0;
  v5 = google_breakpad::UntypedMDRVA::size((google_breakpad::UntypedMDRVA *)v8);
  if ( (unsigned __int8)google_breakpad::UntypedMDRVA::Copy((google_breakpad::UntypedMDRVA *)v8, a2, v5) != 1 )
    return 0;
  *a4 = a2;
  a4[1] = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v8);
  return 1;
}

