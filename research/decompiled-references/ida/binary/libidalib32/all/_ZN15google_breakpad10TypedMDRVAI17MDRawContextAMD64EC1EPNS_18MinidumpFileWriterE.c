// Alternative name is '_ZN15google_breakpad10TypedMDRVAI17MDRawContextAMD64EC2EPNS_18MinidumpFileWriterE'
_DWORD *__fastcall google_breakpad::TypedMDRVA<MDRawContextAMD64>::TypedMDRVA(
        _DWORD *a1,
        google_breakpad::MinidumpFileWriter *a2)
{
  google_breakpad::UntypedMDRVA::UntypedMDRVA((google_breakpad::UntypedMDRVA *)a1, a2);
  memset(a1 + 6, 0, 0x4D0u);
  a1[314] = 0;
  return a1;
}

