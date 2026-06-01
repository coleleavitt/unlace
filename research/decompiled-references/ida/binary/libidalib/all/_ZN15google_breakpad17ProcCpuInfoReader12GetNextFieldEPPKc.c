__int64 __fastcall google_breakpad::ProcCpuInfoReader::GetNextField(
        google_breakpad::ProcCpuInfoReader *this,
        char **a2)
{
  unsigned int v5; // [rsp+1Ch] [rbp-24h] BYREF
  char *v6; // [rsp+20h] [rbp-20h] BYREF
  char *v7; // [rsp+28h] [rbp-18h]
  char *i; // [rsp+30h] [rbp-10h]
  char *v9; // [rsp+38h] [rbp-8h]

  while ( 1 )
  {
    if ( *((int *)this + 131) >= 0 )
    {
      google_breakpad::LineReader::PopLine(this, *((_DWORD *)this + 131));
      *((_DWORD *)this + 131) = -1;
    }
    if ( (unsigned __int8)google_breakpad::LineReader::GetNextLine(this, (const char **)&v6, &v5) != 1 )
      return 0;
    *((_DWORD *)this + 131) = v5;
    v7 = &v6[v5];
    v9 = (char *)my_memchr(v6, 58, v5);
    if ( v9 )
    {
      for ( i = v9 + 1; i < v7 && (unsigned int)my_isspace((unsigned int)*i); ++i )
        ;
      *((_QWORD *)this + 66) = i;
      *((_QWORD *)this + 67) = v7 - i;
      while ( v9 > v6 && (unsigned int)my_isspace((unsigned int)*(v9 - 1)) )
        --v9;
      if ( v9 != v6 )
        break;
    }
  }
  *v9 = 0;
  *a2 = v6;
  return 1;
}

