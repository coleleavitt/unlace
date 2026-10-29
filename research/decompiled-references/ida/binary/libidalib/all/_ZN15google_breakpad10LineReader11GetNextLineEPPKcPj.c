__int64 __fastcall google_breakpad::LineReader::GetNextLine(
        google_breakpad::LineReader *this,
        const char **a2,
        unsigned int *a3)
{
  __int64 v5; // [rsp+20h] [rbp-10h]
  unsigned int i; // [rsp+2Ch] [rbp-4h]

  while ( 1 )
  {
    if ( !*((_DWORD *)this + 2) && *((_BYTE *)this + 4) )
      return 0;
    for ( i = 0; i < *((_DWORD *)this + 2); ++i )
    {
      if ( *((_BYTE *)this + i + 12) == 10 || !*((_BYTE *)this + i + 12) )
      {
        *((_BYTE *)this + i + 12) = 0;
        *a3 = i;
        *a2 = (char *)this + 12;
        return 1;
      }
    }
    if ( *((_DWORD *)this + 2) == 512 )
      return 0;
    if ( *((_BYTE *)this + 4) )
      break;
    v5 = sub_1ADBFF(
           *(_DWORD *)this,
           (char *)this + *((unsigned int *)this + 2) + 12,
           512LL - *((unsigned int *)this + 2));
    if ( v5 < 0 )
      return 0;
    if ( v5 )
      *((_DWORD *)this + 2) += v5;
    else
      *((_BYTE *)this + 4) = 1;
  }
  if ( !*((_DWORD *)this + 2) )
    __assert_fail(
      "buf_used_",
      "./src/client/linux/minidump_writer/line_reader.h",
      0x56u,
      "bool google_breakpad::LineReader::GetNextLine(const char**, unsigned int*)");
  *((_BYTE *)this + *((unsigned int *)this + 2) + 12) = 0;
  *a3 = (*((_DWORD *)this + 2))++;
  *a2 = (char *)this + 12;
  return 1;
}

