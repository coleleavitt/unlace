/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfileexist
// Address: 0x000000010006EAF8

//----- (000000010006EAF8) ----------------------------------------------------
bool __fastcall qfileexist(const char *a1)
{
  bool v1; // zf
  stat v3; // [xsp+8h] [xbp-98h] BYREF

  if ( stat(a1, &v3) )
    v1 = 1;
  else
    v1 = (v3.st_mode & 0xF000) == 0x4000;
  return !v1;
}
