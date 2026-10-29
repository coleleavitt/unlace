/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F3A4
// Address: 0x0007F3A4

//----- (0007F3A4) --------------------------------------------------------
ssize_t __fastcall sub_7F3A4(int fd, char **a2, char *nbytes)
{
  size_t v4; // r5
  size_t v5; // r4
  char *v7; // r1
  char *v8; // r8
  _BOOL4 v9; // r3
  char *v10; // r5
  ssize_t result; // r0
  int v12; // r0
  bool v13; // zf
  size_t v14; // r0

  v4 = (size_t)a2[1];
  v5 = (size_t)nbytes;
  v7 = *a2;
  v8 = &nbytes[v4];
  v9 = __CFADD__(nbytes, v4);
  if ( (unsigned int)v8 > v4 )
  {
    if ( v8 > a2[2] )
    {
      v7 = (char *)sub_78018((int)a2, v7, (unsigned int)&nbytes[v4], 1u);
      v14 = (size_t)a2[1];
      *a2 = v7;
      nbytes = &v8[-v14];
    }
    else
    {
      v14 = v4;
    }
    memset(&v7[v14], 0, (size_t)nbytes);
    a2[1] = v8;
    v7 = *a2;
  }
  else if ( v9 )
  {
    a2[1] = v8;
  }
  v10 = &v7[v4];
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    result = sub_7F388(fd, v10, v5);
    if ( !result )
      break;
    if ( result < 0 )
    {
      v12 = *_errno_location();
      v13 = v12 == 11;
      if ( v12 != 11 )
        v13 = v12 == 4;
      result = v13;
      if ( !v13 )
        return result;
    }
    else
    {
      v5 -= result;
      v10 += result;
      if ( !v5 )
        return 1;
    }
  }
  return result;
}
