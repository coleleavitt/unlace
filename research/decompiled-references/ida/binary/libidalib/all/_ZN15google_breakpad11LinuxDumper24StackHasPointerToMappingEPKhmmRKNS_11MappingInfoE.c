__int64 __fastcall google_breakpad::LinuxDumper::StackHasPointerToMapping(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *i; // [rsp+50h] [rbp-8h]

  for ( i = (_QWORD *)(a2 + ((a4 + 7) & 0xFFFFFFFFFFFFFFF8LL)); (unsigned __int64)i <= a3 - 8 + a2; ++i )
  {
    if ( *(_QWORD *)(a5 + 16) <= *i && *(_QWORD *)(a5 + 24) >= *i )
      return 1;
  }
  return 0;
}

