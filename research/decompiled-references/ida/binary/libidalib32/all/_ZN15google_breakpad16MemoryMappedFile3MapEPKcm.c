__int64 __fastcall google_breakpad::MemoryMappedFile::Map(
        google_breakpad::MemoryMappedFile *this,
        const char *a2,
        unsigned __int64 a3)
{
  struct stat v6; // [rsp+20h] [rbp-B0h] BYREF
  void *v7; // [rsp+B0h] [rbp-20h]
  unsigned __int64 v8; // [rsp+B8h] [rbp-18h]
  __off_t st_size; // [rsp+C0h] [rbp-10h]
  unsigned int v10; // [rsp+CCh] [rbp-4h]

  google_breakpad::MemoryMappedFile::Unmap(this);
  v10 = sub_1C14E3(a2, 2048, 0);
  if ( v10 == -1 )
    return 0;
  if ( (unsigned int)sub_1C142E(v10, &v6) == -1 || v6.st_size < 0 )
  {
    sub_1C13DE(v10);
    return 0;
  }
  else
  {
    st_size = v6.st_size;
    if ( a3 < v6.st_size )
    {
      v8 = st_size - a3;
      v7 = (void *)sub_1C1544(0, st_size - a3, 1, 2, v10, a3);
      sub_1C13DE(v10);
      if ( v7 == (void *)-1LL )
      {
        return 0;
      }
      else
      {
        google_breakpad::MemoryRange::Set(this, v7, v8);
        return 1;
      }
    }
    else
    {
      sub_1C13DE(v10);
      return 1;
    }
  }
}

