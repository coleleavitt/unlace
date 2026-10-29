/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisdir
// Address: 0x0007DF60

//----- (0007DF60) --------------------------------------------------------
bool __fastcall qisdir(const char *a1)
{
  struct stat v2; // [sp+0h] [bp-70h] BYREF

  return !stat(a1, &v2) && (v2.st_mode & 0xF000) == 0x4000;
}
