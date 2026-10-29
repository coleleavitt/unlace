__int64 __fastcall sub_4F7A30(__int64 a1)
{
  _QWORD *v1; // rbp
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // r12
  void *v12; // rdi

  v1 = *(_QWORD **)(a1 + 1568);
  v2 = (char *)v1[17];
  if ( v2 )
  {
    v3 = v1[18];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v8);
        }
        v2 = (char *)v1[17];
        v4 += 56;
      }
    }
    v1[18] = 0;
    qfree(v2);
    v1[17] = 0;
    v1[19] = 0;
  }
  v9 = (void *)v1[5];
  if ( v9 )
  {
    v1[6] = 0;
    qfree(v9);
    v1[5] = 0;
    v1[7] = 0;
  }
  v10 = v1[10];
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_4F5F50(*(_QWORD **)(v10 + 24));
    v12 = *(void **)(v10 + 32);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[5] = 0;
      qfree(v12);
    }
    operator delete(v11, 0x40u);
  }
  v1[10] = 0;
  v1[11] = v1 + 9;
  v1[12] = v1 + 9;
  v1[13] = 0;
  register_undo_handler(131, 0, 0, 0);
  register_undo_handler(130, 0, 0, 0);
  register_undo_handler(129, 0, 0, 0);
  register_undo_handler(128, 0, 0, 0);
  register_undo_handler(127, 0, 0, 0);
  register_undo_handler(125, 0, 0, 0);
  register_undo_handler(126, 0, 0, 0);
  register_undo_handler(124, 0, 0, 0);
  register_undo_handler(123, 0, 0, 0);
  return register_undo_handler(122, 0, 0, 0);
}

