__int64 __fastcall dwarf_object_read_random(__int64 fd, void *buf, size_t a3, size_t a4, size_t a5, _DWORD *a6)
{
  __int64 result; // rax

  if ( a3 >= a5 )
  {
    *a6 = 444;
    return 1;
  }
  if ( __CFADD__(a4, a3) || a5 < a4 + a3 )
  {
    *a6 = 445;
    return 1;
  }
  if ( (unsigned int)_dwarf_seekr(fd, a3, 0, 0) )
  {
    *a6 = 418;
    return 1;
  }
  result = _dwarf_readr(fd, buf, a4);
  if ( (_DWORD)result )
  {
    *a6 = 419;
    return 1;
  }
  return result;
}

