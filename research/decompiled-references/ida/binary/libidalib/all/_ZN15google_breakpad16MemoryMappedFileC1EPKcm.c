// Alternative name is '_ZN15google_breakpad16MemoryMappedFileC2EPKcm'
__int64 __fastcall google_breakpad::MemoryMappedFile::MemoryMappedFile(
        google_breakpad::MemoryMappedFile *this,
        const char *a2,
        unsigned __int64 a3)
{
  google_breakpad::MemoryRange::MemoryRange(this);
  return google_breakpad::MemoryMappedFile::Map(this, a2, a3);
}

