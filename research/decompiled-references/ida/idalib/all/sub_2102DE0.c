void __fastcall sub_2102DE0(__int64 a1)
{
  char *v2; // rbx
  void *v3; // rdi
  char *v4; // r13
  _QWORD *v5; // r12
  void *v6; // r15
  _QWORD *v7; // r14
  char *v8; // rdi
  __int64 v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rbp
  _QWORD *v12; // rdi

  v2 = *(char **)(a1 + 16);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *((void **)v2 + 9);
      v4 = *(char **)v2;
      if ( v3 )
        operator delete(v3);
      v5 = *((_QWORD **)v2 + 4);
      if ( v5 )
      {
        while ( 1 )
        {
          v6 = (void *)v5[3];
          v7 = (_QWORD *)*v5;
          if ( v6 )
          {
            sub_2102D10(v5[3]);
            operator delete(v6, 0x60u);
            operator delete(v5);
            if ( !v7 )
              break;
          }
          else
          {
            operator delete(v5);
            if ( !v7 )
              break;
          }
          v5 = v7;
        }
      }
      memset(*((void **)v2 + 2), 0, 8LL * *((_QWORD *)v2 + 3));
      v8 = *((char **)v2 + 2);
      *((_QWORD *)v2 + 5) = 0;
      *((_QWORD *)v2 + 4) = 0;
      if ( v8 == v2 + 64 )
      {
        operator delete(v2);
        if ( !v4 )
          break;
      }
      else
      {
        operator delete(v8);
        operator delete(v2);
        if ( !v4 )
          break;
      }
      v2 = v4;
    }
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(void **)a1;
  v11 = (_QWORD *)(a1 + 48);
  memset(v10, 0, 8 * v9);
  v12 = (_QWORD *)*(v11 - 6);
  *(v11 - 3) = 0;
  *(v11 - 4) = 0;
  if ( v12 != v11 )
    operator delete(v12);
}
