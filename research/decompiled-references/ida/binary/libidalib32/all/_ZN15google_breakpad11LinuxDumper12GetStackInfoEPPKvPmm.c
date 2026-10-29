__int64 __fastcall google_breakpad::LinuxDumper::GetStackInfo(
        google_breakpad::LinuxDumper *this,
        const void **a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v5; // rax
  _QWORD *Mapping; // [rsp+38h] [rbp-18h]
  void *v8; // [rsp+40h] [rbp-10h]

  v8 = (void *)(a4 & -(__int64)getpagesize());
  Mapping = (_QWORD *)google_breakpad::LinuxDumper::FindMapping(this, v8);
  if ( !Mapping )
    return 0;
  if ( (__int64)(Mapping[1] - ((unsigned __int64)v8 - *Mapping)) > 0x8000 )
    v5 = 0x8000;
  else
    v5 = Mapping[1] - ((unsigned __int64)v8 - *Mapping);
  *a3 = v5;
  *a2 = v8;
  return 1;
}

