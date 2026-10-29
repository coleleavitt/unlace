__int64 __fastcall google_breakpad::elf::FileID::ElfFileIdentifier(std::string *a1, __int64 a2)
{
  const char *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+10h] [rbp-20h] BYREF

  v2 = (const char *)std::string::c_str(a1);
  google_breakpad::MemoryMappedFile::MemoryMappedFile((google_breakpad::MemoryMappedFile *)v6, v2, 0);
  if ( google_breakpad::MemoryMappedFile::data((google_breakpad::MemoryMappedFile *)v6) )
  {
    v4 = google_breakpad::MemoryMappedFile::data((google_breakpad::MemoryMappedFile *)v6);
    v3 = google_breakpad::elf::FileID::ElfFileIdentifierFromMappedFile(v4, a2);
  }
  else
  {
    v3 = 0;
  }
  google_breakpad::MemoryMappedFile::~MemoryMappedFile((google_breakpad::MemoryMappedFile *)v6);
  return v3;
}

