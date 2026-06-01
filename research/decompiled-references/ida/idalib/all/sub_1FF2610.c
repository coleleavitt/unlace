void __fastcall sub_1FF2610(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  void *v3; // rdi
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi
  void **v7; // r12
  void **v8; // rbp
  bool v9; // zf
  char *v10; // rdi

  *(_QWORD *)a1 = &off_2C71420;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 28);
  if ( v2 )
    v2(a1 + 208, a1 + 208, 3);
  v3 = *((void **)a1 + 22);
  if ( v3 )
    operator delete(v3);
  v4 = *((_QWORD **)a1 + 19);
  v5 = *((_QWORD **)a1 + 18);
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = (_QWORD *)v5[1];
        *v5 = off_2C712B0;
        if ( v6 == v5 + 3 )
          break;
        operator delete(v6);
        v5 += 6;
        if ( v4 == v5 )
          goto LABEL_8;
      }
      v5 += 6;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = *((_QWORD **)a1 + 18);
  }
  if ( v5 )
    operator delete(v5);
  v7 = *((void ***)a1 + 16);
  v8 = *((void ***)a1 + 15);
  if ( v7 != v8 )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_14;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_14:
    v8 = *((void ***)a1 + 15);
  }
  if ( v8 )
    operator delete(v8);
  v9 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v9 )
    free(*((void **)a1 + 11));
  v10 = *((char **)a1 + 8);
  if ( v10 != a1 + 80 )
    free(v10);
  operator delete(a1, 0xF0u);
}
