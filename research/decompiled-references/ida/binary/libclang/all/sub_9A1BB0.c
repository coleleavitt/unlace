__int64 __fastcall sub_9A1BB0(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  char *v4; // rbx
  char *v5; // r12
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // r13
  _QWORD *v11; // rbx
  void *v12; // rdi

  sub_9A1740(a1);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 48);
  while ( v3 != v2 )
  {
    v2 += 8;
    operator delete();
  }
  v4 = *(char **)(a1 + 88);
  v5 = &v4[16 * *(unsigned int *)(a1 + 96)];
  if ( v4 != v5 )
  {
    do
    {
      v4 += 16;
      operator delete();
    }
    while ( v5 != v4 );
    v5 = *(char **)(a1 + 88);
  }
  if ( v5 != (char *)(a1 + 104) )
    free(v5);
  v6 = *(void **)(a1 + 40);
  if ( v6 != (void *)(a1 + 56) )
    free(v6);
  v7 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD *)a1;
    v9 = *(_QWORD *)a1 + 80 * v7;
    do
    {
      if ( *(_QWORD *)v8 != -8192 && *(_QWORD *)v8 != -4096 )
      {
        v10 = *(_QWORD **)(v8 + 8);
        v11 = &v10[*(unsigned int *)(v8 + 16)];
        if ( v10 != v11 )
        {
          do
          {
            while ( 1 )
            {
              v12 = (void *)*--v11;
              if ( !v12 )
                break;
              operator delete[](v12);
              *v11 = 0;
              if ( v10 == v11 )
                goto LABEL_17;
            }
          }
          while ( v10 != v11 );
LABEL_17:
          v11 = *(_QWORD **)(v8 + 8);
        }
        if ( v11 != (_QWORD *)(v8 + 24) )
          free(v11);
      }
      v8 += 80;
    }
    while ( v9 != v8 );
  }
  return operator delete();
}

