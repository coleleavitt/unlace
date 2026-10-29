_BYTE *__fastcall dwarf_memcpy_swap_bytes(void *a1, char *a2, size_t a3)
{
  _BYTE *result; // rax
  char v4; // dl

  if ( a3 > 8 )
    return memcpy(a1, a2, a3);
  result = (_BYTE *)(a3 - 1);
  if ( a3 )
  {
    do
    {
      v4 = *a2++;
      (result--)[(_QWORD)a1] = v4;
    }
    while ( result != (_BYTE *)-1LL );
  }
  return result;
}

