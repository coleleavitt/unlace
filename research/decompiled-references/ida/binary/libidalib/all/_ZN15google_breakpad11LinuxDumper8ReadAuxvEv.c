__int64 __fastcall google_breakpad::LinuxDumper::ReadAuxv(google_breakpad::LinuxDumper *this)
{
  __int64 v3; // rbx
  _QWORD v4[2]; // [rsp+10h] [rbp-130h] BYREF
  char v5[264]; // [rsp+20h] [rbp-120h] BYREF
  signed int v6; // [rsp+128h] [rbp-18h]
  unsigned __int8 v7; // [rsp+12Fh] [rbp-11h]

  if ( (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxDumper *, char *, _QWORD, const char *))(*(_QWORD *)this + 72LL))(
         this,
         v5,
         *((unsigned int *)this + 2),
         "auxv") != 1 )
    return 0;
  v6 = sub_1ADB9E(v5, 0, 0);
  if ( v6 < 0 )
    return 0;
  v7 = 0;
  while ( sub_1ADBFF(v6, (char *)v4, 0x10u) == 16 && v4[0] )
  {
    if ( v4[0] <= 0x21u )
    {
      v3 = v4[1];
      *(_QWORD *)std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::operator[](
                   (char *)this + 208,
                   v4[0]) = v3;
      v7 = 1;
    }
  }
  sub_1ADAB0(v6);
  return v7;
}

