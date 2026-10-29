void *__fastcall google_breakpad::LineReader::PopLine(google_breakpad::LineReader *this, unsigned int a2)
{
  if ( *((_DWORD *)this + 2) < a2 + 1 )
    __assert_fail(
      "buf_used_ >= len + 1",
      "./src/client/linux/minidump_writer/line_reader.h",
      0x73u,
      "void google_breakpad::LineReader::PopLine(unsigned int)");
  *((_DWORD *)this + 2) = *((_DWORD *)this + 2) - a2 - 1;
  return memmove((char *)this + 12, (char *)this + a2 + 13, *((unsigned int *)this + 2));
}

