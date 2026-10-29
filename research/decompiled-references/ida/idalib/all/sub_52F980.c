unsigned __int64 __fastcall sub_52F980(__int64 *a1, char a2)
{
  __int64 *v3; // rax
  void *v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // r15
  int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 *v12; // r14
  unsigned __int64 v13; // rcx
  __int64 *v14; // rax
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD **v20; // rbx
  void *v21; // rdi
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-A8h]
  int v25[2]; // [rsp+8h] [rbp-A0h]
  int v26[2]; // [rsp+10h] [rbp-98h]
  int v27; // [rsp+20h] [rbp-88h]
  int v29[2]; // [rsp+28h] [rbp-80h]
  int v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+38h] [rbp-70h] BYREF
  void *v32; // [rsp+40h] [rbp-68h]
  int v33[2]; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  __int64 v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v3 = a1 + 1;
  v4 = (void *)a1[1];
  *(_QWORD *)v29 = v3;
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4);
    a1[1] = 0;
    a1[3] = 0;
  }
  v5 = *a1;
  *(_QWORD *)v33 = &v31;
  v34 = (__int64)&v31;
  *(_QWORD *)v25 = a1 + 5;
  LODWORD(v31) = 0;
  v32 = nullptr;
  v35 = 0;
  v6 = sub_7BE710(a1 + 5, v5, -1, 65);
  if ( v6 <= 0 )
  {
    *((_BYTE *)a1 + 32) = 0;
    goto LABEL_26;
  }
  v7 = 0;
  v8 = 0;
  v9 = -1;
  *(_QWORD *)v26 = (unsigned int)(v6 - 1);
  while ( 1 )
  {
    v10 = sub_7BE710(*(_QWORD *)v25, *a1, v7, 65);
    v11 = v10 - 1;
    if ( !v10 )
      break;
    v12 = (__int64 *)v32;
    if ( !v32 )
    {
      v12 = &v31;
      if ( *(__int64 **)v33 == &v31 )
      {
        HIBYTE(v27) = 1;
        v12 = &v31;
        goto LABEL_16;
      }
LABEL_30:
      v13 = *(_QWORD *)(std::_Rb_tree_decrement(v12) + 32);
LABEL_13:
      if ( v13 >= v11 )
        break;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v13 = v12[4];
      v14 = (__int64 *)v12[2];
      v15 = 1;
      if ( v11 >= v13 )
      {
        v14 = (__int64 *)v12[3];
        v15 = 0;
      }
      if ( !v14 )
        break;
      v12 = v14;
    }
    if ( !v15 )
      goto LABEL_13;
    if ( *(__int64 **)v33 != v12 )
      goto LABEL_30;
LABEL_14:
    HIBYTE(v27) = 1;
    if ( v12 != &v31 )
      HIBYTE(v27) = v11 < v12[4];
LABEL_16:
    v16 = operator new(0x28u);
    *(_QWORD *)(v16 + 32) = v11;
    std::_Rb_tree_insert_and_rebalance(HIBYTE(v27), v16, v12, &v31);
    v17 = a1[2];
    ++v35;
    v18 = a1[1];
    if ( a1[3] < (unsigned __int64)(v17 + 1) )
    {
      v23 = qvector_reserve(*(_QWORD *)v29, v18, v17 + 1, 8);
      a1[1] = v23;
      v17 = a1[2];
      v18 = v23;
    }
    *(_QWORD *)(v18 + 8 * v17) = v11;
    v19 = v7 + 1;
    ++a1[2];
    if ( *(_QWORD *)v26 == v7 )
      goto LABEL_23;
LABEL_19:
    v7 = v19;
  }
  ++v8;
  v19 = v7 + 1;
  if ( v9 == -1 )
    v9 = v7;
  if ( *(_QWORD *)v26 != v7 )
    goto LABEL_19;
LABEL_23:
  *((_BYTE *)a1 + 32) = 0;
  if ( v9 != -1 )
  {
    if ( !a2 )
    {
      if ( !under_debugger )
        interr(1731);
      BUG();
    }
    sub_84F5B0(
      "%d bad structure node(s) deleted\n",
      v24,
      v25[0],
      v26[0],
      (int)&v31,
      v27,
      v29[0],
      v30,
      v31,
      (int)v32,
      v33[0],
      v34);
    sub_52F890(a1, v9);
  }
LABEL_26:
  v20 = (_QWORD **)v32;
  if ( v32 )
  {
    do
    {
      sub_52E670(v20[3]);
      v21 = v20;
      v20 = (_QWORD **)v20[2];
      operator delete(v21, 0x28u);
    }
    while ( v20 );
  }
  return v36 - __readfsqword(0x28u);
}
