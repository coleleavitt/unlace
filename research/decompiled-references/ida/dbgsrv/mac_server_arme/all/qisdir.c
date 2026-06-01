/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisdir
// Address: 0x0000000100073B80

//----- (0000000100073B80) ----------------------------------------------------
bool __fastcall qisdir(const char *a1)
{
  stat v3; // [xsp+8h] [xbp-98h] BYREF

  return !stat(a1, &v3) && (v3.st_mode & 0xF000) == 0x4000;
}
