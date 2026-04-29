__int64 __fastcall sub_3DD990(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 i; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 j; // rbp
  __int64 *v19; // rax
  __int64 v20; // rdi

  v4 = *(_QWORD *)(a2 + 64);
  if ( v4 && (unsigned int)(*(_DWORD *)(v4 + 60) - 1) >= 2 )
    v4 = 0;
  v5 = sub_3D3410(**(_QWORD **)(a1 + 16), *(_QWORD *)(v4 + 64));
  if ( !v5 )
    return 0;
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v5;
  v6 = j__qalloc_or_throw(224);
  sub_257380((__int64 *)v6, v5);
  sub_252780(v6);
  v7 = *(_QWORD *)(a3 + 56);
  if ( v7 == -1 )
    v8 = 0;
  else
    v8 = sub_257220(v6 + 16, v7);
  sub_3CABB0(v6, v8);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 104))-- == 1 )
    {
      sub_258D30((__int64 *)v6);
      v10 = *(_QWORD *)(v6 + 184);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v6 + 192);
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = (__int64 *)(v10 + 24 * i);
            v14 = *v13;
            if ( *v13 )
            {
              v13[1] = 0;
              qfree(v14);
              v10 = *(_QWORD *)(v6 + 184);
            }
          }
        }
        *(_QWORD *)(v6 + 192) = 0;
        qfree(v10);
      }
      v15 = *(_QWORD *)(v6 + 160);
      if ( v15 )
      {
        *(_QWORD *)(v6 + 168) = 0;
        qfree(v15);
      }
      v16 = *(_QWORD *)(v6 + 128);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v6 + 136);
        if ( v17 )
        {
          for ( j = 0; j != v17; ++j )
          {
            v19 = (__int64 *)(v16 + 32 * j);
            v20 = *v19;
            if ( *v19 )
            {
              v19[1] = 0;
              qfree(v20);
              v16 = *(_QWORD *)(v6 + 128);
            }
          }
        }
        *(_QWORD *)(v6 + 136) = 0;
        qfree(v16);
      }
      sub_255410(v6 + 16);
      j__qfree(v6);
    }
  }
  return 1;
}
