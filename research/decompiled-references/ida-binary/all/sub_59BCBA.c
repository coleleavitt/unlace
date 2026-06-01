void *__fastcall sub_59BCBA(__int64 a1, unsigned int a2)
{
  if ( *(_DWORD *)(a1 + 8) < a2 + 1 )
    __assert_fail(
      "buf_used_ >= len + 1",
      "./src/client/linux/minidump_writer/line_reader.h",
      0x73u,
      "void google_breakpad::LineReader::PopLine(unsigned int)");
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 8) - a2 - 1;
  return memmove((void *)(a1 + 12), (const void *)(a1 + 12 + a2 + 1LL), *(unsigned int *)(a1 + 8));
}
