/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisdir
// Address: 0x000AF980

//----- (000AF980) --------------------------------------------------------
bool __cdecl qisdir(char *file)
{
  struct stat buf; // [esp+0h] [ebp-74h] BYREF
  unsigned int v3; // [esp+60h] [ebp-14h]

  v3 = __readgsdword(0x14u);
  return !stat(file, &buf) && (buf.st_mode & 0xF000) == 0x4000;
}
