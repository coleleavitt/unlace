/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BCF40
// Address: 0x00000000000BCF40

//----- (00000000000BCF40) ----------------------------------------------------
__int64 __fastcall sub_BCF40(int fd, char a2, int a3)
{
  _BOOL4 v3; // w8
  _BOOL4 v4; // w9
  int v5; // w10
  int v8; // w21
  int v9; // w8
  int v10; // w1
  int v12; // w22
  __int64 v13; // x0
  int v14; // w8

  v3 = a3 != 2;
  v4 = (a2 & 3) == 0;
  if ( v3 && v4 )
    v5 = 1;
  else
    v5 = 2;
  if ( v5 != a3 )
  {
    if ( v3 && v4 )
      v8 = 5;
    else
      v8 = 6;
    if ( flock(fd, v8) == -1 )
    {
      v12 = -110;
      do
      {
        v13 = set_qerrno(1u);
        v12 += 10;
        if ( !v12 )
          return 0xFFFFFFFFLL;
        v14 = *(_DWORD *)__errno(v13);
        if ( v14 != 11 && v14 != 4 )
          return 0xFFFFFFFFLL;
        qsleep(10);
      }
      while ( flock(fd, v8) == -1 );
    }
    fcntl(fd, 2, 1);
  }
  if ( a3 == 1 )
    v9 = 5;
  else
    v9 = 6;
  if ( a3 == 8 )
    v10 = 12;
  else
    v10 = v9;
  if ( flock(fd, v10) == -1 )
  {
    set_qerrno(1u);
    return 0xFFFFFFFFLL;
  }
  if ( a3 != 8 )
    fcntl(fd, 2, 1);
  return 0;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
