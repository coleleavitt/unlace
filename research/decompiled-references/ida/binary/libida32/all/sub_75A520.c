void __fastcall sub_75A520(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x10u);
  }
  memset(*(void **)(a1 + 104), 0, 8LL * *(_QWORD *)(a1 + 112));
  v4 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  if ( v4 != (void *)(a1 + 152) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 112));
  v5 = *(_QWORD **)(a1 + 64);
  while ( v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    operator delete(v6, 0x10u);
  }
  memset(*(void **)(a1 + 48), 0, 8LL * *(_QWORD *)(a1 + 56));
  v7 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( v7 != (void *)(a1 + 96) )
    operator delete(v7, 8LL * *(_QWORD *)(a1 + 56));
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v8);
  }
  v9 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v9);
  }
}

