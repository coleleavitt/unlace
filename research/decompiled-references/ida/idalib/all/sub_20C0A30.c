void __fastcall sub_20C0A30(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // r12
  void *v6; // r13
  int v7; // eax
  char *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r12
  _QWORD *v11; // rax

  if ( a1 )
  {
    v2 = (_QWORD *)a1[3];
    v3 = *((unsigned int *)a1 + 10);
    v4 = 2 * v3;
    if ( (_DWORD)v3 )
    {
      v5 = &v2[v4];
      do
      {
        if ( *v2 != -8192 && *v2 != -4096 )
        {
          v6 = (void *)v2[1];
          if ( v6 )
          {
            sub_224F490(v2[1]);
            operator delete(v6, 0xB0u);
          }
        }
        v2 += 2;
      }
      while ( v5 != v2 );
      v2 = (_QWORD *)a1[3];
      v4 = 2LL * *((unsigned int *)a1 + 10);
    }
    operator delete(v2, v4 * 8, 8);
    if ( *((_DWORD *)a1 + 3) )
    {
      v7 = *((_DWORD *)a1 + 2);
      v8 = (char *)*a1;
      if ( v7 )
      {
        v9 = 0;
        v10 = 8LL * (unsigned int)(v7 - 1) + 8;
        do
        {
          v11 = *(_QWORD **)&v8[v9];
          if ( v11 )
          {
            if ( v11 != (_QWORD *)-8LL )
            {
              operator delete(*(_QWORD *)&v8[v9], *v11 + 17LL, 8);
              v8 = (char *)*a1;
            }
          }
          v9 += 8;
        }
        while ( v10 != v9 );
      }
    }
    else
    {
      v8 = (char *)*a1;
    }
    free(v8);
    operator delete(a1, 0x38u);
  }
}
