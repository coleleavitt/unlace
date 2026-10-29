__int64 __fastcall google_breakpad::TypedMDRVA<MDRawDebug64>::AllocateObjectAndArray(
        google_breakpad::UntypedMDRVA *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  if ( !a2 || !a3 )
    __assert_fail(
      "count && length",
      "./src/client/minidump_file_writer-inl.h",
      0x41u,
      "bool google_breakpad::TypedMDRVA<MDType>::AllocateObjectAndArray(size_t, size_t) [with MDType = MDRawDebug64; size"
      "_t = long unsigned int]");
  *((_DWORD *)a1 + 16) = 3;
  v3 = google_breakpad::minidump_size<MDRawDebug64>::size();
  return google_breakpad::UntypedMDRVA::Allocate(a1, v3 + a3 * a2);
}

