unsigned __int64 __fastcall sub_623FA0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r12
  _QWORD *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rbx
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 56);
  if ( !v2 )
    goto LABEL_17;
  v3 = (_QWORD *)(a1 + 48);
  v5 = (_QWORD *)(a1 + 48);
  do
  {
    while ( 1 )
    {
      v6 = v2[2];
      v7 = v2[3];
      if ( v2[4] >= a2 )
        break;
      v2 = (_QWORD *)v2[3];
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = v2;
    v2 = (_QWORD *)v2[2];
  }
  while ( v6 );
LABEL_6:
  if ( v3 == v5 || a2 < v5[4] )
  {
LABEL_17:
    if ( !under_debugger )
      interr(2450);
    BUG();
  }
  v8 = switch_dbctx(*(int *)(a1 + 8));
  v9 = sub_7BEFD0(*(_QWORD *)(v8 + 1672) + 2328LL, v8, &v16, *((int *)v5 + 18), 65);
  v10 = -1;
  if ( v9 )
    v10 = v16;
  if ( v5[6] )
  {
    v16 = v10;
    v15 = v10;
    sub_622EE0((_QWORD *)(*(_QWORD *)(v8 + 1672) + 2336LL), a2);
    sub_7BE850(&v16, v8, a2, 339);
    v10 = v15;
  }
  if ( v5[5] != -1 )
    sub_623C90(v8, v10, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
  v11 = std::_Rb_tree_rebalance_for_erase(v5, v3);
  v12 = *(void **)(v11 + 48);
  v13 = (void *)v11;
  if ( v12 )
  {
    *(_QWORD *)(v11 + 56) = 0;
    qfree(v12);
  }
  operator delete(v13, 0x50u);
  --*(_QWORD *)(a1 + 80);
  return v17 - __readfsqword(0x28u);
}
