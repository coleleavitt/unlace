__int64 __fastcall google_breakpad::MinidumpFileWriter::WriteString(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  return google_breakpad::MinidumpFileWriter::WriteStringCore<wchar_t>(a1, a2, a3, a4);
}

