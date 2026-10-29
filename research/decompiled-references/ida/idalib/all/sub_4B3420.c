void __fastcall sub_4B3420(char *a1)
{
  char *v1; // r13
  char *v2; // r12
  _QWORD *v4; // rbx
  void *v5; // rdi
  char *v6; // r13
  _QWORD *v7; // rbx
  void *v8; // rdi
  void **v9; // rbx
  void **v10; // r13
  void *v11; // rdi

  v1 = a1;
  v2 = a1 + 72;
  do
  {
    v4 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
        operator delete(v5, 0x20u);
      }
      while ( v4 );
    }
    v1 += 8;
  }
  while ( v1 != v2 );
  v6 = v2;
  do
  {
    v7 = *(_QWORD **)v6;
    if ( *(_QWORD *)v6 )
    {
      do
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        operator delete(v8, 0x20u);
      }
      while ( v7 );
    }
    v6 += 8;
  }
  while ( a1 + 144 != v6 );
  v9 = *((void ***)a1 + 18);
  v10 = &v9[*((_QWORD *)a1 + 19)];
  if ( v9 != v10 )
  {
    do
    {
      if ( *v9 )
        operator delete(*v9, 0x20u);
      ++v9;
    }
    while ( v10 != v9 );
    v10 = *((void ***)a1 + 18);
  }
  if ( v10 )
  {
    *((_QWORD *)a1 + 19) = 0;
    qfree(v10);
    *((_QWORD *)a1 + 18) = 0;
    *((_QWORD *)a1 + 20) = 0;
  }
  *((_QWORD *)a1 + 8) = 0;
  *(_OWORD *)a1 = 0;
  *((_OWORD *)a1 + 1) = 0;
  *((_OWORD *)a1 + 2) = 0;
  *((_OWORD *)a1 + 3) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *((_QWORD *)v2 + 8) = 0;
  *((_OWORD *)v2 + 1) = 0;
  *((_OWORD *)v2 + 2) = 0;
  *((_OWORD *)v2 + 3) = 0;
  v11 = *((void **)a1 + 18);
  if ( v11 )
  {
    *((_QWORD *)a1 + 19) = 0;
    qfree(v11);
  }
}
