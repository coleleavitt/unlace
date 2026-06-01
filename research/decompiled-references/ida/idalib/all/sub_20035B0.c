void __fastcall sub_20035B0(_QWORD *a1)
{
  void **v2; // r12
  void **v3; // rbp
  char *v4; // r12
  char *v5; // rbp
  char *v6; // rdi
  __int64 v7; // rdi
  _QWORD *v8; // r12
  _QWORD *v9; // rbp
  void *v10; // rdi
  char *v11; // rdi
  int v12; // eax
  __int64 v13; // r13
  _QWORD *v14; // r12
  _QWORD *v15; // r14
  _QWORD *v16; // rbp
  __int64 v17; // r15
  void *v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-40h]

  *a1 = &off_2BE4E10;
  sub_2270460();
  v2 = (void **)a1[15];
  v3 = (void **)a1[14];
  if ( v2 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (void **)a1[14];
  }
  if ( v3 )
    operator delete(v3);
  v4 = (char *)a1[12];
  v5 = (char *)a1[11];
  if ( v4 != v5 )
  {
    do
    {
      v6 = v5;
      v5 += 24;
      sub_2239BD0(v6);
    }
    while ( v4 != v5 );
    v5 = (char *)a1[11];
  }
  if ( v5 )
    operator delete(v5);
  v7 = a1[9];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  sub_1FF5B80(a1 + 7);
  v8 = (_QWORD *)a1[5];
  v9 = (_QWORD *)a1[4];
  if ( v8 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v10 = (void *)v9[1];
        if ( !v10 )
          break;
        operator delete(v10);
        v9 += 6;
        if ( v8 == v9 )
          goto LABEL_17;
      }
      v9 += 6;
    }
    while ( v8 != v9 );
LABEL_17:
    v9 = (_QWORD *)a1[4];
  }
  if ( v9 )
    operator delete(v9);
  v11 = (char *)a1[1];
  if ( *((_DWORD *)a1 + 5) )
  {
    v12 = *((_DWORD *)a1 + 4);
    if ( v12 )
    {
      v13 = 0;
      v19 = 8LL * (unsigned int)(v12 - 1) + 8;
      do
      {
        v14 = *(_QWORD **)&v11[v13];
        if ( v14 != (_QWORD *)-8LL && v14 )
        {
          v15 = (_QWORD *)v14[2];
          v16 = (_QWORD *)v14[1];
          v17 = *v14 + 33LL;
          if ( v15 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v18 = (void *)v16[1];
                if ( !v18 )
                  break;
                operator delete(v18);
                v16 += 6;
                if ( v16 == v15 )
                  goto LABEL_28;
              }
              v16 += 6;
            }
            while ( v15 != v16 );
LABEL_28:
            v16 = (_QWORD *)v14[1];
          }
          if ( v16 )
            operator delete(v16);
          operator delete(v14, v17, 8);
          v11 = (char *)a1[1];
        }
        v13 += 8;
      }
      while ( v19 != v13 );
    }
  }
  free(v11);
  nullsub_1254();
  operator delete(a1, 0xA8u);
}
