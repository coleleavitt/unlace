/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfileexist
// Address: 0x00000000000BD2D4

//----- (00000000000BD2D4) ----------------------------------------------------
bool __fastcall qfileexist(const char *a1)
{
  struct stat64 buf; // [xsp+8h] [xbp-98h] BYREF

  buf.__unused[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  return !stat64(a1, &buf) && (buf.st_nlink & 0xF000) != 0x4000;
}
