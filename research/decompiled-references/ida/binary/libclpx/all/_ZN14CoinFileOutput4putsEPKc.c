bool __fastcall CoinFileOutput::puts(FILE **this, const char *a2)
{
  unsigned int v2; // ebx
  bool result; // al
  char *IO_read_end; // rax
  int v5; // eax

  v2 = strlen(a2);
  result = 1;
  if ( v2 )
  {
    IO_read_end = (*this)->_IO_read_end;
    if ( IO_read_end == (char *)CoinPlainFileOutput::write )
      v5 = fwrite(a2, 1u, (int)v2, *(this + 3));
    else
      v5 = ((__int64 (__fastcall *)(FILE **, const char *, _QWORD))IO_read_end)(this, a2, v2);
    return v2 == v5;
  }
  return result;
}

