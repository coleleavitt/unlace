__int64 __fastcall google_breakpad::TypedMDRVA<MDRawDebug64>::Flush(__int64 a1)
{
  google_breakpad::MinidumpFileWriter *v1; // rbx
  __int64 v2; // rax

  v1 = *(google_breakpad::MinidumpFileWriter **)a1;
  v2 = google_breakpad::minidump_size<MDRawDebug64>::size();
  return google_breakpad::MinidumpFileWriter::Copy(v1, *(_DWORD *)(a1 + 8), (const void *)(a1 + 24), v2);
}

