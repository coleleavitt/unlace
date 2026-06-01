/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfileexist
// Address: 0x000AF800

//----- (000AF800) --------------------------------------------------------
bool __cdecl qfileexist(char *file)
{
  struct stat buf; // [esp+0h] [ebp-74h] BYREF
  unsigned int v3; // [esp+60h] [ebp-14h]

  v3 = __readgsdword(0x14u);
  return !stat(file, &buf) && (buf.st_mode & 0xF000) != 0x4000;
}
