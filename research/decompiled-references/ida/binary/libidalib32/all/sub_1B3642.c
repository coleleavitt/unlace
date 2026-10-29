__int64 __fastcall sub_1B3642(__int64 a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32)) != 1 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(*(_QWORD *)(a1 + 32)) != 1
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(*(_QWORD *)(a1 + 32)) != 1 )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 144) )
  {
    *(_QWORD *)(a1 + 160) = google_breakpad::LinuxDumper::FindMappingNoBias(
                              *(google_breakpad::LinuxDumper **)(a1 + 32),
                              *(_QWORD *)(a1 + 152));
    if ( (unsigned __int8)sub_1B37F8(a1) != 1 )
      return 0;
  }
  if ( *(_DWORD *)a1 == -1 )
  {
    if ( (unsigned __int8)google_breakpad::MinidumpFileWriter::Open(
                            (google_breakpad::MinidumpFileWriter *)(a1 + 40),
                            *(const char **)(a1 + 8)) != 1 )
      return 0;
  }
  else
  {
    google_breakpad::MinidumpFileWriter::SetFile((google_breakpad::MinidumpFileWriter *)(a1 + 40), *(_DWORD *)a1);
  }
  return 1;
}

