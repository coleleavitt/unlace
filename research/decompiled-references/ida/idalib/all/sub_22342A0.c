void __fastcall sub_22342A0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  void *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi

  *(_QWORD *)a1 = &unk_2C759E8;
  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(_QWORD *)(a1 + 192);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD **)(a1 + 96);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  memset(*(void **)(a1 + 80), 0, 8LL * *(_QWORD *)(a1 + 88));
  v6 = *(void **)(a1 + 80);
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  if ( v6 != (void *)(a1 + 128) )
    operator delete(v6);
  v7 = *(_QWORD **)(a1 + 40);
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      operator delete(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(void **)(a1 + 24);
  v11 = (_QWORD *)(a1 + 72);
  memset(v10, 0, 8 * v9);
  v12 = (_QWORD *)*(v11 - 6);
  *(v11 - 3) = 0;
  *(v11 - 4) = 0;
  if ( v12 != v11 )
    operator delete(v12);
}
