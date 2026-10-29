unsigned __int64 __fastcall sub_5C9D00(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 dbctx_id; // r13
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 i; // rbp
  _QWORD *v9; // r14
  unsigned __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  dbctx_id = -1;
  v5 = *(_DWORD *)(a1 + 88);
  v14 = __readfsqword(0x28u);
  if ( get_dbctx_qty(a1, a2, a3, a4) )
    dbctx_id = (int)get_dbctx_id();
  switch_dbctx(v5);
  v6 = *(_QWORD *)(a1 + 1616);
  v7 = *(_QWORD *)(v6 + 24);
  for ( i = v7 + 16LL * *(_QWORD *)(v6 + 32); i != v7; v7 += 16 )
  {
    while ( (*(_BYTE *)(v7 + 8) & 1) == 0 )
    {
      v7 += 16;
      if ( i == v7 )
        goto LABEL_11;
    }
    v9 = *(_QWORD **)(a1 + 1672);
    v10 = sub_505D70((__int64)(v9 + 213), *(_QWORD *)v7);
    a2 = v10;
    if ( v10 && *((char *)v10 + 17) < 0 )
      a2 = sub_505D70((__int64)(v9 + 213), v10[3]);
    sub_5B9D80(v9, (__int64)a2);
  }
LABEL_11:
  sub_540F60(a1);
  if ( (_DWORD)dbctx_id != -1 && dbctx_id < get_dbctx_qty(a1, a2, v11, v12) && (unsigned __int8)sub_3FB5F0() )
    switch_dbctx(dbctx_id);
  return v14 - __readfsqword(0x28u);
}
