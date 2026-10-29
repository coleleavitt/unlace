// Alternative name is '_ZN15google_breakpad10TypedMDRVAI14MDRawDirectoryEC2EPNS_18MinidumpFileWriterE'
google_breakpad::UntypedMDRVA *__fastcall google_breakpad::TypedMDRVA<MDRawDirectory>::TypedMDRVA(
        google_breakpad::UntypedMDRVA *a1,
        google_breakpad::MinidumpFileWriter *a2)
{
  google_breakpad::UntypedMDRVA::UntypedMDRVA(a1, a2);
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 9) = 0;
  return a1;
}

