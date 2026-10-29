__int64 __fastcall sub_4CA100(__int64 a1)
{
  _QWORD *v1; // r12
  char *v2; // rdx
  __int64 v3; // rbp
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  void *v9; // rdi

  v1 = *(_QWORD **)(a1 + 1720);
  v2 = (char *)v1[40];
  if ( v2 )
  {
    v3 = v1[41];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)v1[40];
        }
      }
    }
    v1[41] = 0;
    qfree(v2);
    v1[40] = 0;
    v1[42] = 0;
  }
  v7 = v1[3];
  while ( v7 )
  {
    v8 = (_QWORD *)v7;
    sub_4C8FC0(*(_QWORD **)(v7 + 24));
    v9 = *(void **)(v7 + 32);
    v7 = *(_QWORD *)(v7 + 16);
    if ( v9 )
    {
      v8[5] = 0;
      qfree(v9);
    }
    operator delete(v8, 0x40u);
  }
  v1[3] = 0;
  v1[4] = v1 + 2;
  v1[5] = v1 + 2;
  v1[6] = 0;
  return register_undo_handlers(&unk_2B2CF40, 10, 0, sub_4C9280);
}
