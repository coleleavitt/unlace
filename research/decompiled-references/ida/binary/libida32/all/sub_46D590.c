void __fastcall sub_46D590(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 *v9; // r14
  int hidden_range_qty; // ebx
  __int64 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  if ( a3 != a2[1] )
    sub_46CE40(a2, a3);
  if ( a3 > 0 )
  {
    v6 = v5 + 4 * v3;
    v7 = 0;
    v17 = v6;
    do
    {
      v8 = 0;
      switch_dbctx(*(int *)(v5 + 16));
      v9 = (__int64 *)(v7 + *a2);
      hidden_range_qty = get_hidden_range_qty();
      if ( hidden_range_qty > 0 )
      {
        do
        {
          v11 = (__int64 *)getn_hidden_range(v8);
          if ( v11 )
          {
            v12 = *v11;
            v13 = v9[1];
            v14 = *v9;
            if ( v9[2] < (unsigned __int64)(v13 + 1) )
            {
              v15 = qvector_reserve(v9, v14, v13 + 1, 8);
              *v9 = v15;
              v14 = v15;
              v13 = v9[1];
            }
            *(_QWORD *)(v14 + 8 * v13) = v12;
            ++v9[1];
          }
          ++v8;
        }
        while ( hidden_range_qty != v8 );
      }
      v5 += 4;
      v7 += 24;
    }
    while ( v5 != v17 );
  }
}

