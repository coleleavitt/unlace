void __fastcall sub_4698C0(char *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r13
  char *v4; // rdx
  __int64 v5; // r14
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi
  char *v9; // rdi

  v2 = *((_QWORD **)a1 + 7);
  *(_QWORD *)a1 = &off_2B29218;
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
  memset(*((void **)a1 + 5), 0, 8LL * *((_QWORD *)a1 + 6));
  v9 = *((char **)a1 + 5);
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 7) = 0;
  if ( v9 != a1 + 88 )
    operator delete(v9, 8LL * *((_QWORD *)a1 + 6));
  operator delete(a1, 0x60u);
}
