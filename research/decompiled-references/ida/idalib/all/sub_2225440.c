void __fastcall sub_2225440(__int64 *a1, __int64 a2)
{
  char *v2; // r14
  __int64 v4; // rax
  char *v5; // r13
  __int64 v6; // r15
  char *v7; // rbx
  __int64 v8; // rbp
  bool v9; // zf
  char **v10; // rdx
  int v11; // eax
  char *v12; // r13
  char *v13; // rdi
  char *v14; // rax
  __int64 v15; // rbp
  void *v16; // rdi
  int v17; // ebp
  char *v18; // [rsp+8h] [rbp-50h]
  __int64 v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = (char *)(a1 + 2);
  v4 = sub_2237400(a1, a1 + 2, a2, 40, v19);
  v5 = (char *)*a1;
  v6 = v4;
  v7 = (char *)(*a1 + 40LL * *((unsigned int *)a1 + 2));
  if ( (char *)*a1 != v7 )
  {
    v8 = v4;
    do
    {
      *(_DWORD *)(v8 + 8) = 0;
      v10 = (char **)(v8 + 16);
      *(_DWORD *)(v8 + 12) = 0;
      v11 = *((_DWORD *)v5 + 2);
      *(_QWORD *)v8 = v8 + 16;
      if ( v11 )
      {
        sub_2224B70(v8, (__int64 *)v5);
        v10 = (char **)(v8 + 16);
      }
      v8 += 40;
      *(_OWORD *)(v8 - 16) = 0;
      v9 = *((_QWORD *)v5 + 3) == 0;
      *(_QWORD *)(v8 - 24) = v8;
      if ( !v9 )
        sub_9C3C90(v10, (char **)v5 + 2);
      v5 += 40;
    }
    while ( v7 != v5 );
    v12 = (char *)*a1;
    v7 = (char *)(*a1 + 40LL * *((unsigned int *)a1 + 2));
    if ( (char *)*a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 40;
          v13 = *((char **)v7 + 2);
          if ( v13 != v7 + 40 )
            free(v13);
          v14 = *(char **)v7;
          v15 = *(_QWORD *)v7 + 80LL * *((unsigned int *)v7 + 2);
          if ( *(_QWORD *)v7 != v15 )
          {
            do
            {
              while ( 1 )
              {
                v15 -= 80;
                v16 = *(void **)(v15 + 8);
                if ( v16 == (void *)(v15 + 24) )
                  break;
                v18 = v14;
                free(v16);
                v14 = v18;
                if ( v18 == (char *)v15 )
                  goto LABEL_14;
              }
            }
            while ( v14 != (char *)v15 );
LABEL_14:
            v14 = *(char **)v7;
          }
          if ( v14 == v7 + 16 )
            break;
          free(v14);
          if ( v12 == v7 )
          {
            v7 = (char *)*a1;
            goto LABEL_18;
          }
        }
      }
      while ( v12 != v7 );
      v7 = (char *)*a1;
    }
  }
LABEL_18:
  v17 = v19[0];
  if ( v2 != v7 )
    free(v7);
  *a1 = v6;
  *((_DWORD *)a1 + 3) = v17;
}
