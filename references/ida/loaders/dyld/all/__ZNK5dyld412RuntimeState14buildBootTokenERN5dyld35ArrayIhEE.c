const char *__fastcall dyld4::RuntimeState::buildBootToken(__int64 a1, __int64 a2)
{
  const char *result; // x0
  __int64 v5; // x22
  unsigned __int8 *v6; // x21
  __int64 i; // x22
  char *v8; // x20
  size_t v9; // x0
  unsigned __int64 v10; // x20
  int v11; // w21
  unsigned int v12; // [xsp+Ch] [xbp-C4h] BYREF
  _BYTE v13[8]; // [xsp+10h] [xbp-C0h] BYREF
  unsigned __int8 v14[8]; // [xsp+18h] [xbp-B8h] BYREF
  __int64 v15; // [xsp+20h] [xbp-B0h]
  unsigned __int8 v16[128]; // [xsp+28h] [xbp-A8h] BYREF

  v12 = 0;
  result = (const char *)dyld4::ProcessConfig::Process::appleParam(
                           (dyld4::ProcessConfig::Process *)(*(_QWORD *)(a1 + 8) + 8LL),
                           "executable_boothash");
  if ( result )
  {
    result = (const char *)hexStringToBytes(result, v16, 0x80u, &v12);
    if ( (_DWORD)result )
    {
      v5 = v12;
      if ( v12 )
      {
        v6 = v16;
        do
        {
          dyld3::Array<unsigned char>::push_back(a2, v6++);
          --v5;
        }
        while ( v5 );
      }
      *(_QWORD *)v14 = 0;
      v15 = 0;
      if ( dyld3::MachOFile::getUuid((dyld3::MachOFile *)&dword_0, v14) )
      {
        for ( i = 0; i != 16; ++i )
          dyld3::Array<unsigned char>::push_back(a2, &v14[i]);
      }
      v8 = *(char **)(*(_QWORD *)(a1 + 8) + 24LL);
      v9 = _platform_strlen(v8);
      v10 = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)v13, (__int64 *)v8, v9);
      v11 = 8;
      do
      {
        v13[0] = v10;
        dyld3::Array<unsigned char>::push_back(a2, v13);
        v10 >>= 8;
        --v11;
      }
      while ( v11 );
      return (_BYTE *)(&dword_0 + 1);
    }
  }
  return result;
}
