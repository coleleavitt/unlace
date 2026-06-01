__int64 __fastcall google_breakpad::LinuxDumper::HandleDeletedFileInMapping(
        google_breakpad::LinuxDumper *this,
        char *a2)
{
  struct stat v4; // [rsp+10h] [rbp-1360h] BYREF
  struct stat v5; // [rsp+A0h] [rbp-12D0h] BYREF
  char v6[4096]; // [rsp+130h] [rbp-1240h] BYREF
  _BYTE v7[304]; // [rsp+1130h] [rbp-240h] BYREF
  _QWORD v8[33]; // [rsp+1260h] [rbp-110h] BYREF
  unsigned __int64 v9; // [rsp+1368h] [rbp-8h]

  v9 = my_strlen(a2);
  if ( v9 <= 0xB )
    return 0;
  if ( (unsigned int)my_strncmp(&a2[v9 - 10], " (deleted)", 10) )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxDumper *, _QWORD *, _QWORD, void *))(*(_QWORD *)this + 72LL))(
         this,
         v8,
         *((unsigned int *)this + 2),
         &unk_1D9BD0) != 1 )
    return 0;
  memset(v7, 0, 0x128u);
  if ( (unsigned __int8)google_breakpad::SafeReadLink<255ul>(v8, &v7[41]) != 1 )
    return 0;
  if ( (unsigned __int8)google_breakpad::LinuxDumper::GetMappingAbsolutePath(this, v7, v6) != 1 )
    return 0;
  if ( (unsigned int)my_strcmp(a2, v6) )
    return 0;
  if ( !(unsigned int)sub_1ADC5F((const char *)v8, &v5)
    && !(unsigned int)sub_1ADC5F(v6, &v4)
    && v5.st_dev == v4.st_dev
    && v5.st_ino == v4.st_ino )
  {
    return 0;
  }
  *(_QWORD *)a2 = v8[0];
  *(_QWORD *)(a2 + 247) = *(_QWORD *)((char *)&v8[30] + 7);
  qmemcpy(
    (void *)((unsigned __int64)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)v8 - &a2[-((unsigned __int64)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
    8LL * ((((_DWORD)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 255) & 0xFFFFFFF8) >> 3));
  return 1;
}

