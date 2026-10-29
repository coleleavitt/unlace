__int64 __fastcall google_breakpad::LinuxDumper::ElfFileIdentifierForMapping(
        _DWORD *a1,
        __int64 *a2,
        char a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  char v14[16]; // [rsp+20h] [rbp-1030h] BYREF
  char v15[4102]; // [rsp+30h] [rbp-1020h] BYREF
  unsigned __int8 v16; // [rsp+1036h] [rbp-1Ah]
  char v17; // [rsp+1037h] [rbp-19h]
  __int64 v18; // [rsp+1038h] [rbp-18h]

  if ( a3 == 1
    && a4 >= (unsigned __int64)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size(a1 + 40) )
  {
    __assert_fail(
      "!member || mapping_id < mappings_.size()",
      "src/client/linux/minidump_writer/linux_dumper.cc",
      0x146u,
      "bool google_breakpad::LinuxDumper::ElfFileIdentifierForMapping(const google_breakpad::MappingInfo&, bool, unsigned"
      " int, google_breakpad::wasteful_vector<unsigned char>&)");
  }
  if ( sub_1ADD4B((__int64)a2) )
  {
    return 0;
  }
  else if ( (unsigned int)my_strcmp((char *)a2 + 41, "linux-gate.so") )
  {
    if ( (unsigned __int8)google_breakpad::LinuxDumper::GetMappingAbsolutePath(a1, a2, v15) != 1 )
    {
      return 0;
    }
    else
    {
      v17 = google_breakpad::LinuxDumper::HandleDeletedFileInMapping((google_breakpad::LinuxDumper *)a1, v15);
      google_breakpad::MemoryMappedFile::MemoryMappedFile((google_breakpad::MemoryMappedFile *)v14, v15, 0);
      if ( !google_breakpad::MemoryMappedFile::data((google_breakpad::MemoryMappedFile *)v14)
        || (unsigned __int64)google_breakpad::MemoryMappedFile::size((google_breakpad::MemoryMappedFile *)v14) <= 3 )
      {
        v5 = 0;
      }
      else
      {
        v8 = google_breakpad::MemoryMappedFile::data((google_breakpad::MemoryMappedFile *)v14);
        v16 = google_breakpad::elf::FileID::ElfFileIdentifierFromMappedFile(v8, a5);
        if ( v16 && a3 && v17 )
        {
          v9 = *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                            a1 + 40,
                            a4);
          *(_BYTE *)(v9 + my_strlen((char *)a2 + 41) - 10 + 41) = 0;
        }
        v5 = v16;
      }
      google_breakpad::MemoryMappedFile::~MemoryMappedFile((google_breakpad::MemoryMappedFile *)v14);
    }
  }
  else
  {
    v18 = 0;
    v6 = a1[2];
    if ( v6 == (unsigned int)sub_1ADB00() )
    {
      v18 = *a2;
    }
    else
    {
      v18 = google_breakpad::PageAllocator::Alloc((google_breakpad::PageAllocator *)(a1 + 18), a2[1]);
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        v18,
        (unsigned int)a1[2],
        *a2,
        a2[1]);
    }
    return (unsigned int)google_breakpad::elf::FileID::ElfFileIdentifierFromMappedFile(v18, a5);
  }
  return v5;
}

