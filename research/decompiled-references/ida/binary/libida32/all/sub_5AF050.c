unsigned __int64 __fastcall sub_5AF050(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 dbctx_id; // r13
  int v5; // ebx
  __int64 v6; // rax
  unsigned int *v7; // rbx
  unsigned int *i; // rbp
  _QWORD *v9; // r14
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  dbctx_id = -1;
  v5 = *(_DWORD *)(a1 + 88);
  v14 = __readfsqword(0x28u);
  if ( get_dbctx_qty(a1, a2, a3, a4) )
    dbctx_id = (int)get_dbctx_id();
  switch_dbctx(v5);
  v6 = *(_QWORD *)(a1 + 1424);
  v7 = *(unsigned int **)(v6 + 16);
  for ( i = &v7[2 * *(_QWORD *)(v6 + 24)]; i != v7; v7 += 2 )
  {
    while ( (v7[1] & 1) == 0 )
    {
      v7 += 2;
      if ( i == v7 )
        goto LABEL_11;
    }
    v9 = *(_QWORD **)(a1 + 1480);
    v10 = sub_4EE820((__int64)(v9 + 203), *v7);
    a2 = v10;
    if ( v10 && *((char *)v10 + 9) < 0 )
      a2 = sub_4EE820((__int64)(v9 + 203), v10[4]);
    sub_59F920(v9, (__int64)a2);
  }
LABEL_11:
  sub_528240(a1);
  if ( (_DWORD)dbctx_id != -1 && dbctx_id < get_dbctx_qty(a1, a2, v11, v12) && (unsigned __int8)sub_3E8690() )
    switch_dbctx(dbctx_id);
  return v14 - __readfsqword(0x28u);
}

