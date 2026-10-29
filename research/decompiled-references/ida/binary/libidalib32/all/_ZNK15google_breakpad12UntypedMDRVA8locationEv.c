__int64 __fastcall google_breakpad::UntypedMDRVA::location(google_breakpad::UntypedMDRVA *this)
{
  __int64 v2; // [rsp+10h] [rbp-8h]

  LODWORD(v2) = *((_QWORD *)this + 2);
  HIDWORD(v2) = *((_DWORD *)this + 2);
  return v2;
}

