bool __fastcall dyld3::MachOAnalyzer::isOSBinary(dyld3::MachOAnalyzer *this, int a2, __int64 a3)
{
  _BOOL4 hasCodeSignature; // w8
  _BOOL8 result; // x0
  __int64 v8; // [xsp+8h] [xbp-68h] BYREF
  __int64 v9; // [xsp+10h] [xbp-60h]
  unsigned int v10[2]; // [xsp+18h] [xbp-58h] BYREF
  _QWORD v11[7]; // [xsp+20h] [xbp-50h] BYREF

  if ( a2 == -1 )
    return 0;
  *(_QWORD *)v10 = 0;
  hasCodeSignature = dyld3::MachOFile::hasCodeSignature(this, &v10[1], v10);
  result = 0;
  if ( !hasCodeSignature )
    return result;
  v11[0] = a3;
  v11[1] = v10[1];
  v11[2] = v10[0];
  if ( fcntl(a2, 97, v11) == -1 )
    return 0;
  v9 = 1;
  v8 = a3;
  return fcntl(a2, 105, &v8) != -1 && HIDWORD(v9) != 0;
}
