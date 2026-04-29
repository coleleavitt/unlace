__int64 __fastcall buff_map_fd_anon(_QWORD *a1, _QWORD *a2, int a3)
{
  timespec v6; // q0
  __int64 result; // x0
  off_t st_size; // x22
  void *v9; // x0
  void *v10; // x23
  ssize_t v11; // x0
  stat v12; // [xsp+0h] [xbp-C0h] BYREF

  v6.tv_sec = 0xAAAAAAAAAAAAAAAALL;
  v6.tv_nsec = 0xAAAAAAAAAAAAAAAALL;
  *(timespec *)&v12.st_blksize = v6;
  *(timespec *)v12.st_qspare = v6;
  v12.st_birthtimespec = v6;
  *(timespec *)&v12.st_size = v6;
  v12.st_mtimespec = v6;
  v12.st_ctimespec = v6;
  *(timespec *)&v12.st_uid = v6;
  v12.st_atimespec = v6;
  *(timespec *)&v12.st_dev = v6;
  if ( fstat(a3, &v12) )
    return (unsigned int)*__error();
  st_size = v12.st_size;
  if ( v12.st_size < 0 )
    dyld_halt("value not representable as size_t");
  v9 = mmap(nullptr, v12.st_size, 3, 4098, -1, 0);
  if ( v9 == (void *)-1LL )
    return (unsigned int)*__error();
  v10 = v9;
  while ( 1 )
  {
    v11 = pread(a3, v10, st_size, 0);
    if ( (v11 & 0x8000000000000000LL) == 0 )
      break;
    result = (unsigned int)*__error();
    if ( (_DWORD)result != 4 )
      goto LABEL_13;
  }
  if ( v11 == st_size )
    result = 0;
  else
    result = 5;
LABEL_13:
  *a1 = v10;
  a1[1] = st_size;
  a1[2] = 0;
  if ( a2 )
    *a2 = a1;
  return result;
}
