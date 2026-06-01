void __fastcall sub_4B3890(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r12
  _QWORD **v4; // rbp
  _QWORD *v5; // rbx
  void *v6; // rdi
  _QWORD **v7; // rbp
  _QWORD *v8; // rbx
  void *v9; // rdi
  void **v10; // rbx
  void **v11; // rbp

  v1 = a1 + 8;
  v3 = a1 + 80;
  v4 = (_QWORD **)(a1 + 8);
  do
  {
    v5 = *v4;
    while ( v5 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      operator delete(v6, 0x20u);
    }
    ++v4;
  }
  while ( v4 != (_QWORD **)v3 );
  v7 = (_QWORD **)v3;
  do
  {
    v8 = *v7;
    while ( v8 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      operator delete(v9, 0x20u);
    }
    ++v7;
  }
  while ( (_QWORD **)(a1 + 152) != v7 );
  v10 = *(void ***)(a1 + 152);
  v11 = &v10[*(_QWORD *)(a1 + 160)];
  if ( v10 != v11 )
  {
    do
    {
      if ( *v10 )
        operator delete(*v10, 0x20u);
      ++v10;
    }
    while ( v11 != v10 );
    v11 = *(void ***)(a1 + 152);
  }
  if ( v11 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(v1 + 64) = 0;
  *(_OWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 32) = 0;
  *(_OWORD *)(v1 + 48) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_OWORD *)(v3 + 48) = 0;
}
