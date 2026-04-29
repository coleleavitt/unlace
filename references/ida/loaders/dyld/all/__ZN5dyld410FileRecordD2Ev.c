void __fastcall dyld4::FileRecord::~FileRecord(dyld4::FileRecord *this)
{
  int v2; // w0

  v2 = *((_DWORD *)this + 16);
  if ( v2 != -1 )
  {
    close(v2);
    *((_DWORD *)this + 16) = -1;
  }
  lsl::UniquePtr<char const>::~UniquePtr((char *)this + 40);
}
