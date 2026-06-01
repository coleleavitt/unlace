void __fastcall sub_4697D0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r13
  char *v4; // rdx
  __int64 v5; // r14
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  void *v10; // rdi
  _QWORD *v11; // r12
  _QWORD *v12; // rdi
  __int64 v13; // rsi

  v2 = (_QWORD *)a1[7];
  *a1 = &off_2B29218;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = (char *)v3[2];
    if ( v4 )
    {
      v5 = v3[3];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = &v4[24 * i];
          v8 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            qfree(v8);
            v4 = (char *)v3[2];
          }
        }
      }
      v3[3] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x28u);
  }
  v9 = a1[6];
  v10 = (void *)a1[5];
  v11 = a1 + 11;
  memset(v10, 0, 8 * v9);
  v12 = (_QWORD *)*(v11 - 6);
  v13 = *(v11 - 5);
  *(v11 - 3) = 0;
  *(v11 - 4) = 0;
  if ( v12 != v11 )
    operator delete(v12, 8 * v13);
}
