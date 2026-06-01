unsigned __int64 __fastcall sub_4A3BC0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v14; // r13d
  unsigned int *v15; // r10
  int v16; // edx
  unsigned int *v17; // r15
  unsigned int v18; // r14d
  __int64 v19; // rbp
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int *v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h]
  int v28; // [rsp+18h] [rbp-60h]
  int dbctx_id; // [rsp+1Ch] [rbp-5Ch]
  __int64 v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v31 = __readfsqword(0x28u);
  v26 = a2;
  v5 = 48LL * a2;
  v6 = v5 + 752;
  v7 = *(_QWORD *)(v3 + v5 + 760);
  v27 = v6;
  v8 = v3 + v6;
  if ( v7 )
  {
    v10 = v8;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v7 + 16);
        v12 = *(_QWORD *)(v7 + 24);
        if ( *(_DWORD *)(v7 + 32) >= (unsigned int)a3 )
          break;
        v7 = *(_QWORD *)(v7 + 24);
        if ( !v12 )
          goto LABEL_6;
      }
      v10 = v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v11 );
LABEL_6:
    if ( v10 != v8 && (unsigned int)a3 >= *(_DWORD *)(v10 + 32) )
    {
      v14 = *(_DWORD *)(a1 + 4 * v26 + 16);
      if ( get_dbctx_qty(v12, v8, a3, v11) )
        dbctx_id = get_dbctx_id();
      else
        dbctx_id = -1;
      v30 = switch_dbctx(v14);
      v15 = *(unsigned int **)(v10 + 40);
      v25 = &v15[*(_QWORD *)(v10 + 48)];
      if ( v25 != v15 )
      {
        v16 = 1;
        v17 = *(unsigned int **)(v10 + 40);
        if ( a2 )
          v16 = -(a2 != 1);
        v28 = v16;
        do
        {
          v18 = *v17;
          sub_651490(*(_QWORD *)(v30 + 1672), 0, *v17);
          if ( a2 != 2 )
            sub_4A0820(*(_QWORD *)(a1 + 8) + 120LL, a2, v28, v18, 0, 0);
          ++v17;
        }
        while ( v25 != v17 );
      }
      v19 = *(_QWORD *)(a1 + 8);
      v20 = std::_Rb_tree_rebalance_for_erase(v10, v19 + v27);
      v21 = *(void **)(v20 + 40);
      v22 = (void *)v20;
      if ( v21 )
      {
        *(_QWORD *)(v20 + 48) = 0;
        qfree(v21);
      }
      operator delete(v22, 0x40u);
      --*(_QWORD *)(v19 + 48 * v26 + 784);
      if ( dbctx_id != -1
        && dbctx_id < (unsigned __int64)get_dbctx_qty(v22, 64, v23, v24)
        && (unsigned __int8)sub_3FB5F0() )
      {
        switch_dbctx(dbctx_id);
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}
