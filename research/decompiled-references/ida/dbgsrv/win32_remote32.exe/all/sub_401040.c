/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401040
// Address: 0x00401040

//----- (00401040) --------------------------------------------------------
struct _OSVERSIONINFOA *sub_401040()
{
  BOOL Version; // eax
  bool v1; // zf
  bool v2; // cc

  VersionInformation.dwOSVersionInfoSize = 148;
  Version = GetVersionExA(&VersionInformation);
  byte_4B6ABD = 0;
  v1 = VersionInformation.dwMajorVersion == 5;
  v2 = VersionInformation.dwMajorVersion <= 5;
  byte_4B6ABC = Version;
  if ( !v2 || v1 && VersionInformation.dwMinorVersion )
  {
    GetCurrentProcess();
    byte_4B6ABD = 0;
  }
  return &VersionInformation;
}
// 4B6ABC: using guessed type char byte_4B6ABC;
// 4B6ABD: using guessed type char byte_4B6ABD;
