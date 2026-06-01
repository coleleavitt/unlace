/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF2B0
// Address: 0x000AF2B0

//----- (000AF2B0) --------------------------------------------------------
int __cdecl sub_AF2B0(int fd, char a2, int a3)
{
  int v3; // esi
  int v4; // edi
  _BOOL4 v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v10; // edi
  int v11; // ecx
  bool v12; // zf
  int v13; // eax
  int v14; // [esp+18h] [ebp-14h]

  v3 = a3;
  v4 = fd;
  v5 = a3 != 2 && (a2 & 3) == 0;
  if ( 2 - v5 == a3 )
    goto LABEL_4;
  v14 = 6 - v5;
  if ( flock(fd, 6 - v5) != -1 )
  {
LABEL_3:
    v4 = fd;
    fcntl(fd, 2, 1);
    v3 = a3;
LABEL_4:
    v6 = 12;
    if ( v3 != 8 )
      v6 = 6 - (v3 == 1);
    if ( flock(v4, v6) == -1 )
    {
      set_qerrno(1);
      return -1;
    }
    else
    {
      v7 = v3;
      v8 = 0;
      if ( v7 != 8 )
        fcntl(v4, 2, 1);
    }
    return v8;
  }
  v10 = -110;
  while ( 1 )
  {
    set_qerrno(1);
    v12 = v10 == -10;
    v10 += 10;
    v8 = -1;
    if ( v12 )
      return v8;
    v13 = *(_DWORD *)__errno(v11);
    if ( v13 != 11 && v13 != 4 )
      return v8;
    qsleep(10);
    if ( flock(fd, v14) != -1 )
      goto LABEL_3;
  }
}
// AF3B6: variable 'v11' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
