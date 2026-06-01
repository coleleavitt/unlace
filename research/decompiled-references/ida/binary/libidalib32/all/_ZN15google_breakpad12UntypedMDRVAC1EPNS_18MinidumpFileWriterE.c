// Alternative name is '_ZN15google_breakpad12UntypedMDRVAC2EPNS_18MinidumpFileWriterE'
google_breakpad::UntypedMDRVA *__fastcall google_breakpad::UntypedMDRVA::UntypedMDRVA(
        google_breakpad::UntypedMDRVA *this,
        google_breakpad::MinidumpFileWriter *a2)
{
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = google_breakpad::MinidumpFileWriter::position(a2);
  *((_QWORD *)this + 2) = 0;
  return this;
}

