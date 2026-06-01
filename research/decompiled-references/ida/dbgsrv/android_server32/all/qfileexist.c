/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfileexist
// Address: 0x0007DE78

//----- (0007DE78) --------------------------------------------------------
int __fastcall qfileexist(const char *a1)
{
  struct stat v2; // [sp+0h] [bp-70h] BYREF

  if ( stat(a1, &v2) )
    return 0;
  else
    return (v2.st_mode & 0xF000) - 0x4000 - ((v2.st_mode & 0xF000) - 16385 + ((v2.st_mode & 0xF000) == 0x4000));
}
