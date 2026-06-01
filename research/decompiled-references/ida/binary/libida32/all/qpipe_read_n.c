bool __fastcall qpipe_read_n(int fd, __int64 *a2, size_t a3)
{
  unsigned __int64 v4; // rbp
  size_t v5; // rbx
  unsigned __int64 v6; // r14
  char *v7; // rbp
  __int64 v8; // rax
  bool result; // al
  int *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2[1];
  v5 = a3;
  v6 = v4 + a3;
  if ( v4 < v4 + a3 )
  {
    v11 = *a2;
    v12 = v4;
    if ( a2[2] < v6 )
    {
      v13 = qvector_reserve(a2, v11, v4 + a3, 1);
      *a2 = v13;
      v11 = v13;
      v12 = a2[1];
      a3 = v6 - v12;
    }
    memset((void *)(v11 + v12), 0, a3);
    a2[1] = v6;
  }
  else if ( v6 != v4 )
  {
    a2[1] = v6;
  }
  v7 = (char *)(*a2 + v4);
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v8 = qpipe_read(fd, v7, v5);
    if ( !v8 )
      break;
    if ( v8 < 0 )
    {
      v10 = __errno_location();
      result = *v10 == 4 || *v10 == 11;
      if ( !result )
        return result;
    }
    else
    {
      v7 += v8;
      v5 -= v8;
      if ( !v5 )
        return 1;
    }
  }
  return 0;
}

