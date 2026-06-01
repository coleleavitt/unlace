__int64 __fastcall sub_4A3DE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // ebp
  __int64 v6; // r13
  int v7; // edx
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_DWORD *)(*(_QWORD *)(a1 + 40) + 424 * a2 + 176) )
    sub_492C10();
  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 40) + 424 * a2;
  v3 = switch_dbctx(*(int *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 1672) + 8LL);
  sub_4A3BC0(v4, v5, *(unsigned int *)(v2 + 176));
  del_numbered_type(v6, *(unsigned int *)(v2 + 176));
  if ( v5 != 2 )
  {
    v7 = 1;
    if ( v5 )
      v7 = -(v5 != 1);
    sub_4A0820(*(_QWORD *)(v4 + 8) + 120LL, v5, v7, *(_DWORD *)(v2 + 176), 0, 0);
  }
  v8 = *(void **)v2;
  if ( *(_QWORD *)v2 )
  {
    *(_QWORD *)(v2 + 8) = 0;
    qfree(v8);
    *(_QWORD *)v2 = 0;
    *(_QWORD *)(v2 + 16) = 0;
  }
  v9 = *(void **)(v2 + 24);
  if ( v9 )
  {
    *(_QWORD *)(v2 + 32) = 0;
    qfree(v9);
    *(_QWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 40) = 0;
  }
  v10 = *(void **)(v2 + 48);
  if ( v10 )
  {
    *(_QWORD *)(v2 + 56) = 0;
    qfree(v10);
    *(_QWORD *)(v2 + 48) = 0;
    *(_QWORD *)(v2 + 64) = 0;
  }
  v11 = *(void **)(v2 + 72);
  if ( v11 )
  {
    *(_QWORD *)(v2 + 80) = 0;
    qfree(v11);
    *(_QWORD *)(v2 + 72) = 0;
    *(_QWORD *)(v2 + 88) = 0;
  }
  v12 = *(void **)(v2 + 96);
  if ( v12 )
  {
    *(_QWORD *)(v2 + 104) = 0;
    qfree(v12);
    *(_QWORD *)(v2 + 96) = 0;
    *(_QWORD *)(v2 + 112) = 0;
  }
  v13 = *(void **)(v2 + 128);
  *(_DWORD *)(v2 + 120) = 0;
  if ( v13 )
  {
    *(_QWORD *)(v2 + 136) = 0;
    qfree(v13);
    *(_QWORD *)(v2 + 128) = 0;
    *(_QWORD *)(v2 + 144) = 0;
  }
  v14 = *(void **)(v2 + 152);
  if ( v14 )
  {
    *(_QWORD *)(v2 + 160) = 0;
    qfree(v14);
    *(_QWORD *)(v2 + 152) = 0;
    *(_QWORD *)(v2 + 168) = 0;
  }
  v15 = *(void **)(v2 + 192);
  *(_BYTE *)(v2 + 184) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  if ( v15 )
  {
    *(_QWORD *)(v2 + 200) = 0;
    qfree(v15);
    *(_QWORD *)(v2 + 192) = 0;
    *(_QWORD *)(v2 + 208) = 0;
  }
  v16 = *(void **)(v2 + 216);
  if ( v16 )
  {
    *(_QWORD *)(v2 + 224) = 0;
    qfree(v16);
    *(_QWORD *)(v2 + 216) = 0;
    *(_QWORD *)(v2 + 232) = 0;
  }
  sub_6B8E80(v2 + 240);
  *(_QWORD *)(v2 + 408) = 0;
  *(_WORD *)(v2 + 416) = 0;
  return 0;
}
