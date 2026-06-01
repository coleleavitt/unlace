void __fastcall sub_46D120(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 *v10; // r14
  int v11; // ebx
  __int64 *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  if ( a3 != a2[1] )
    sub_46CE40(a2, a3);
  if ( a3 > 0 )
  {
    v6 = 0;
    v19 = v5 + 4 * v3;
    do
    {
      v7 = 0;
      v8 = *a2;
      v9 = switch_dbctx(*(int *)(v5 + 16));
      v10 = (__int64 *)(v6 + v8);
      v11 = sub_4EC8E0(*(_QWORD *)(v9 + 1480) + 1552LL);
      if ( v11 > 0 )
      {
        do
        {
          v12 = (__int64 *)sub_4EE890(*(_QWORD *)(v9 + 1480) + 1552LL, v7);
          if ( v12 )
          {
            v13 = *v12;
            v14 = v10[1];
            v15 = *v10;
            if ( v10[2] < (unsigned __int64)(v14 + 1) )
            {
              v17 = v13;
              v16 = qvector_reserve(v10, v15, v14 + 1, 8);
              v13 = v17;
              *v10 = v16;
              v15 = v16;
              v14 = v10[1];
            }
            *(_QWORD *)(v15 + 8 * v14) = v13;
            ++v10[1];
          }
          ++v7;
        }
        while ( v7 != v11 );
      }
      v5 += 4;
      v6 += 24;
    }
    while ( v5 != v19 );
  }
}

