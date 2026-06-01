void __fastcall sub_1670150(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  char *v8; // rbp
  char *v9; // rbx
  char *v10; // rdi

  v2 = *a1;
  v3 = *a1 + 144LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v3 )
  {
    do
    {
      *(_DWORD *)a2 = *(_DWORD *)v2;
      v5 = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 8) = v5;
      *(_QWORD *)(a2 + 16) = a2 + 32;
      *(_DWORD *)(a2 + 28) = 2;
      if ( *(_DWORD *)(v2 + 24) )
        sub_166FDB0(a2 + 16, (__int64 *)(v2 + 16));
      v2 += 144;
      a2 += 144;
    }
    while ( v3 != v2 );
    v6 = *a1;
    v7 = *a1 + 144LL * *((unsigned int *)a1 + 2);
    if ( *a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 144;
          v8 = *(char **)(v7 + 16);
          v9 = &v8[56 * *(unsigned int *)(v7 + 24)];
          if ( v8 != v9 )
          {
            do
            {
              while ( 1 )
              {
                v9 -= 56;
                v10 = *((char **)v9 + 2);
                if ( v10 == v9 + 32 )
                  break;
                free(v10);
                if ( v8 == v9 )
                  goto LABEL_10;
              }
            }
            while ( v8 != v9 );
LABEL_10:
            v8 = *(char **)(v7 + 16);
          }
          if ( v8 == (char *)(v7 + 32) )
            break;
          free(v8);
          if ( v7 == v6 )
            return;
        }
      }
      while ( v7 != v6 );
    }
  }
}
