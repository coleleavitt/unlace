/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C3DC
// Address: 0x0006C3DC

//----- (0006C3DC) --------------------------------------------------------
void __fastcall __noreturn sub_6C3DC(int a1, int a2)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  pthread_t v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  bool v10; // zf
  int v11; // r1

  sub_6F20C("got signal #%d, terminating\n", a2);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v4 = *(_DWORD **)(a1 + 44);
  v5 = (_DWORD *)v4[1];
  while ( v5 != v4 + 2 )
  {
    v6 = (_DWORD *)v5[4];
    v7 = v5[5];
    if ( v7 )
      qthread_free(v7);
    if ( v6 && v6[17] )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*v6 + 12))(v6, a2);
      sub_6B71C((int)v6);
    }
    v8 = (_DWORD *)v5[1];
    if ( v8 )
    {
      do
      {
        v5 = v8;
        v8 = (_DWORD *)*v8;
      }
      while ( v8 );
    }
    else
    {
      v9 = v5 + 2;
      v10 = *(_DWORD *)v5[2] == (_DWORD)v5;
      v5 = (_DWORD *)v5[2];
      if ( !v10 )
      {
        do
        {
          v11 = *v9;
          v9 = (_DWORD *)(*v9 + 8);
          v5 = *(_DWORD **)(v11 + 8);
        }
        while ( *v5 != v11 );
      }
    }
    v4 = *(_DWORD **)(a1 + 44);
  }
  sub_6C634((int)(v4 + 1), (_DWORD *)*v5);
  v4[1] = v5;
  v4[3] = 0;
  *v5 = 0;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
  sub_6C74E((_DWORD *)(a1 + 40));
  exit(a2 != 15);
}
