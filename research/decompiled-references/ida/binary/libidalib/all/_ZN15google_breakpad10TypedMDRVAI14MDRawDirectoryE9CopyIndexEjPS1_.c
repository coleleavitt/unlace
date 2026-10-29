__int64 __fastcall google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(__int64 a1, int a2, const void *a3)
{
  google_breakpad::MinidumpFileWriter *v3; // rbx
  __int64 v4; // r13
  int v5; // r12d
  int v6; // eax

  if ( *(_DWORD *)(a1 + 36) != 2 )
    __assert_fail(
      "allocation_state_ == ARRAY",
      "./src/client/minidump_file_writer-inl.h",
      0x48u,
      "bool google_breakpad::TypedMDRVA<MDType>::CopyIndex(unsigned int, MDType*) [with MDType = MDRawDirectory]");
  v3 = *(google_breakpad::MinidumpFileWriter **)a1;
  v4 = google_breakpad::minidump_size<MDRawDirectory>::size();
  v5 = *(_DWORD *)(a1 + 8);
  v6 = google_breakpad::minidump_size<MDRawDirectory>::size();
  return google_breakpad::MinidumpFileWriter::Copy(v3, v5 + a2 * v6, a3, v4);
}

