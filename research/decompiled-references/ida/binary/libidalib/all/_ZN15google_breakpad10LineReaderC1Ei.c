// Alternative name is '_ZN15google_breakpad10LineReaderC2Ei'
google_breakpad::LineReader *__fastcall google_breakpad::LineReader::LineReader(
        google_breakpad::LineReader *this,
        int a2)
{
  *(_DWORD *)this = a2;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}

