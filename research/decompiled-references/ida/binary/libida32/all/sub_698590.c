void *__fastcall sub_698590(__int64 a1)
{
  void *v2; // rdi
  char *v3; // rdx
  __int64 v4; // rbp
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  _QWORD *v13; // rbx
  void *v14; // rdi
  void *result; // rax

  *(_BYTE *)(a1 + 28) = 0;
  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v3 = *(char **)(a1 + 32);
  *(_BYTE *)(a1 + 29) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[32 * i];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v7);
          v3 = *(char **)(a1 + 32);
        }
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v8 = *(_QWORD *)(a1 + 144);
  v9 = 0;
  if ( v8 )
  {
    do
    {
      v10 = (_QWORD *)(*(_QWORD *)(a1 + 136) + (v9 << 7));
      clear_tinfo_t(v10 + 8);
      v11 = (void *)v10[5];
      if ( v11 )
      {
        v10[6] = 0;
        qfree(v11);
      }
      v12 = (void *)v10[2];
      if ( v12 )
      {
        v10[3] = 0;
        qfree(v12);
      }
      ++v9;
    }
    while ( v8 != v9 );
  }
  v13 = *(_QWORD **)(a1 + 72);
  *(_QWORD *)(a1 + 144) = 0;
  while ( v13 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    operator delete(v14, 0x20u);
  }
  result = memset(*(void **)(a1 + 56), 0, 8LL * *(_QWORD *)(a1 + 64));
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return result;
}

