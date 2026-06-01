unsigned __int64 __fastcall sub_480900(__int64 a1, int a2)
{
  unsigned __int64 dbctx_id; // r12
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  dbctx_id = -1;
  v14 = __readfsqword(0x28u);
  if ( get_dbctx_qty() )
    dbctx_id = (int)get_dbctx_id();
  switch_dbctx(a2);
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v6 = *(void **)(a1 + 48);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v7 = *(void **)(a1 + 72);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v8 = *(void **)(a1 + 96);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v9 = *(void **)(a1 + 128);
  *(_DWORD *)(a1 + 120) = 0;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  v10 = *(void **)(a1 + 152);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  v11 = *(void **)(a1 + 192);
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  v12 = *(void **)(a1 + 216);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  sub_698590(a1 + 240);
  *(_QWORD *)(a1 + 400) = 0;
  *(_WORD *)(a1 + 408) = 0;
  if ( (_DWORD)dbctx_id != -1 && dbctx_id < get_dbctx_qty() && (unsigned __int8)sub_3E8690() )
    switch_dbctx(dbctx_id);
  return v14 - __readfsqword(0x28u);
}

