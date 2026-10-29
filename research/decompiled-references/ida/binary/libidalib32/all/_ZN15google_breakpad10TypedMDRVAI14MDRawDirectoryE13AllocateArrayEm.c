__int64 __fastcall google_breakpad::TypedMDRVA<MDRawDirectory>::AllocateArray(
        google_breakpad::UntypedMDRVA *a1,
        __int64 a2)
{
  __int64 v2; // rax

  if ( !a2 )
    __assert_fail(
      "count",
      "./src/client/minidump_file_writer-inl.h",
      0x39u,
      "bool google_breakpad::TypedMDRVA<MDType>::AllocateArray(size_t) [with MDType = MDRawDirectory; size_t = long unsigned int]");
  *((_DWORD *)a1 + 9) = 2;
  v2 = google_breakpad::minidump_size<MDRawDirectory>::size();
  return google_breakpad::UntypedMDRVA::Allocate(a1, v2 * a2);
}

