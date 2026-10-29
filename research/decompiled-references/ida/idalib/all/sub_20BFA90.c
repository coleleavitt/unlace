void __fastcall sub_20BFA90(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // r12
  void **v4; // rbx
  void *v5; // rdi
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r12
  _QWORD *v10; // rax

  v2 = (void *)a1[17];
  if ( v2 )
    operator delete(v2);
  v3 = (void **)a1[15];
  v4 = (void **)a1[14];
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( !*v4 )
          break;
        ++v4;
        operator delete(v5, 0x38u);
        if ( v4 == v3 )
          goto LABEL_6;
      }
      ++v4;
    }
    while ( v3 != v4 );
LABEL_6:
    v4 = (void **)a1[14];
  }
  if ( v4 )
    operator delete(v4);
  v6 = (char *)a1[11];
  if ( *((_DWORD *)a1 + 25) )
  {
    v7 = *((_DWORD *)a1 + 24);
    if ( v7 )
    {
      v8 = 0;
      v9 = 8LL * (unsigned int)(v7 - 1) + 8;
      do
      {
        v10 = *(_QWORD **)&v6[v8];
        if ( v10 != (_QWORD *)-8LL && v10 )
        {
          operator delete(*(_QWORD *)&v6[v8], *v10 + 17LL, 8);
          v6 = (char *)a1[11];
        }
        v8 += 8;
      }
      while ( v9 != v8 );
    }
  }
  free(v6);
  operator delete(a1[8], 16LL * *((unsigned int *)a1 + 20), 8);
}
