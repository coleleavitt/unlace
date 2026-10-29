unsigned __int64 __fastcall sub_533020(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax
  _QWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  void *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  void *v26; // rdi
  unsigned __int64 v27; // [rsp+0h] [rbp-78h]
  unsigned int v28; // [rsp+8h] [rbp-70h]
  _QWORD *v29; // [rsp+8h] [rbp-70h]
  _QWORD *v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+10h] [rbp-68h]
  int v32; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v33 = 0;
  v6 = sub_3B90A0(a1, a2);
  if ( v6 != -1 && (unsigned __int8)sub_532DA0(a1, &v33, v6) )
  {
    v8 = *(_QWORD **)(*a1 + 1632);
    v9 = sub_3B90A0(a1, a3);
    sub_525A20((__int64)a1, &v33, v9);
    v10 = sub_3B90A0(a1, a2);
    v11 = v8[12];
    v12 = v8 + 11;
    if ( !v11 )
      goto LABEL_24;
    v13 = v8 + 11;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v11 + 16);
        v15 = *(_QWORD *)(v11 + 24);
        if ( *(_DWORD *)(v11 + 32) < v10 )
          break;
        v13 = (_QWORD *)v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v14 )
          goto LABEL_11;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v15 );
LABEL_11:
    if ( v12 == v13 || v10 < *((_DWORD *)v13 + 8) )
      goto LABEL_24;
    v27 = v33 >> 9;
    if ( v13[5] != v33 >> 9 )
    {
      if ( !under_debugger )
        interr(3173);
      BUG();
    }
    v16 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v16, 0x30u);
    --v8[15];
    v17 = sub_3B90A0(a1, a3);
    v18 = v8[12];
    v19 = v8 + 11;
    if ( !v18 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v18 + 16);
        v21 = *(_QWORD *)(v18 + 24);
        if ( *(_DWORD *)(v18 + 32) < v17 )
          break;
        v19 = (_QWORD *)v18;
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v20 )
          goto LABEL_19;
      }
      v18 = *(_QWORD *)(v18 + 24);
    }
    while ( v21 );
LABEL_19:
    if ( v12 == v19 || v17 < *((_DWORD *)v19 + 8) )
    {
LABEL_21:
      v31 = (__int64)v19;
      v28 = v17;
      v22 = operator new(0x30u);
      v23 = v28;
      *(_QWORD *)(v22 + 40) = 0;
      v29 = (_QWORD *)v22;
      *(_DWORD *)(v22 + 32) = v23;
      v24 = sub_51A080(v8 + 10, v31, v23);
      v19 = (_QWORD *)v24;
      if ( v25 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++v8[15];
        v19 = v29;
      }
      else if ( v29 )
      {
        v26 = v29;
        v30 = (_QWORD *)v24;
        operator delete(v26, 0x30u);
        v30[5] = v27;
        goto LABEL_24;
      }
    }
    v19[5] = v27;
LABEL_24:
    sub_59CD70(a1, &v33, 0, 2);
    sub_5A3DD0(a1, &v33, a2, a3);
  }
  v32 = sub_3B90A0(a1, a2);
  if ( v32 != -1 )
    sub_79BB90(&v32, *a1, 1089536, 83);
  clear_tinfo_t(&v33);
  return v34 - __readfsqword(0x28u);
}

