// Alternative name is '_ZN15google_breakpad10TypedMDRVAI20MDRawExceptionStreamEC2EPNS_18MinidumpFileWriterE'
_DWORD *__fastcall google_breakpad::TypedMDRVA<MDRawExceptionStream>::TypedMDRVA(
        _DWORD *a1,
        google_breakpad::MinidumpFileWriter *a2)
{
  google_breakpad::UntypedMDRVA::UntypedMDRVA((google_breakpad::UntypedMDRVA *)a1, a2);
  memset(a1 + 6, 0, 0xA8u);
  a1[48] = 0;
  return a1;
}

