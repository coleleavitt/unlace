// Alternative name is '_ZN15google_breakpad10TypedMDRVAI8MDStringEC1EPNS_18MinidumpFileWriterE'
__int64 __fastcall google_breakpad::TypedMDRVA<MDString>::TypedMDRVA(
        __int64 a1,
        google_breakpad::MinidumpFileWriter *a2)
{
  google_breakpad::UntypedMDRVA::UntypedMDRVA((google_breakpad::UntypedMDRVA *)a1, a2);
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return a1;
}

