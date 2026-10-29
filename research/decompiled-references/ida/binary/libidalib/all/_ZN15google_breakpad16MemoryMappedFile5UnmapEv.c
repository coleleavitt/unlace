char __fastcall google_breakpad::MemoryMappedFile::Unmap(google_breakpad::MemoryMappedFile *this)
{
  char result; // al
  size_t v2; // rbx
  unsigned __int64 v3; // rax

  result = google_breakpad::MemoryRange::data(this) != 0;
  if ( result )
  {
    v2 = google_breakpad::MemoryRange::length(this);
    v3 = google_breakpad::MemoryRange::data(this);
    sub_1C2089(v3, v2);
    return google_breakpad::MemoryRange::Set(this, nullptr, 0);
  }
  return result;
}

