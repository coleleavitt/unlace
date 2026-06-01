void __fastcall sub_1407F20(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void ***v4; // r12
  __int64 v5; // r14
  void ***v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  void ***v10; // r13
  void **v11; // r12
  void **v12; // r15
  int v13; // r12d
  void ***v14; // [rsp+8h] [rbp-50h]
  __int64 v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v14 = (void ***)(a1 + 16);
  v3 = sub_2237400(a1, a1 + 16, a2, 96, v15);
  v4 = *(void ****)a1;
  v5 = v3;
  v6 = (void ***)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8));
  if ( *(void ****)a1 != v6 )
  {
    v7 = v3;
    do
    {
      while ( 1 )
      {
        *(_DWORD *)(v7 + 8) = 0;
        *(_QWORD *)v7 = v7 + 16;
        *(_DWORD *)(v7 + 12) = 2;
        if ( *((_DWORD *)v4 + 2) )
          break;
        v4 += 12;
        v7 += 96;
        if ( v6 == v4 )
          goto LABEL_6;
      }
      v8 = (__int64)v4;
      v9 = v7;
      v4 += 12;
      v7 += 96;
      sub_14078B0(v9, v8);
    }
    while ( v6 != v4 );
LABEL_6:
    v10 = *(void ****)a1;
    v6 = (void ***)(*(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8));
    if ( *(void ****)a1 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 12;
          v11 = *v6;
          v12 = &(*v6)[5 * *((unsigned int *)v6 + 2)];
          if ( *v6 != v12 )
          {
            do
            {
              while ( 1 )
              {
                v12 -= 5;
                if ( *v12 == v12 + 2 )
                  break;
                operator delete(*v12);
                if ( v11 == v12 )
                  goto LABEL_10;
              }
            }
            while ( v11 != v12 );
LABEL_10:
            v11 = *v6;
          }
          if ( v11 == (void **)(v6 + 2) )
            break;
          free(v11);
          if ( v6 == v10 )
          {
            v6 = *(void ****)a1;
            goto LABEL_14;
          }
        }
      }
      while ( v6 != v10 );
      v6 = *(void ****)a1;
    }
  }
LABEL_14:
  v13 = v15[0];
  if ( v14 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v13;
}
