void __fastcall sub_EC16A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // r13
  char *v10; // rbp
  char *v11; // r15
  char *v12; // rdi
  int v13; // ebp
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v14 = a1 + 16;
  v3 = sub_2237400(a1, a1 + 16, a2, 136, v15);
  v4 = *(_QWORD *)a1;
  v5 = v3;
  v6 = *(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v6 )
  {
    v7 = v3;
    do
    {
      v8 = *(_DWORD *)v4;
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 20) = 2;
      *(_DWORD *)v7 = v8;
      *(_QWORD *)(v7 + 8) = v7 + 24;
      if ( *(_DWORD *)(v4 + 16) )
        sub_EC1300(v7 + 8, (__int64 *)(v4 + 8));
      v4 += 136;
      v7 += 136;
    }
    while ( v6 != v4 );
    v9 = *(_QWORD *)a1;
    v6 = *(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 136;
          v10 = *(char **)(v6 + 8);
          v11 = &v10[56 * *(unsigned int *)(v6 + 16)];
          if ( v10 != v11 )
          {
            do
            {
              while ( 1 )
              {
                v11 -= 56;
                v12 = *((char **)v11 + 2);
                if ( v12 == v11 + 32 )
                  break;
                free(v12);
                if ( v10 == v11 )
                  goto LABEL_10;
              }
            }
            while ( v10 != v11 );
LABEL_10:
            v10 = *(char **)(v6 + 8);
          }
          if ( v10 == (char *)(v6 + 24) )
            break;
          free(v10);
          if ( v6 == v9 )
          {
            v6 = *(_QWORD *)a1;
            goto LABEL_14;
          }
        }
      }
      while ( v6 != v9 );
      v6 = *(_QWORD *)a1;
    }
  }
LABEL_14:
  v13 = v15[0];
  if ( v14 != v6 )
    free((void *)v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v13;
}
