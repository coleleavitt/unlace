void __fastcall reg_finder_dtr(_QWORD *a1)
{
  char **v2; // r13
  char *v3; // rdi
  char *v4; // r14
  char *i; // r15
  char *v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  _QWORD *v11; // rbp
  __int64 v12; // rbx
  void *v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // rbx
  void *v16; // rdi

  v2 = (char **)a1[20];
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v4 = v2[1];
      if ( v4 )
      {
        for ( i = nullptr; i != v4; ++i )
        {
          v6 = &v3[48 * (_QWORD)i];
          v7 = *((_QWORD **)v6 + 4);
          if ( v7 )
          {
            if ( v7[4] )
            {
              if ( !under_debugger )
                interr(2871);
              BUG();
            }
            v8 = (void *)v7[6];
            v7[9] = 0;
            if ( v8 )
            {
              v7[7] = 0;
              qfree(v8);
            }
            v9 = (void *)v7[3];
            if ( v9 )
            {
              v7[4] = 0;
              qfree(v9);
            }
            operator delete(v7, 0x58u);
          }
          v10 = *(void **)v6;
          if ( *(_QWORD *)v6 )
          {
            *((_QWORD *)v6 + 1) = 0;
            qfree(v10);
          }
          v3 = *v2;
        }
      }
      v2[1] = nullptr;
      qfree(v3);
    }
    qfree(v2);
  }
  v11 = (_QWORD *)a1[21];
  a1[20] = 0;
  if ( v11 )
  {
    v12 = v11[2];
    while ( v12 )
    {
      sub_4DDD50(*(_QWORD **)(v12 + 24));
      v13 = (void *)v12;
      v12 = *(_QWORD *)(v12 + 16);
      operator delete(v13, 0x38u);
    }
    operator delete(v11, 0x30u);
  }
  v14 = (_QWORD *)a1[25];
  a1[21] = 0;
  if ( v14 )
  {
    v15 = v14[2];
    while ( v15 )
    {
      sub_4DDB80(*(_QWORD **)(v15 + 24));
      v16 = (void *)v15;
      v15 = *(_QWORD *)(v15 + 16);
      operator delete(v16, 0x28u);
    }
    operator delete(v14, 0x30u);
  }
  a1[25] = 0;
}

