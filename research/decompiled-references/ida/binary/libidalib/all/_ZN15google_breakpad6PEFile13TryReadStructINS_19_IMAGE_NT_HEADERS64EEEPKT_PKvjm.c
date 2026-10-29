__int64 __fastcall google_breakpad::PEFile::TryReadStruct<google_breakpad::_IMAGE_NT_HEADERS64>(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3)
{
  if ( a3 > (unsigned __int64)a2 + 264 )
    return a2 + a1;
  else
    return 0;
}

