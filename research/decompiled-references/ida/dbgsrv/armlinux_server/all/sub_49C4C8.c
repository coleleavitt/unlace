/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C4C8
// Address: 0x000000000049C4C8

//----- (000000000049C4C8) ----------------------------------------------------
bool __fastcall sub_49C4C8(int fd, char **a2, size_t nbytes)
{
  size_t v3; // x19
  char *v6; // x0
  size_t v7; // x20
  char *v8; // x23
  char *v9; // x20
  ssize_t v10; // x0
  _BOOL8 result; // x0
  int v12; // w1
  char *v13; // x3
  char *v14; // x1

  v3 = nbytes;
  v6 = *a2;
  v7 = (size_t)a2[1];
  v8 = (char *)(nbytes + v7);
  if ( nbytes + v7 > v7 )
  {
    v13 = a2[2];
    v14 = a2[1];
    if ( v8 > v13 )
    {
      v6 = (char *)sub_491288((__int64)a2, v6, nbytes + v7, 1u);
      *a2 = v6;
      v14 = a2[1];
      nbytes = v8 - v14;
    }
    memset(&v14[(_QWORD)v6], 0, nbytes);
    a2[1] = v8;
    v6 = *a2;
  }
  else if ( nbytes + v7 < v7 )
  {
    a2[1] = v8;
  }
  v9 = &v6[v7];
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v10 = j__read(fd, v9, v3);
    if ( !v10 )
      break;
    if ( v10 < 0 )
    {
      v12 = *__errno_location();
      result = v12 == 11 || v12 == 4;
      if ( !result )
        return result;
    }
    else
    {
      v9 += v10;
      v3 -= v10;
      if ( !v3 )
        return 1;
    }
  }
  return 0;
}
