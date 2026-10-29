// Alternative name is '_ZN15google_breakpad15DirectoryReaderC2Ei'
google_breakpad::DirectoryReader *__fastcall google_breakpad::DirectoryReader::DirectoryReader(
        google_breakpad::DirectoryReader *this,
        int a2)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  return this;
}

