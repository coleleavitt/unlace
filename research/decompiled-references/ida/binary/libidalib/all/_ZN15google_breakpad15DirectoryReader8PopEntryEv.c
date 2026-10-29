__int64 __fastcall google_breakpad::DirectoryReader::PopEntry(google_breakpad::DirectoryReader *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 2);
  if ( (_DWORD)result )
  {
    *((_DWORD *)this + 2) -= *((unsigned __int16 *)this + 14);
    return (__int64)memmove(
                      (char *)this + 12,
                      (char *)this + *((unsigned __int16 *)this + 14) + 12,
                      *((unsigned int *)this + 2));
  }
  return result;
}

