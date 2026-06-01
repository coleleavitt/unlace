void *__cdecl mmap(void *a1, size_t a2, int a3, int a4, int a5, off_t a6)
{
  __int64 v6; // x30
  int v7; // w3

  if ( (a4 & 2) != 0 )
  {
    if ( a2 )
      goto LABEL_4;
LABEL_8:
    cerror_nocancel(22);
    return (void *)-1LL;
  }
  if ( !a2 || (a4 & 1) == 0 )
    goto LABEL_8;
LABEL_4:
  v7 = a4 | 0x40000;
  if ( ((v6 ^ (2 * v6)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return __mmap(a1, a2, a3, v7, a5, a6);
}
