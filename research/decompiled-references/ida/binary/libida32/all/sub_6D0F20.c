void __fastcall sub_6D0F20(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi
  void *v9; // rdi

  *a1 = &off_2B0DE00;
  v2 = (void *)a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    qfree(v2);
  }
  v3 = a1[13];
  *a1 = &off_2B0DDE0;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (char *)a1[10];
  a1[13] = 0;
  *a1 = &off_2B0DD40;
  if ( v4 )
  {
    v5 = a1[11];
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
          v4 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v4);
  }
  v9 = (void *)a1[7];
  if ( v9 )
  {
    a1[8] = 0;
    qfree(v9);
  }
  operator delete(a1, 0x90u);
}

