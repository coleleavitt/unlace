void __fastcall sub_221C780(char *a1, __int64 a2)
{
  void (__fastcall *v3)(char *, char *, __int64); // rax
  bool v4; // zf
  char *v5; // rdi
  void (__fastcall *v6)(char *, char *, __int64); // rax
  char *v7; // rdi
  void (__fastcall *v8)(char *, char *, __int64); // rax
  void *v9; // rdi
  _QWORD *v10; // r13
  _QWORD *v11; // rbp
  _QWORD *v12; // rdi
  char *v13; // rdi
  void **v14; // r12
  void **v15; // rbp
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rax

  if ( a1[97] )
  {
    v25 = sub_221A480((__int64)a1, a2);
    sub_221BC50((__int64)a1, v25);
  }
  *((_QWORD *)a1 + 64) = off_2C71D10;
  v3 = *((void (__fastcall **)(char *, char *, __int64))a1 + 85);
  if ( v3 )
    v3(a1 + 664, a1 + 664, 3);
  v4 = a1[620] == 0;
  *((_QWORD *)a1 + 64) = &off_2C758B0;
  if ( v4 )
    free(*((void **)a1 + 75));
  v5 = *((char **)a1 + 72);
  if ( v5 != a1 + 592 )
    free(v5);
  *((_QWORD *)a1 + 41) = off_2C71D10;
  v6 = *((void (__fastcall **)(char *, char *, __int64))a1 + 62);
  if ( v6 )
    v6(a1 + 480, a1 + 480, 3);
  v4 = a1[436] == 0;
  *((_QWORD *)a1 + 41) = &off_2C758B0;
  if ( v4 )
    free(*((void **)a1 + 52));
  v7 = *((char **)a1 + 49);
  if ( v7 != a1 + 408 )
    free(v7);
  *((_QWORD *)a1 + 13) = off_2C75918;
  v8 = *((void (__fastcall **)(char *, char *, __int64))a1 + 39);
  if ( v8 )
    v8(a1 + 296, a1 + 296, 3);
  v9 = *((void **)a1 + 33);
  if ( v9 )
    operator delete(v9);
  v10 = *((_QWORD **)a1 + 30);
  v11 = *((_QWORD **)a1 + 29);
  if ( v10 != v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = (_QWORD *)v11[1];
        *v11 = off_2C712B0;
        if ( v12 == v11 + 3 )
          break;
        operator delete(v12);
        v11 += 6;
        if ( v10 == v11 )
          goto LABEL_22;
      }
      v11 += 6;
    }
    while ( v10 != v11 );
LABEL_22:
    v11 = *((_QWORD **)a1 + 29);
  }
  if ( v11 )
    operator delete(v11);
  v4 = a1[212] == 0;
  *((_QWORD *)a1 + 13) = &off_2C758B0;
  if ( v4 )
    free(*((void **)a1 + 24));
  v13 = *((char **)a1 + 21);
  if ( v13 != a1 + 184 )
    free(v13);
  v14 = *((void ***)a1 + 10);
  v15 = *((void ***)a1 + 9);
  if ( v14 != v15 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v14 == v15 )
          goto LABEL_32;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_32:
    v15 = *((void ***)a1 + 9);
  }
  if ( v15 )
    operator delete(v15);
  v16 = *((_QWORD *)a1 + 5);
  if ( v16 )
  {
    while ( 1 )
    {
      sub_20CE650((__int64)(a1 + 24), *(_QWORD **)(v16 + 24));
      v17 = *(void **)(v16 + 32);
      v18 = *(_QWORD *)(v16 + 16);
      if ( v17 == (void *)(v16 + 48) )
      {
        operator delete((void *)v16);
        if ( !v18 )
          break;
      }
      else
      {
        operator delete(v17);
        operator delete((void *)v16);
        if ( !v18 )
          break;
      }
      v16 = v18;
    }
  }
  v19 = *(_QWORD *)a1;
  v20 = *((unsigned int *)a1 + 4);
  v21 = v20 << 7;
  v22 = *(_QWORD *)a1 + (v20 << 7);
  if ( (_DWORD)v20 )
  {
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v19 + 2) > 1 )
        {
          v23 = *(void **)(v19 + 64);
          if ( v23 != (void *)(v19 + 80) )
            free(v23);
          v24 = *(void **)(v19 + 32);
          if ( v24 != (void *)(v19 + 48) )
            break;
        }
        v19 += 128;
        if ( v22 == v19 )
          goto LABEL_52;
      }
      operator delete(v24);
      v19 += 128;
    }
    while ( v22 != v19 );
LABEL_52:
    v19 = *(_QWORD *)a1;
    v21 = (unsigned __int64)*((unsigned int *)a1 + 4) << 7;
  }
  operator delete(v19, v21, 8);
}
