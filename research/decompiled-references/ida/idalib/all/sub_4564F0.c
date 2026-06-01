void __fastcall sub_4564F0(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // r12
  void *v9; // rdi
  void *v10; // rdi

  v2 = (char *)a1[11];
  *a1 = &off_2B28A28;
  if ( v2 )
  {
    v3 = a1[12];
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
          v2 = (char *)a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree(v2);
  }
  v7 = a1[7];
  while ( v7 )
  {
    v8 = (_QWORD *)v7;
    sub_456150(*(_QWORD **)(v7 + 24));
    v9 = *(void **)(v7 + 32);
    v7 = *(_QWORD *)(v7 + 16);
    if ( v9 )
    {
      v8[5] = 0;
      qfree(v9);
    }
    operator delete(v8, 0x40u);
  }
  v10 = (void *)a1[2];
  *a1 = &unk_2BFA3E8;
  if ( v10 )
  {
    a1[3] = 0;
    qfree(v10);
  }
  operator delete(a1, 0x70u);
}
