// Alternative name is '_ZN15google_breakpad16MemoryMappedFileD2Ev'
void __fastcall google_breakpad::MemoryMappedFile::~MemoryMappedFile(google_breakpad::MemoryMappedFile *this)
{
  google_breakpad::MemoryMappedFile::Unmap(this);
}

