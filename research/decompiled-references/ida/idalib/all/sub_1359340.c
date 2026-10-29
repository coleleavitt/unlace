void __fastcall sub_1359340(char *a1)
{
  char *v1; // r13
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  char *v8; // rdi
  char *v9; // rdi
  char *v10; // rdi

  v1 = a1 + 120;
  *(_QWORD *)a1 = &off_2C43340;
  v3 = *((_QWORD **)a1 + 15);
  v4 = *((unsigned int *)a1 + 34);
  v5 = 40 * v4;
  if ( (_DWORD)v4 )
  {
    v6 = &v3[5 * v4];
    do
    {
      if ( *v3 != -4096 && *v3 != -8192 )
      {
        v7 = (_QWORD *)v3[1];
        if ( v7 != v3 + 3 )
          free(v7);
      }
      v3 += 5;
    }
    while ( v6 != v3 );
    v3 = *((_QWORD **)a1 + 15);
    v5 = 40LL * *((unsigned int *)a1 + 34);
  }
  operator delete(v3, v5, 8);
  v8 = *((char **)a1 + 13);
  if ( v1 != v8 )
    free(v8);
  operator delete(*((_QWORD *)a1 + 10), 8LL * *((unsigned int *)a1 + 24), 8);
  v9 = *((char **)a1 + 6);
  if ( v9 != a1 + 64 )
    operator delete(v9);
  v10 = *((char **)a1 + 2);
  if ( v10 != a1 + 32 )
    operator delete(v10);
  nullsub_670(a1);
  operator delete(a1, 0x90u);
}
