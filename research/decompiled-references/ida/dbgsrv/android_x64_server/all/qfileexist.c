/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfileexist
// Address: 0x00000000000C1F00

//----- (00000000000C1F00) ----------------------------------------------------
bool __fastcall qfileexist(const char *a1)
{
  struct stat64 v2; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v3; // [rsp+90h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  return !stat64(a1, &v2) && (v2.st_mode & 0xF000) != 0x4000;
}
