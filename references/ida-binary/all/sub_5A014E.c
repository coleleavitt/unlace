__int64 __fastcall sub_5A014E(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax

  *a1 = a3;
  *((_QWORD *)a1 + 1) = a2;
  if ( a4 )
    v10 = a4 + 136;
  else
    v10 = 0;
  *((_QWORD *)a1 + 2) = v10;
  if ( a4 )
    v11 = a4 + 1072;
  else
    v11 = 0;
  *((_QWORD *)a1 + 3) = v11;
  *((_QWORD *)a1 + 4) = a10;
  sub_5A7CD6(a1 + 10);
  *((_QWORD *)a1 + 8) = -1;
  v12 = sub_59837C(*((_QWORD *)a1 + 4));
  sub_5A444A(a1 + 20, v12, 16);
  *((_QWORD *)a1 + 16) = a5;
  *((_QWORD *)a1 + 17) = a6;
  *((_BYTE *)a1 + 144) = a7;
  *((_QWORD *)a1 + 19) = a8;
  *((_QWORD *)a1 + 20) = 0;
  *((_BYTE *)a1 + 168) = a9;
  if ( *a1 == -1 && !a2 )
    __assert_fail(
      "fd_ != -1 || minidump_path",
      "src/client/linux/minidump_writer/minidump_writer.cc",
      0xA1u,
      "{anonymous}::MinidumpWriter::MinidumpWriter(const char*, int, const google_breakpad::ExceptionHandler::CrashContex"
      "t*, const MappingList&, const AppMemoryList&, bool, uintptr_t, bool, google_breakpad::LinuxDumper*)");
  result = *a1;
  if ( (_DWORD)result != -1 )
  {
    if ( a2 )
      __assert_fail(
        "fd_ == -1 || !minidump_path",
        "src/client/linux/minidump_writer/minidump_writer.cc",
        0xA2u,
        "{anonymous}::MinidumpWriter::MinidumpWriter(const char*, int, const google_breakpad::ExceptionHandler::CrashCont"
        "ext*, const MappingList&, const AppMemoryList&, bool, uintptr_t, bool, google_breakpad::LinuxDumper*)");
  }
  return result;
}
