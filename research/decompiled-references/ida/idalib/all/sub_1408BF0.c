void __fastcall sub_1408BF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r12
  char v7; // al
  int v8; // eax
  __int64 v9; // r13
  void **v10; // rbp
  void **v11; // r12
  int v12; // ebp
  __int64 v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 112, v13);
  v3 = *(_QWORD *)a1;
  v4 = v2;
  v5 = *(_QWORD *)a1 + 112LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v5 )
  {
    v6 = v2;
    do
    {
      v8 = *(_DWORD *)v3;
      *(_DWORD *)(v6 + 16) = 0;
      *(_DWORD *)(v6 + 20) = 2;
      *(_DWORD *)v6 = v8;
      *(_QWORD *)(v6 + 8) = v6 + 24;
      if ( *(_DWORD *)(v3 + 16) )
        sub_14078B0(v6 + 8, v3 + 8);
      v7 = *(_BYTE *)(v3 + 104);
      v3 += 112;
      v6 += 112;
      *(_BYTE *)(v6 - 8) = v7;
    }
    while ( v5 != v3 );
    v9 = *(_QWORD *)a1;
    v5 = *(_QWORD *)a1 + 112LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 112;
          v10 = *(void ***)(v5 + 8);
          v11 = &v10[5 * *(unsigned int *)(v5 + 16)];
          if ( v10 != v11 )
          {
            do
            {
              while ( 1 )
              {
                v11 -= 5;
                if ( *v11 == v11 + 2 )
                  break;
                operator delete(*v11);
                if ( v10 == v11 )
                  goto LABEL_10;
              }
            }
            while ( v10 != v11 );
LABEL_10:
            v10 = *(void ***)(v5 + 8);
          }
          if ( v10 == (void **)(v5 + 24) )
            break;
          free(v10);
          if ( v5 == v9 )
          {
            v5 = *(_QWORD *)a1;
            goto LABEL_14;
          }
        }
      }
      while ( v5 != v9 );
      v5 = *(_QWORD *)a1;
    }
  }
LABEL_14:
  v12 = v13[0];
  if ( a1 + 16 != v5 )
    free((void *)v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v12;
}
