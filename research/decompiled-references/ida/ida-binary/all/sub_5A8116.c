__int64 __fastcall sub_5A8116(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+1Ch] [rbp-24h]
  __off_t length; // [rsp+20h] [rbp-20h]
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]
  unsigned __int64 v6; // [rsp+30h] [rbp-10h]
  unsigned __int64 v7; // [rsp+38h] [rbp-8h]

  if ( !a2 )
    __assert_fail(
      "size",
      "src/client/minidump_file_writer.cc",
      0x112u,
      "MDRVA google_breakpad::MinidumpFileWriter::Allocate(size_t)");
  if ( *(_DWORD *)a1 == -1 )
    __assert_fail(
      "file_ != -1",
      "src/client/minidump_file_writer.cc",
      0x113u,
      "MDRVA google_breakpad::MinidumpFileWriter::Allocate(size_t)");
  v6 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6 + *(unsigned int *)(a1 + 8) > *(_QWORD *)(a1 + 16) )
  {
    v7 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v5 = getpagesize();
    if ( v6 < v5 )
      v7 = v5;
    length = *(_QWORD *)(a1 + 16) + v7;
    if ( ftruncate(*(_DWORD *)a1, length) )
      return 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 16) = length;
  }
  v3 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v3 + v6;
  return v3;
}
