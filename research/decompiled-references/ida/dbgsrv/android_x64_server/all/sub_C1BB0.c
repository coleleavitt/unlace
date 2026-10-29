/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1BB0
// Address: 0x00000000000C1BB0

//----- (00000000000C1BB0) ----------------------------------------------------
__int64 __fastcall sub_C1BB0(int fd, char a2, int a3)
{
  _BOOL4 v4; // eax
  int v5; // r12d
  int v6; // esi
  unsigned int v7; // ebp
  int v9; // ebx
  int v10; // eax

  v4 = a3 != 2 && (a2 & 3) == 0;
  if ( 2 - v4 == a3 )
    goto LABEL_4;
  v5 = 6 - v4;
  if ( flock(fd, 6 - v4) != -1 )
  {
LABEL_3:
    fcntl(fd, 2, 1);
LABEL_4:
    v6 = 12;
    if ( a3 != 8 )
      v6 = 6 - (a3 == 1);
    if ( flock(fd, v6) == -1 )
    {
      set_qerrno(1u);
      return (unsigned int)-1;
    }
    else
    {
      v7 = 0;
      if ( a3 != 8 )
      {
        v7 = 0;
        fcntl(fd, 2, 1);
      }
    }
    return v7;
  }
  v9 = -110;
  while ( 1 )
  {
    set_qerrno(1u);
    v7 = -1;
    v9 += 10;
    if ( !v9 )
      return v7;
    v10 = *(_DWORD *)__errno(1);
    if ( v10 != 11 && v10 != 4 )
      return v7;
    qsleep(10);
    if ( flock(fd, v5) != -1 )
      goto LABEL_3;
  }
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
