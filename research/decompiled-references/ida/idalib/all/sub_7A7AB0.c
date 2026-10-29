void __fastcall sub_7A7AB0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  char *v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  char *v10; // rax
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rdi
  __int64 v14; // r13
  __int64 j; // r12
  char *v16; // r14
  char *v17; // rdx
  __int64 v18; // r15
  __int64 k; // rbx
  char *v20; // rax
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-40h]

  sub_7A7A10(a1, 1);
  sub_7A1A30(a1);
  v2 = *(_QWORD **)(a1 + 608);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    sub_79EE70(v3);
  }
  memset(*(void **)(a1 + 592), 0, 8LL * *(_QWORD *)(a1 + 600));
  v4 = *(void **)(a1 + 592);
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  if ( v4 != (void *)(a1 + 640) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 600));
  v5 = *(void **)(a1 + 312);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 320) = 0;
    qfree(v5);
  }
  v6 = *(void **)(a1 + 264);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    qfree(v6);
  }
  v7 = *(char **)(a1 + 240);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 248);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = &v7[24 * i];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = *(char **)(a1 + 240);
        }
      }
    }
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v7);
  }
  sub_7A0990(a1 + 88);
  v12 = *(void **)(a1 + 88);
  if ( v12 != (void *)(a1 + 136) )
    operator delete(v12, 8LL * *(_QWORD *)(a1 + 96));
  v13 = *(char **)(a1 + 56);
  if ( v13 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      v14 = 0;
      for ( j = 0; j != v23; ++j )
      {
        v16 = &v13[v14];
        v17 = *(char **)&v13[v14];
        if ( v17 )
        {
          v18 = *((_QWORD *)v16 + 1);
          if ( v18 )
          {
            for ( k = 0; k != v18; ++k )
            {
              v20 = &v17[24 * k];
              v21 = *(void **)v20;
              if ( *(_QWORD *)v20 )
              {
                *((_QWORD *)v20 + 1) = 0;
                qfree(v21);
                v17 = *(char **)v16;
              }
            }
          }
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17);
          v13 = *(char **)(a1 + 56);
        }
        v14 += 56;
      }
    }
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v13);
  }
  v22 = *(void **)(a1 + 32);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v22);
  }
}
