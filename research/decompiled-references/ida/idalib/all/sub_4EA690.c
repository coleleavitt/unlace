void __fastcall sub_4EA690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 i; // rbp
  char *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi

  sub_4EA420(a1, 0x80u, 0, a4, a5, a6);
  v7 = (char *)a1[6];
  a1[1] = 0;
  if ( v7 )
  {
    v8 = a1[7];
    if ( v8 )
    {
      v9 = 0;
      for ( i = 0; i != v8; ++i )
      {
        v11 = &v7[v9];
        v12 = *(void **)&v7[v9 + 72];
        if ( v12 )
        {
          *((_QWORD *)v11 + 10) = 0;
          qfree(v12);
        }
        v13 = *((void **)v11 + 6);
        if ( v13 )
        {
          *((_QWORD *)v11 + 7) = 0;
          qfree(v13);
        }
        v14 = *((void **)v11 + 3);
        if ( v14 )
        {
          *((_QWORD *)v11 + 4) = 0;
          qfree(v14);
        }
        v15 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v15);
        }
        v7 = (char *)a1[6];
        v9 += 104;
      }
    }
    a1[7] = 0;
    qfree(v7);
  }
  v16 = (void *)a1[2];
  if ( v16 )
  {
    a1[3] = 0;
    qfree(v16);
  }
}
