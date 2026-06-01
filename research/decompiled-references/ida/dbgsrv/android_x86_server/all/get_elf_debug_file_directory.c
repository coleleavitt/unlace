/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_elf_debug_file_directory
// Address: 0x0008E950

//----- (0008E950) --------------------------------------------------------
char *get_elf_debug_file_directory()
{
  int v0; // eax
  unsigned int v1; // esi
  bool v2; // cf
  void *v3; // eax
  size_t v5; // [esp+4h] [ebp-18h]

  if ( !byte_13BE3C )
  {
    if ( !(unsigned __int8)qgetenv("DEBUG_FILE_DIRECTORY", (int)&dword_13BE30) )
      qgetenv("ELF_DEBUG_FILE_DIRECTORY", (int)&dword_13BE30);
    if ( (unsigned int)dword_13BE34 <= 1 )
    {
      v0 = __strlen_chk("/usr/lib/debug", 15);
      if ( v0 )
      {
        v5 = v0;
        v1 = v0 + 1;
        v2 = dword_13BE38 < (unsigned int)(v0 + 1);
        v3 = (void *)dword_13BE30;
        if ( v2 )
        {
          v3 = qvector_reserve((int)&dword_13BE30, (void *)dword_13BE30, v1, 1u);
          dword_13BE30 = (int)v3;
        }
        dword_13BE34 = v1;
        memmove(v3, "/usr/lib/debug", v5);
        *(_BYTE *)(dword_13BE30 + v5) = 0;
      }
      else
      {
        dword_13BE34 = 0;
      }
    }
    byte_13BE3C = 1;
  }
  if ( dword_13BE34 )
    return (char *)dword_13BE30;
  else
    return byte_EF875;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13BE30: using guessed type int dword_13BE30;
// 13BE34: using guessed type int dword_13BE34;
// 13BE38: using guessed type int dword_13BE38;
// 13BE3C: using guessed type char byte_13BE3C;
