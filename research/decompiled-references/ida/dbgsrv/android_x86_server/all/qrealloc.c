/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc
// Address: 0x000B0B80

//----- (000B0B80) --------------------------------------------------------
void *__cdecl qrealloc(void *ptr, int size)
{
  void *result; // eax

  if ( size )
  {
    if ( size <= 0 )
    {
      *(_DWORD *)__errno(size) = 12;
    }
    else
    {
      result = realloc(ptr, size);
      if ( result )
        return result;
    }
    set_qerrno(1);
  }
  else
  {
    free(ptr);
  }
  return nullptr;
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
