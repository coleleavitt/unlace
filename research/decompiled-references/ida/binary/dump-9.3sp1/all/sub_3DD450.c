__int64 __fastcall sub_3DD450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 i; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 j; // rbp
  __int64 *v26; // rax
  __int64 v27; // rdi

  v4 = *(_QWORD *)(a2 + 64);
  if ( v4 && (unsigned int)(*(_DWORD *)(v4 + 60) - 1) >= 2 )
    v4 = 0;
  v5 = *(_QWORD *)(v4 + 64);
  v8 = sub_3D2ED0(**(_QWORD **)(a1 + 16), v5);
  if ( !v8 )
    return 0;
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v8;
  v9 = j__qalloc_or_throw(224, v5, v6, v7);
  sub_256FC0((__int64 *)v9, v8);
  sub_2523C0(v9, v8, v10, v11);
  v14 = *(_QWORD *)(a3 + 56);
  if ( v14 == -1 )
    v15 = 0;
  else
    v15 = sub_256E60(v9 + 16, v14);
  sub_3CA670(v9, v15, v12, v13);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v9);
      v17 = *(_QWORD *)(v9 + 184);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v9 + 192);
        if ( v18 )
        {
          for ( i = 0; i != v18; ++i )
          {
            v20 = (__int64 *)(v17 + 24 * i);
            v21 = *v20;
            if ( *v20 )
            {
              v20[1] = 0;
              qfree(v21);
              v17 = *(_QWORD *)(v9 + 184);
            }
          }
        }
        *(_QWORD *)(v9 + 192) = 0;
        qfree(v17);
      }
      v22 = *(_QWORD *)(v9 + 160);
      if ( v22 )
      {
        *(_QWORD *)(v9 + 168) = 0;
        qfree(v22);
      }
      v23 = *(_QWORD *)(v9 + 128);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v9 + 136);
        if ( v24 )
        {
          for ( j = 0; j != v24; ++j )
          {
            v26 = (__int64 *)(v23 + 32 * j);
            v27 = *v26;
            if ( *v26 )
            {
              v26[1] = 0;
              qfree(v27);
              v23 = *(_QWORD *)(v9 + 128);
            }
          }
        }
        *(_QWORD *)(v9 + 136) = 0;
        qfree(v23);
      }
      sub_255050(v9 + 16);
      j__qfree(v9);
    }
  }
  return 1;
}
