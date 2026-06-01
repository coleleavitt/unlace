_BOOL8 __fastcall google_breakpad::LinuxDumper::GetMappingAbsolutePath(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned __int64)my_strlcpy(a3, *(_QWORD *)(a1 + 16), 4096) <= 0xFFF
      && (unsigned __int64)my_strlcat(a3, a2 + 41, 4096) <= 0xFFF;
}

