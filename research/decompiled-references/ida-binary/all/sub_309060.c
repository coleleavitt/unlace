unsigned __int64 __fastcall desktops_merge_handler_t__::vfunc_7(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-88h]
  __int64 v15; // [rsp+8h] [rbp-80h] BYREF
  __int64 v16; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+18h] [rbp-70h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  int v19; // [rsp+28h] [rbp-60h] BYREF
  void *v20; // [rsp+30h] [rbp-58h]
  int *v21; // [rsp+38h] [rbp-50h]
  int *v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-40h]
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a2 == 8 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v20 = nullptr;
    v21 = &v19;
    v22 = &v19;
    v23 = 0;
    v7 = *(int *)(v4 + 16);
    v19 = 0;
    j__switch_dbctx(v7);
    sub_308D10(&v18);
    j__switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 20LL));
    sub_308D10(&v18);
    j__switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16));
    v8 = "$ desktops";
    netnode_check(&v15, "$ desktops", 0, 1);
    for ( i = (__int64)v21; (int *)i != &v19; i = std::_Rb_tree_increment(i) )
    {
      v13 = netnode_hashval_long(v15, *(_QWORD *)(i + 32), 72, v9, v10, v11, v14, v15, v16);
      if ( !v13 )
        v13 = -1;
      v16 = v13;
      if ( !(unsigned __int8)netnode_exist(&v16) )
      {
        v8 = nullptr;
        if ( !(unsigned __int8)netnode_check(&v16, 0, 0, 1) )
          continue;
        v8 = *(const char **)(i + 32);
        v17 = v16;
        if ( !(unsigned __int8)netnode_hashset(v15, v8, &v17, 8, 72) )
          continue;
      }
      v8 = *(const char **)(i + 56);
      if ( (unsigned __int8)netnode_setblob(v16, v8, (*(_QWORD *)(i + 64) == 0) + *(_QWORD *)(i + 64) - 1LL, 0, 83) )
      {
        v8 = (const char *)-1LL;
        netnode_supset(v16, -1, i + 80, 8, 83);
      }
    }
    sub_2FF1C0(v20, v8);
  }
  return v24 - __readfsqword(0x28u);
}
