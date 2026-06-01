__int64 __fastcall sub_59F4E4(__int64 a1, _QWORD *a2)
{
  int v3; // [rsp+14h] [rbp-Ch]

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v3 = sub_59E69E(*(_DWORD *)a1, (struct linux_dirent *)(a1 + 12), 0x218u);
    if ( v3 < 0 )
      return 0;
    if ( v3 )
      *(_DWORD *)(a1 + 8) += v3;
    else
      *(_BYTE *)(a1 + 4) = 1;
  }
  if ( !*(_DWORD *)(a1 + 8) && *(_BYTE *)(a1 + 4) )
    return 0;
  if ( !*(_DWORD *)(a1 + 8) )
    __assert_fail(
      "buf_used_ > 0",
      "./src/client/linux/minidump_writer/directory_reader.h",
      0x4Fu,
      "bool google_breakpad::DirectoryReader::GetNextEntry(const char**)");
  *a2 = a1 + 30;
  return 1;
}
