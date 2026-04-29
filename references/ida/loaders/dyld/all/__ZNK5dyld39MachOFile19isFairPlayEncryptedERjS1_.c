__int64 __fastcall dyld3::MachOFile::isFairPlayEncrypted(dyld3::MachOFile *this, unsigned int *a2, unsigned int *a3)
{
  _DWORD *FairPlayEncryptionLoadCommand; // x0
  unsigned int v6; // w8
  __int64 result; // x0

  FairPlayEncryptionLoadCommand = (_DWORD *)dyld3::MachOFile::findFairPlayEncryptionLoadCommand(this);
  if ( FairPlayEncryptionLoadCommand && FairPlayEncryptionLoadCommand[4] == 1 )
  {
    *a2 = FairPlayEncryptionLoadCommand[2];
    v6 = FairPlayEncryptionLoadCommand[3];
    result = 1;
  }
  else
  {
    v6 = 0;
    result = 0;
    *a2 = 0;
  }
  *a3 = v6;
  return result;
}
