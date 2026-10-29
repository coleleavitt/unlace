__int64 __fastcall google_breakpad::TypedMDRVA<MDString>::CopyIndexAfterObject(
        __int64 a1,
        int a2,
        const void *a3,
        __int64 a4)
{
  google_breakpad::MinidumpFileWriter *v4; // rbx
  int v5; // r13d
  int v6; // eax

  if ( *(_DWORD *)(a1 + 32) != 3 )
    __assert_fail(
      "allocation_state_ == SINGLE_OBJECT_WITH_ARRAY",
      "./src/client/minidump_file_writer-inl.h",
      0x52u,
      "bool google_breakpad::TypedMDRVA<MDType>::CopyIndexAfterObject(unsigned int, const void*, size_t) [with MDType = M"
      "DString; size_t = long unsigned int]");
  v4 = *(google_breakpad::MinidumpFileWriter **)a1;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = google_breakpad::minidump_size<MDString>::size();
  return google_breakpad::MinidumpFileWriter::Copy(v4, v5 + v6 + a2 * (int)a4, a3, a4);
}

