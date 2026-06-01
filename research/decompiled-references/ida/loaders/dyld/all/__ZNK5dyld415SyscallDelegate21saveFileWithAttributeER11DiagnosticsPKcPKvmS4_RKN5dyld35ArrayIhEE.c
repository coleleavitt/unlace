__int64 __fastcall dyld4::SyscallDelegate::saveFileWithAttribute(
        int a1,
        Diagnostics *a2,
        const std::__fs::filesystem::path *__source,
        const void *a4,
        size_t a5,
        const char *a6,
        __int64 a7)
{
  unsigned int v13; // w0
  char v14; // w8
  unsigned int v15; // w8
  char v16; // w8
  char v17; // w8
  char v18; // w8
  char v19; // w8
  unsigned int v20; // w8
  char v21; // w8
  char v22; // w8
  char v23; // w8
  int v24; // w0
  int v25; // w25
  std::error_code *v26; // x2
  int v27; // w0
  char __sourcea[16]; // [xsp+18h] [xbp-468h] BYREF
  std::__fs::filesystem::path __dst[42]; // [xsp+28h] [xbp-458h] BYREF

  strlcpy((char *)__dst, (const char *)__source, 0x400u);
  v13 = __getpid();
  __sourcea[0] = 46;
  if ( HIBYTE(v13) >= 0xA0u )
    v14 = (v13 >> 28) + 55;
  else
    v14 = (v13 >> 28) | 0x30;
  __sourcea[1] = v14;
  v15 = HIBYTE(v13) & 0xF;
  if ( v15 >= 0xA )
    v16 = v15 + 55;
  else
    v16 = v15 | 0x30;
  __sourcea[2] = v16;
  if ( BYTE2(v13) >= 0xA0u )
    v17 = ((v13 >> 20) & 0xF) + 55;
  else
    v17 = (v13 >> 20) & 0xF | 0x30;
  __sourcea[3] = v17;
  if ( (HIWORD(v13) & 0xF) >= 0xAu )
    v18 = (BYTE2(v13) & 0xF) + 55;
  else
    v18 = BYTE2(v13) & 0xF | 0x30;
  __sourcea[4] = v18;
  if ( BYTE1(v13) >= 0xA0u )
    v19 = ((unsigned __int16)v13 >> 12) + 55;
  else
    v19 = ((unsigned __int16)v13 >> 12) | 0x30;
  __sourcea[5] = v19;
  v20 = (v13 >> 8) & 0xF;
  if ( v20 >= 0xA )
    v21 = v20 + 55;
  else
    v21 = v20 | 0x30;
  __sourcea[6] = v21;
  if ( (unsigned __int8)v13 >= 0xA0u )
    v22 = ((unsigned __int8)v13 >> 4) + 55;
  else
    v22 = ((unsigned __int8)v13 >> 4) | 0x30;
  __sourcea[7] = v22;
  if ( (v13 & 0xF) >= 0xA )
    v23 = (v13 & 0xF) + 55;
  else
    v23 = v13 & 0xF | 0x30;
  __sourcea[8] = v23;
  __sourcea[9] = 0;
  strlcat((char *)__dst, __sourcea, 0x400u);
  v24 = open_dprotected_np((const char *)__dst, 513, 4, 0, 384);
  if ( v24 == -1 )
  {
    __error();
    Diagnostics::error(a2, "open/open_dprotected_np(%s) failed, errno=%d");
  }
  else
  {
    v25 = v24;
    if ( ftruncate(v24, a5) == -1 )
    {
      __error();
      Diagnostics::error(a2, "ftruncate(%lu) failed, errno=%d");
    }
    else if ( write(v25, a4, a5) == a5 )
    {
      if ( fsetxattr(v25, a6, *(const void **)a7, *(_QWORD *)(a7 + 16), 0, 0) == -1 )
      {
        __error();
        Diagnostics::error(a2, "fsetxattr(%s) failed, errno=%d");
      }
      else if ( fchmod(v25, 0x100u) == -1 )
      {
        __error();
        Diagnostics::error(a2, "fchmod(S_IRUSR) failed, errno=%d");
      }
      else if ( close(v25) == -1 )
      {
        __error();
        Diagnostics::error(a2, "close() failed, errno=%d");
      }
      else
      {
        rename(__dst, __source, v26);
        if ( v27 != -1 )
          return 1;
        __error();
        Diagnostics::error(a2, "rename(%s, %s) failed, errno=%d");
      }
    }
    else
    {
      __error();
      Diagnostics::error(a2, "write() failed, errno=%d");
    }
  }
  return 0;
}
