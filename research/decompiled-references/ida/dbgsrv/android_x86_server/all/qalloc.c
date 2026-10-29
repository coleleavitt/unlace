/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc
// Address: 0x000B0B30

//----- (000B0B30) --------------------------------------------------------
void *__cdecl qalloc(int size)
{
  void *result; // eax

  result = nullptr;
  if ( size )
  {
    if ( size <= 0 )
    {
      *(_DWORD *)__errno(size) = 12;
    }
    else
    {
      result = malloc(size);
      if ( result )
        return result;
    }
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
