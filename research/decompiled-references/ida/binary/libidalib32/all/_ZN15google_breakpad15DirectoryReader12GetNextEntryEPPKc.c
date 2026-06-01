__int64 __fastcall google_breakpad::DirectoryReader::GetNextEntry(
        google_breakpad::DirectoryReader *this,
        const char **a2)
{
  int v3; // [rsp+14h] [rbp-Ch]

  if ( !*((_DWORD *)this + 2) )
  {
    v3 = sub_1B19DE(*(_DWORD *)this, (google_breakpad::DirectoryReader *)((char *)this + 12), 0x218u);
    if ( v3 < 0 )
      return 0;
    if ( v3 )
      *((_DWORD *)this + 2) += v3;
    else
      *((_BYTE *)this + 4) = 1;
  }
  if ( !*((_DWORD *)this + 2) && *((_BYTE *)this + 4) )
    return 0;
  if ( !*((_DWORD *)this + 2) )
    __assert_fail(
      "buf_used_ > 0",
      "./src/client/linux/minidump_writer/directory_reader.h",
      0x4Fu,
      "bool google_breakpad::DirectoryReader::GetNextEntry(const char**)");
  *a2 = (char *)this + 30;
  return 1;
}

