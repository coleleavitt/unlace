__int64 __fastcall sub_1AE6C8(__int64 a1, __int64 a2, const void *a3, char *a4)
{
  unsigned int v4; // ebx
  google_breakpad *v6; // rax
  char v10[16]; // [rsp+20h] [rbp-1020h] BYREF
  char v11[4112]; // [rsp+30h] [rbp-1010h] BYREF

  if ( sub_1ADD4B(a2) )
  {
    return 0;
  }
  else if ( (unsigned __int8)google_breakpad::LinuxDumper::GetMappingAbsolutePath(a1, a2, v11) != 1 )
  {
    return 0;
  }
  else
  {
    google_breakpad::MemoryMappedFile::MemoryMappedFile((google_breakpad::MemoryMappedFile *)v10, v11, 0);
    if ( !google_breakpad::MemoryMappedFile::data((google_breakpad::MemoryMappedFile *)v10)
      || (unsigned __int64)google_breakpad::MemoryMappedFile::size((google_breakpad::MemoryMappedFile *)v10) <= 3 )
    {
      v4 = 0;
    }
    else
    {
      v6 = (google_breakpad *)google_breakpad::MemoryMappedFile::data((google_breakpad::MemoryMappedFile *)v10);
      v4 = google_breakpad::ElfFileSoNameFromMappedFile(v6, a3, a4, (unsigned __int64)v6);
    }
    google_breakpad::MemoryMappedFile::~MemoryMappedFile((google_breakpad::MemoryMappedFile *)v10);
  }
  return v4;
}

