// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1D804(_BYTE *a1, __int64 a2, dyld4::SyscallDelegate *a3)
{
  __int64 v3; // x29
  __int64 v4; // x30
  char isRestricted; // w22
  char isFairPlayEncrypted; // w0
  __int64 v10; // x20
  __int64 v11; // x22
  const char *v12; // x0
  bool v13; // zf
  _QWORD v15[5]; // [xsp-38h] [xbp-38h] BYREF
  __int64 v16; // [xsp-10h] [xbp-10h]
  __int64 v17; // [xsp-8h] [xbp-8h]

  v16 = v3;
  v17 = v4;
  v15[0] = 0;
  isRestricted = dyld3::MachOFile::isRestricted(*(dyld3::MachOFile **)a2);
  isFairPlayEncrypted = dyld3::MachOFile::isFairPlayEncrypted(
                          *(dyld3::MachOFile **)a2,
                          (unsigned int *)v15 + 1,
                          (unsigned int *)v15);
  v10 = dyld4::SyscallDelegate::amfiFlags(a3, isRestricted, isFairPlayEncrypted);
  v11 = *(_QWORD *)(a2 + 128);
  v12 = (const char *)_simple_getenv(*(_QWORD *)(a2 + 104), "DYLD_AMFI_FAKE");
  if ( v12 )
    v13 = (v11 & 2) == 0;
  else
    v13 = 1;
  if ( !v13 && *a1 )
    return hexToUInt64(v12, nullptr);
  return v10;
}
