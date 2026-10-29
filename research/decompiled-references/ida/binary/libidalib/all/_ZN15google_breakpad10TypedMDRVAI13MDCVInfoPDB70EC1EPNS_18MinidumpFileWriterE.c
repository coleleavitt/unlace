// Alternative name is '_ZN15google_breakpad10TypedMDRVAI13MDCVInfoPDB70EC2EPNS_18MinidumpFileWriterE'
__int64 __fastcall google_breakpad::TypedMDRVA<MDCVInfoPDB70>::TypedMDRVA(
        __int64 a1,
        google_breakpad::MinidumpFileWriter *a2)
{
  google_breakpad::UntypedMDRVA::UntypedMDRVA((google_breakpad::UntypedMDRVA *)a1, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  return a1;
}

