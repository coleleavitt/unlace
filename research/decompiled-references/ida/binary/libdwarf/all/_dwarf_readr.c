__int64 __fastcall dwarf_readr(int fd, char *buf, size_t nbytes, _QWORD *a4)
{
  size_t v7; // r14
  size_t v8; // rbx
  ssize_t v9; // rax

  if ( nbytes )
  {
    v7 = nbytes;
    while ( 1 )
    {
      v8 = 536866816;
      if ( v7 <= 0x1FFFF000 )
        v8 = v7;
      v9 = read(fd, buf, v8);
      if ( v9 < 0 || v8 != v9 )
        return 1;
      buf += v8;
      v7 -= v8;
      if ( !v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( a4 )
      *a4 = nbytes;
    return 0;
  }
}

