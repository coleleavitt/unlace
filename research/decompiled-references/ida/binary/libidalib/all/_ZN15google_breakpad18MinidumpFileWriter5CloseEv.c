_BOOL8 __fastcall google_breakpad::MinidumpFileWriter::Close(google_breakpad::MinidumpFileWriter *this)
{
  bool v2; // [rsp+1Fh] [rbp-1h]

  v2 = 1;
  if ( *(_DWORD *)this != -1 )
  {
    if ( ftruncate(*(_DWORD *)this, *((unsigned int *)this + 2)) )
      return 0;
    v2 = (unsigned int)sub_1BBAA4(*(_DWORD *)this) == 0;
    *(_DWORD *)this = -1;
  }
  return v2;
}

