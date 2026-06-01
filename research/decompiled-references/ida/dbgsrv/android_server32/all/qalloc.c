/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc
// Address: 0x0007E888

//----- (0007E888) --------------------------------------------------------
void *__fastcall qalloc(signed int size)
{
  void *result; // r0

  result = nullptr;
  if ( size )
  {
    if ( size <= 0 )
    {
      *(_DWORD *)_errno(0) = 12;
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
// 192F8: using guessed type int __fastcall _errno(_DWORD);
