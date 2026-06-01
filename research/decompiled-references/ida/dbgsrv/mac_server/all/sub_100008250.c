/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008250
// Address: 0x0000000100008250

//----- (0000000100008250) ----------------------------------------------------
__int64 __fastcall sub_100008250(__int64 a1)
{
  unsigned int v1; // r14d
  int v2; // r14d
  int *v3; // rax
  char *v4; // rax
  _QWORD *v6; // r13
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  bool v9; // zf

  if ( *(_DWORD *)(a1 + 860) == 4 )
  {
    sub_100060FA0(a1, "%d: already exited\n", *(_DWORD *)(a1 + 528));
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 860) = 3;
    sub_100060FA0(a1, "%d: sending SIGKILL\n", *(_DWORD *)(a1 + 528));
    if ( kill(*(_DWORD *)(a1 + 528), 9) )
    {
      v2 = *(_DWORD *)(a1 + 528);
      v3 = __error();
      v4 = strerror(*v3);
      sub_100060FA0(a1, "SIGKILL %d failed: %s\n", v2, v4);
      return (unsigned int)-1;
    }
    else
    {
      v6 = *(_QWORD **)(a1 + 1208);
      v1 = 1;
      if ( v6 != (_QWORD *)(a1 + 1216) )
      {
        do
        {
          if ( *((_BYTE *)v6 + 2152) == 1 )
            *((_DWORD *)v6 + 12) = 0;
          if ( *((_DWORD *)v6 + 14) == 2 )
            sub_100003050(a1, (int *)v6 + 10);
          sub_100003180(a1, (__int64)(v6 + 5));
          v7 = (_QWORD *)v6[1];
          if ( v7 )
          {
            do
            {
              v8 = v7;
              v7 = (_QWORD *)*v7;
            }
            while ( v7 );
          }
          else
          {
            do
            {
              v8 = (_QWORD *)v6[2];
              v9 = *v8 == (_QWORD)v6;
              v6 = v8;
            }
            while ( !v9 );
          }
          v6 = v8;
        }
        while ( v8 != (_QWORD *)(a1 + 1216) );
      }
    }
  }
  return v1;
}
