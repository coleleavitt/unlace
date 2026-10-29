void __fastcall sub_1FD1300(_QWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi

  operator delete((void *)a1[1], 0x28u);
  if ( *((_DWORD *)a1 + 369) )
  {
    v2 = *((_DWORD *)a1 + 368);
    v3 = (char *)a1[183];
    if ( v2 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v6 = *(_QWORD **)&v3[v4];
        if ( v6 != (_QWORD *)-8LL && v6 )
        {
          operator delete(*(_QWORD *)&v3[v4], *v6 + 17LL, 8);
          v3 = (char *)a1[183];
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
  }
  else
  {
    v3 = (char *)a1[183];
  }
  free(v3);
  operator delete(a1[180], 16LL * *((unsigned int *)a1 + 364), 8);
  v7 = (_QWORD *)a1[2];
  v8 = &v7[11 * *((unsigned int *)a1 + 6)];
  if ( v7 != v8 )
  {
    do
    {
      while ( 1 )
      {
        v8 -= 11;
        v9 = (_QWORD *)v8[7];
        if ( v9 != v8 + 9 )
          free(v9);
        v10 = (_QWORD *)v8[1];
        if ( v10 == v8 + 3 )
          break;
        operator delete(v10);
        if ( v7 == v8 )
          goto LABEL_13;
      }
    }
    while ( v7 != v8 );
LABEL_13:
    v8 = (_QWORD *)a1[2];
  }
  if ( v8 != a1 + 4 )
    free(v8);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
}
