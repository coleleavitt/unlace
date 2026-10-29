__int64 __fastcall dwarf_seekr(int a1, __off_t a2, int a3, __off_t *a4)
{
  __off_t v5; // rax

  if ( a2 < 0 )
    return 1;
  v5 = lseek(a1, a2, a3);
  if ( v5 < 0 )
    return 1;
  if ( a4 )
    *a4 = v5;
  return 0;
}

