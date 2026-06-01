void __fastcall sub_1FEDB80(_DWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdi
  void (__fastcall *v11)(_DWORD *, _DWORD *, __int64); // rax
  void **v12; // r12
  void **v13; // rbp
  __int64 v14; // rdi

  *(_QWORD *)a1 = &off_2BE4C00;
  v2 = a1[31];
  v3 = *((char **)a1 + 14);
  if ( v2 )
  {
    v4 = a1[30];
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          v8 = (_QWORD *)v7[1];
          v9 = *v7 + 41LL;
          if ( v8 != v7 + 3 )
            operator delete(v8);
          operator delete(v7, v9, 8);
          v3 = *((char **)a1 + 14);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v10 = *((_QWORD *)a1 + 11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( *((_BYTE *)a1 + 72) )
  {
    v11 = *((void (__fastcall **)(_DWORD *, _DWORD *, __int64))a1 + 7);
    if ( v11 )
      v11(a1 + 10, a1 + 10, 3);
    v12 = *((void ***)a1 + 3);
    v13 = *((void ***)a1 + 2);
    if ( v12 != v13 )
    {
      do
      {
        while ( *v13 != v13 + 2 )
        {
          operator delete(*v13);
          v13 += 4;
          if ( v13 == v12 )
            goto LABEL_19;
        }
        v13 += 4;
      }
      while ( v12 != v13 );
LABEL_19:
      v13 = *((void ***)a1 + 2);
    }
    if ( v13 )
      operator delete(v13);
    v14 = *((_QWORD *)a1 + 1);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  operator delete(a1, 0x90u);
}
