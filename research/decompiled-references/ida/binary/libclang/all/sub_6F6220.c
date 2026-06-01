void __fastcall sub_6F6220(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  unsigned __int64 i; // rax
  _QWORD *v5; // r13
  unsigned int *v6; // r14
  unsigned int *v7; // r12
  unsigned int *v8; // rbp
  __int64 v9; // rcx
  unsigned int *v10; // r15
  unsigned int *v11; // rbx
  unsigned int *v12; // rdi
  _QWORD *j; // [rsp+0h] [rbp-40h]

  v2 = *(_QWORD **)a1;
  v3 = 8LL * *(unsigned int *)(a1 + 8);
  if ( v3 )
  {
    for ( i = 0; i != v3; i += 8LL )
    {
      *(_QWORD *)(a2 + i) = v2[i / 8];
      v2[i / 8] = 0;
    }
    v5 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    for ( j = *(_QWORD **)a1; j != v5; *v5 = 0 )
    {
      v6 = (unsigned int *)*--v5;
      if ( v6 )
      {
        v7 = *(unsigned int **)v6;
        v8 = (unsigned int *)(*(_QWORD *)v6 + 136LL * v6[2]);
        if ( *(unsigned int **)v6 != v8 )
        {
          do
          {
            v9 = *(v8 - 30);
            v10 = *((unsigned int **)v8 - 16);
            v8 -= 34;
            v11 = &v10[14 * v9];
            if ( v10 != v11 )
            {
              do
              {
                v11 -= 14;
                v12 = *((unsigned int **)v11 + 2);
                if ( v12 != v11 + 8 )
                  free(v12);
              }
              while ( v10 != v11 );
              v11 = *((unsigned int **)v8 + 1);
            }
            if ( v11 != v8 + 6 )
              free(v11);
          }
          while ( v7 != v8 );
          v8 = *(unsigned int **)v6;
        }
        if ( v8 != v6 + 4 )
          free(v8);
        operator delete(v6, 0x120u);
      }
    }
  }
}

