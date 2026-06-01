void __fastcall sub_796090(char **a1)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // al
  char *v6; // rdi
  int v7; // r13d
  __int64 v8; // r15
  _QWORD *v9; // r12
  void *v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // rbp
  void *v13; // rdi

  if ( a1[4] )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = (__int64)&a1[3][56 * v3];
        v5 = *(_BYTE *)(v4 + 24);
        if ( v5 == 5 || v5 == 6 && (unsigned __int64)-*(_DWORD *)(v4 + 32) >= qword_2C7C620 )
          break;
        v3 = ++v2;
        if ( v2 >= (unsigned __int64)a1[4] )
          goto LABEL_8;
      }
      ++v2;
      free_idcv(v4 + 24);
      v3 = v2;
    }
    while ( v2 < (unsigned __int64)a1[4] );
  }
LABEL_8:
  if ( *(_QWORD *)algn_2C7C648 )
    (*(void (**)(void))algn_2C7C648)();
  v6 = *a1;
  v7 = *((_DWORD *)a1 + 2) - 1;
  if ( v7 >= 0 )
  {
    v8 = 8LL * (unsigned int)v7;
    do
    {
      v9 = *(_QWORD **)&v6[v8];
      if ( v9 )
      {
        v10 = (void *)v9[7];
        if ( v10 )
        {
          v9[8] = 0;
          qfree(v10);
        }
        v11 = v9[2];
        while ( v11 )
        {
          v12 = (_QWORD *)v11;
          sub_790FE0(*(_QWORD **)(v11 + 24));
          v13 = *(void **)(v11 + 32);
          v11 = *(_QWORD *)(v11 + 16);
          if ( v13 )
          {
            v12[5] = 0;
            qfree(v13);
          }
          operator delete(v12, 0x40u);
        }
        operator delete(v9, 0x60u);
        v6 = *a1;
      }
      --v7;
      v8 -= 8;
    }
    while ( v7 != -1 );
  }
  if ( v6 )
  {
    a1[1] = nullptr;
    qfree(v6);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
