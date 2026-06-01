unsigned __int64 __fastcall sub_54C080(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  _QWORD *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  void *v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _BOOL8 v26; // rdi
  void *v27; // rdi
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  void *v29; // [rsp+8h] [rbp-70h]
  _QWORD *v30; // [rsp+8h] [rbp-70h]
  _QWORD *v31; // [rsp+8h] [rbp-70h]
  _QWORD *v32; // [rsp+10h] [rbp-68h]
  unsigned __int64 v33; // [rsp+18h] [rbp-60h]
  unsigned __int64 v34; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v34 = 0;
  v6 = sub_3BDD60(a1, a2);
  if ( v6 != -1 && (unsigned __int8)sub_54BE00(a1, &v34, v6) )
  {
    v8 = *(_QWORD **)(*a1 + 1824);
    v9 = sub_3BDD60(a1, a3);
    sub_53E720((__int64)a1, &v34, v9);
    v10 = sub_3BDD60(a1, a2);
    v11 = (_QWORD *)v8[12];
    v12 = v8 + 11;
    if ( !v11 )
      goto LABEL_27;
    v13 = v8 + 11;
    do
    {
      while ( 1 )
      {
        v14 = v11[2];
        v15 = v11[3];
        if ( v11[4] < v10 )
          break;
        v13 = v11;
        v11 = (_QWORD *)v11[2];
        if ( !v14 )
          goto LABEL_11;
      }
      v11 = (_QWORD *)v11[3];
    }
    while ( v15 );
LABEL_11:
    if ( v12 == v13 || v10 < v13[4] )
      goto LABEL_27;
    v28 = v34 >> 9;
    if ( v13[5] != v34 >> 9 )
    {
      if ( !under_debugger )
        interr(3173);
      BUG();
    }
    v16 = (void *)std::_Rb_tree_rebalance_for_erase(v13, v8 + 11);
    operator delete(v16, 0x30u);
    --v8[15];
    v17 = sub_3BDD60(a1, a3);
    v18 = (_QWORD *)v8[12];
    v19 = v8 + 11;
    if ( !v18 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v20 = v18[2];
        v21 = v18[3];
        if ( v18[4] < v17 )
          break;
        v19 = v18;
        v18 = (_QWORD *)v18[2];
        if ( !v20 )
          goto LABEL_19;
      }
      v18 = (_QWORD *)v18[3];
    }
    while ( v21 );
LABEL_19:
    if ( v12 == v19 || v17 < v19[4] )
    {
LABEL_21:
      v32 = v19;
      v29 = (void *)v17;
      v22 = (_QWORD *)operator new(0x30u);
      v23 = (unsigned __int64)v29;
      v22[5] = 0;
      v30 = v22;
      v22[4] = v23;
      v33 = v23;
      v24 = sub_5325C0(v8 + 10, v32, v23, v23);
      v19 = v24;
      if ( v25 )
      {
        v26 = v24 || v12 == v25 || v33 < v25[4];
        std::_Rb_tree_insert_and_rebalance(v26, v30, v25, v8 + 11);
        ++v8[15];
        v19 = v30;
      }
      else if ( v30 )
      {
        v27 = v30;
        v31 = v24;
        operator delete(v27, 0x30u);
        v31[5] = v28;
        goto LABEL_27;
      }
    }
    v19[5] = v28;
LABEL_27:
    sub_5B6F10(a1, &v34, 0, 2);
    sub_5BE4E0(a1, &v34, a2, a3);
  }
  v35 = sub_3BDD60(a1, a2);
  if ( v35 != -1 )
    sub_7BEF80(&v35, *a1, &stru_10A000, 83);
  clear_tinfo_t(&v34);
  return v36 - __readfsqword(0x28u);
}
