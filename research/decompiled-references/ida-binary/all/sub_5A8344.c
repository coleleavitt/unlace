bool __fastcall sub_5A8344(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    __assert_fail(
      "size_ == 0",
      "src/client/minidump_file_writer.cc",
      0x154u,
      "bool google_breakpad::UntypedMDRVA::Allocate(size_t)");
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = sub_5A8116(*(_QWORD *)a1, *(_QWORD *)(a1 + 16));
  return *(_DWORD *)(a1 + 8) != -1;
}
