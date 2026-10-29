/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_elf_debug_file_directory
// Address: 0x00067520

//----- (00067520) --------------------------------------------------------
char *get_elf_debug_file_directory()
{
  int v0; // r0
  size_t v1; // r5
  void *v2; // r2
  unsigned int v3; // r6

  if ( !byte_DE450 )
  {
    if ( !qgetenv("DEBUG_FILE_DIRECTORY", (int)&dword_DE444) )
      qgetenv("ELF_DEBUG_FILE_DIRECTORY", (int)&dword_DE444);
    if ( (unsigned int)dword_DE448 <= 1 )
    {
      v0 = _strlen_chk("/usr/lib/debug", 15);
      if ( v0 )
      {
        v1 = v0;
        v2 = (void *)dword_DE444;
        v3 = v0 + 1;
        if ( dword_DE44C < (unsigned int)(v0 + 1) )
        {
          v2 = qvector_reserve((int)&dword_DE444, (void *)dword_DE444, v3, 1u);
          dword_DE444 = (int)v2;
        }
        dword_DE448 = v3;
        memmove(v2, "/usr/lib/debug", v1);
        *(_BYTE *)(dword_DE444 + v1) = 0;
      }
      else
      {
        dword_DE448 = 0;
      }
    }
    byte_DE450 = 1;
  }
  if ( dword_DE448 )
    return (char *)dword_DE444;
  else
    return &byte_B3CBE;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// DE444: using guessed type int dword_DE444;
// DE448: using guessed type int dword_DE448;
// DE44C: using guessed type int dword_DE44C;
// DE450: using guessed type char byte_DE450;
