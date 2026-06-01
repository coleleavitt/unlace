void __fastcall sub_1106150(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v3; // rbp
  void *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  void **v7; // r12
  void **v8; // rbp
  void *v9; // rdi
  _QWORD *v10; // rdi

  v1 = a1[58];
  v3 = a1[57];
  *a1 = &off_2BA8F30;
  if ( v1 != v3 )
  {
    do
    {
      if ( *(_BYTE *)(v3 + 32) && *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3);
      v3 += 40;
    }
    while ( v1 != v3 );
    v3 = a1[57];
  }
  if ( v3 )
    operator delete((void *)v3);
  v4 = (void *)a1[54];
  if ( v4 )
    operator delete(v4);
  v5 = (_QWORD *)a1[50];
  if ( v5 != a1 + 52 )
    operator delete(v5);
  v6 = (_QWORD *)a1[32];
  if ( v6 != a1 + 34 )
    free(v6);
  v7 = (void **)a1[29];
  v8 = (void **)a1[28];
  if ( v7 != v8 )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_18;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_18:
    v8 = (void **)a1[28];
  }
  if ( v8 )
    operator delete(v8);
  v9 = (void *)a1[25];
  if ( v9 )
    operator delete(v9);
  v10 = (_QWORD *)a1[7];
  if ( v10 != a1 + 9 )
    free(v10);
}
