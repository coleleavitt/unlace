void __fastcall sub_46D230(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 *v9; // r14
  int v10; // ebx
  __int64 *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  if ( a3 != a2[1] )
    sub_46CE40(a2, a3);
  if ( a3 > 0 )
  {
    v6 = 0;
    v18 = v5 + 4 * v3;
    do
    {
      v7 = 0;
      v8 = *(_QWORD *)(switch_dbctx(*(int *)(v5 + 16)) + 1480) + 2672LL;
      v9 = (__int64 *)(v6 + *a2);
      v10 = sub_4EC8E0(v8);
      if ( v10 )
      {
        do
        {
          v11 = (__int64 *)sub_4EE890(v8, v7);
          if ( v11 )
          {
            v12 = *v11;
            v13 = v9[1];
            v14 = *v9;
            if ( v9[2] < (unsigned __int64)(v13 + 1) )
            {
              v16 = v12;
              v15 = qvector_reserve(v9, v14, v13 + 1, 8);
              v12 = v16;
              *v9 = v15;
              v14 = v15;
              v13 = v9[1];
            }
            *(_QWORD *)(v14 + 8 * v13) = v12;
            ++v9[1];
          }
          ++v7;
        }
        while ( v7 != v10 );
      }
      v5 += 4;
      v6 += 24;
    }
    while ( v5 != v18 );
  }
}

