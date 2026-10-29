void __fastcall sub_2D1400(__int64 a1, const char *a2)
{
  __int64 v3; // rbp
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 j; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 k; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (__int64 *)(*(_QWORD *)a1 + 24 * i);
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v6, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    for ( j = 0; j != v7; ++j )
    {
      v9 = (__int64 *)(*(_QWORD *)(a1 + 24) + 24 * j);
      v10 = *v9;
      if ( *v9 )
      {
        v9[1] = 0;
        qfree(v10, a2);
      }
    }
  }
  v11 = *(_QWORD *)(a1 + 80);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v11 )
  {
    for ( k = 0; k != v11; ++k )
    {
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 80 * k);
      v14 = v13[4];
      if ( v14 )
      {
        v13[5] = 0;
        qfree(v14, a2);
      }
      v15 = v13[1];
      if ( v15 )
      {
        v13[2] = 0;
        qfree(v15, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 80) = 0;
}
