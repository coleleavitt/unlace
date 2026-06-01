__int64 __fastcall sub_5A801E(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rax
  _BYTE v8[48]; // [rsp+20h] [rbp-30h] BYREF

  if ( !a2 )
    __assert_fail(
      "src",
      "src/client/minidump_file_writer.cc",
      0x102u,
      "bool google_breakpad::MinidumpFileWriter::WriteMemory(const void*, size_t, MDMemoryDescriptor*)");
  if ( !a4 )
    __assert_fail(
      "output",
      "src/client/minidump_file_writer.cc",
      0x103u,
      "bool google_breakpad::MinidumpFileWriter::WriteMemory(const void*, size_t, MDMemoryDescriptor*)");
  sub_5A4100((__int64)v8, a1);
  if ( (unsigned __int8)sub_5A8344(v8, a3) != 1 )
    return 0;
  v5 = sub_5A8486(v8);
  if ( (unsigned __int8)sub_5A4176((__int64)v8, a2, v5) != 1 )
    return 0;
  *a4 = a2;
  a4[1] = sub_5A4152((__int64)v8);
  return 1;
}
