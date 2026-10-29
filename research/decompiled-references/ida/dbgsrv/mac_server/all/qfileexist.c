/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfileexist
// Address: 0x000000010007C350

//----- (000000010007C350) ----------------------------------------------------
bool __fastcall qfileexist(const char *a1)
{
  int v1; // eax
  stat v3; // [rsp+8h] [rbp-98h] BYREF

  v1 = stat_INODE64(a1, &v3);
  return (v3.st_mode & 0xF000) != 0x4000 && v1 == 0;
}
