/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_elf_debug_file_directory
// Address: 0x000000000009DA78

//----- (000000000009DA78) ----------------------------------------------------
char *get_elf_debug_file_directory()
{
  __int64 v0; // x0
  void *v1; // x8
  unsigned __int64 v2; // x21
  size_t v3; // x20

  if ( (byte_166C18 & 1) == 0 )
  {
    if ( (qgetenv("DEBUG_FILE_DIRECTORY", (__int64)&qword_166C00) & 1) == 0 )
      qgetenv("ELF_DEBUG_FILE_DIRECTORY", (__int64)&qword_166C00);
    if ( (unsigned __int64)qword_166C08 <= 1 )
    {
      v0 = __strlen_chk("/usr/lib/debug", 15);
      if ( v0 )
      {
        v1 = (void *)qword_166C00;
        v2 = v0 + 1;
        v3 = v0;
        if ( qword_166C10 < (unsigned __int64)(v0 + 1) )
        {
          v1 = qvector_reserve((pthread_mutex_t *)&qword_166C00, (void *)qword_166C00, v2, 1u);
          qword_166C00 = (__int64)v1;
        }
        qword_166C08 = v2;
        memmove(v1, "/usr/lib/debug", v3);
        *(_BYTE *)(qword_166C00 + v3) = 0;
      }
      else
      {
        qword_166C08 = 0;
      }
    }
    byte_166C18 = 1;
  }
  if ( qword_166C08 )
    return (char *)qword_166C00;
  else
    return &byte_F154B;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 166C00: using guessed type __int64 qword_166C00;
// 166C08: using guessed type __int64 qword_166C08;
// 166C10: using guessed type __int64 qword_166C10;
// 166C18: using guessed type char byte_166C18;
