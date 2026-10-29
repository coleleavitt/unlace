/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_elf_debug_file_directory
// Address: 0x00000000000A3F80

//----- (00000000000A3F80) ----------------------------------------------------
const char *get_elf_debug_file_directory()
{
  __int64 v0; // rax
  size_t v1; // r14
  void *v2; // rbx
  bool v3; // cf
  void *v4; // rax

  if ( !byte_155960 )
  {
    if ( !(unsigned __int8)qgetenv("DEBUG_FILE_DIRECTORY", (__int64)&dest) )
      qgetenv("ELF_DEBUG_FILE_DIRECTORY", (__int64)&dest);
    if ( (unsigned __int64)*(&dest + 1) <= 1 )
    {
      v0 = __strlen_chk("/usr/lib/debug", 15);
      if ( v0 )
      {
        v1 = v0;
        v2 = (void *)(v0 + 1);
        v3 = qword_155958 < (unsigned __int64)(v0 + 1);
        v4 = dest;
        if ( v3 )
        {
          v4 = qvector_reserve((__int64)&dest, (char *)dest, (unsigned __int64)v2, 1u);
          dest = v4;
        }
        *(&dest + 1) = v2;
        memmove(v4, "/usr/lib/debug", v1);
        *((_BYTE *)dest + v1) = 0;
      }
      else
      {
        *(&dest + 1) = nullptr;
      }
    }
    byte_155960 = 1;
  }
  if ( *(&dest + 1) )
    return (const char *)dest;
  else
    return s1;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 155958: using guessed type __int64 qword_155958;
// 155960: using guessed type char byte_155960;
