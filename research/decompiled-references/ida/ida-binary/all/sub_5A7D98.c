__int64 __fastcall sub_5A7D98(__int64 a1, int a2)
{
  if ( *(_DWORD *)a1 != -1 )
    __assert_fail(
      "file_ == -1",
      "src/client/minidump_file_writer.cc",
      0x77u,
      "void google_breakpad::MinidumpFileWriter::SetFile(int)");
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = 0;
  return a1;
}
