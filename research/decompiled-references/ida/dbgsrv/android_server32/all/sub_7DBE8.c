/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DBE8
// Address: 0x0007DBE8

//----- (0007DBE8) --------------------------------------------------------
int __fastcall sub_7DBE8(int fd, char a2, int a3)
{
  int v5; // r4
  _BOOL4 v6; // r0
  int v7; // r1
  int v8; // r7
  int v9; // r0
  int v10; // r1
  int v11; // r4
  int v12; // r0
  int v13; // r0

  v5 = 0;
  v6 = a3 != 2 && (a2 & 3) == 0;
  v7 = 1;
  if ( !v6 )
    v7 = 2;
  if ( v7 == a3 )
    goto LABEL_8;
  v8 = 5;
  if ( !v6 )
    v8 = 6;
  if ( flock(fd, v8) != -1 )
  {
LABEL_7:
    fcntl(fd, 2, 1);
    v5 = 0;
LABEL_8:
    v9 = 5;
    if ( a3 != 1 )
      v9 = 6;
    v10 = 12;
    if ( a3 != 8 )
      v10 = v9;
    if ( flock(fd, v10) == -1 )
    {
      set_qerrno(1);
      return -1;
    }
    else if ( a3 != 8 )
    {
      fcntl(fd, 2, 1);
      return 0;
    }
    return v5;
  }
  v11 = -110;
  while ( 1 )
  {
    v12 = set_qerrno(1);
    v11 += 10;
    if ( !v11 )
      return -1;
    v13 = *(_DWORD *)_errno(v12);
    if ( v13 != 11 && v13 != 4 )
      return -1;
    qsleep(10);
    if ( flock(fd, v8) != -1 )
      goto LABEL_7;
  }
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
