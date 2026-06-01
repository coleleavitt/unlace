unsigned __int64 __fastcall sub_607CA0(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  char v8; // al
  int v9; // r8d
  __int64 v10; // rax
  void *v11; // rdi
  void *v12; // rbp
  int v14; // [rsp+Ch] [rbp-4Ch]
  int v15; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 56);
  if ( !v2 )
    goto LABEL_17;
  v4 = (_QWORD *)(a1 + 48);
  do
  {
    while ( 1 )
    {
      v5 = v2[2];
      v6 = v2[3];
      if ( v2[4] >= (unsigned __int64)a2 )
        break;
      v2 = (_QWORD *)v2[3];
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = v2;
    v2 = (_QWORD *)v2[2];
  }
  while ( v5 );
LABEL_6:
  if ( (_QWORD *)(a1 + 48) == v4 || (unsigned __int64)a2 < v4[4] )
  {
LABEL_17:
    if ( !under_debugger )
      interr(2450);
    BUG();
  }
  v7 = switch_dbctx(*(int *)(a1 + 8));
  v8 = sub_79BBD0(*(_QWORD *)(v7 + 1480) + 2240LL, v7, &v15, *((unsigned int *)v4 + 18), 65);
  v9 = -1;
  if ( v8 )
    v9 = v15;
  if ( v4[6] )
  {
    v15 = v9;
    v14 = v9;
    sub_606C20((_QWORD *)(*(_QWORD *)(v7 + 1480) + 2248LL), a2);
    sub_79B4D0(&v15, v7, a2, 339);
    v9 = v14;
  }
  if ( *((_DWORD *)v4 + 10) != -1 )
    sub_607990(v7, v9, a2, 0xFFFFFFFF);
  v10 = std::_Rb_tree_rebalance_for_erase();
  v11 = *(void **)(v10 + 48);
  v12 = (void *)v10;
  if ( v11 )
  {
    *(_QWORD *)(v10 + 56) = 0;
    qfree(v11);
  }
  operator delete(v12, 0x50u);
  --*(_QWORD *)(a1 + 80);
  return v16 - __readfsqword(0x28u);
}

