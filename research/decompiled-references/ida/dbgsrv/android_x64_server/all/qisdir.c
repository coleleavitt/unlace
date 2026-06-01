/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisdir
// Address: 0x00000000000C2080

//----- (00000000000C2080) ----------------------------------------------------
bool __fastcall qisdir(const char *a1)
{
  struct stat64 v2; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v3; // [rsp+90h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  return !stat64(a1, &v2) && (v2.st_mode & 0xF000) == 0x4000;
}
