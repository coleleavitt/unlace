unsigned __int64 *__fastcall sub_5CC900(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rbp
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rdx
  __int64 *v12; // rcx
  unsigned __int64 *func; // rax
  unsigned __int64 *v14; // r15
  int *v15; // rdx
  unsigned __int64 v16; // rdi
  int *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  int *v22; // r13
  unsigned __int64 v23; // rcx
  int *v24; // rdx
  __int64 v25; // rax
  _BOOL8 v26; // rdi
  __int64 v27; // rdi
  int v28; // ebp
  unsigned __int64 v29; // r13
  __int64 v30; // r12
  unsigned __int64 *v31; // rax
  _QWORD **v32; // rbx
  void *v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+8h] [rbp-A0h]
  _QWORD v36[2]; // [rsp+10h] [rbp-98h] BYREF
  char v37; // [rsp+21h] [rbp-87h]
  __int64 v38; // [rsp+30h] [rbp-78h] BYREF
  int v39; // [rsp+38h] [rbp-70h] BYREF
  void *v40; // [rsp+40h] [rbp-68h]
  int *v41; // [rsp+48h] [rbp-60h]
  int *v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_40E8C0(a1, a2)
    || ((v4 = ea2node(a2), netnode_supval(v4, 1, &v38, 8, 65) <= 0) || (v5 = v38 - 1, !v38))
    && (v5 = sub_5CC7C0(*a1, a2), v5 == -1)
    || (v6 = sub_505D70((__int64)(a1 + 213), v5), (v7 = v6) == nullptr)
    || *((char *)v6 + 17) < 0 && (v7 = sub_505D70((__int64)(a1 + 213), v6[3])) == nullptr )
  {
    v9 = a2;
    v39 = 0;
    v40 = nullptr;
    v41 = &v39;
    v42 = &v39;
    v43 = 0;
    v10 = xrefblk_t_first_to(v36, a2, 5);
    v12 = &v38;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(v37 - 16) <= 1u )
          goto LABEL_46;
        func = (unsigned __int64 *)get_func(v36[0]);
        v14 = func;
        if ( func )
          break;
LABEL_29:
        if ( !(unsigned __int8)xrefblk_t_next_to(v36) )
          goto LABEL_30;
      }
      v15 = (int *)v40;
      if ( v40 )
      {
        v16 = *func;
        v17 = &v39;
        do
        {
          while ( 1 )
          {
            v9 = *((_QWORD *)v15 + 2);
            v18 = *((_QWORD *)v15 + 3);
            if ( *((_QWORD *)v15 + 4) < v16 )
              break;
            v17 = v15;
            v15 = *((int **)v15 + 2);
            if ( !v9 )
              goto LABEL_16;
          }
          v15 = *((int **)v15 + 3);
        }
        while ( v18 );
LABEL_16:
        if ( v17 != &v39 && v16 >= *((_QWORD *)v17 + 4) )
          goto LABEL_28;
      }
      else
      {
        v17 = &v39;
      }
      v19 = operator new(0x30u);
      v21 = *v14;
      *(_DWORD *)(v19 + 40) = 0;
      v22 = (int *)v19;
      *(_QWORD *)(v19 + 32) = v21;
      if ( v17 == &v39 )
      {
        if ( v43 )
        {
          v24 = v42;
          v17 = nullptr;
          if ( *((_QWORD *)v42 + 4) < v21 )
            goto LABEL_23;
        }
      }
      else
      {
        v23 = *((_QWORD *)v17 + 4);
        if ( v21 < v23 )
        {
          v24 = v17;
          if ( v41 == v17 )
            goto LABEL_23;
          v25 = std::_Rb_tree_decrement(v17);
          v24 = (int *)v25;
          if ( *(_QWORD *)(v25 + 32) >= v21 )
            goto LABEL_22;
          if ( *(_QWORD *)(v25 + 24) )
            v24 = v17;
          else
            v17 = nullptr;
LABEL_23:
          if ( v24 )
          {
            if ( v17 || v24 == &v39 )
            {
              v26 = 1;
LABEL_27:
              v9 = (__int64)v22;
              v17 = v22;
              std::_Rb_tree_insert_and_rebalance(v26, v22, v24, &v39);
              ++v43;
LABEL_28:
              ++v17[10];
              goto LABEL_29;
            }
            v23 = *((_QWORD *)v24 + 4);
LABEL_57:
            v26 = v21 < v23;
            goto LABEL_27;
          }
LABEL_41:
          if ( v22 )
          {
            v9 = 48;
            operator delete(v22, 0x30u);
          }
          goto LABEL_28;
        }
        if ( v23 >= v21 )
          goto LABEL_41;
        if ( v42 == v17 )
        {
LABEL_40:
          v24 = v17;
          if ( v17 )
            goto LABEL_57;
          goto LABEL_41;
        }
        v35 = *((_QWORD *)v17 + 4);
        v34 = std::_Rb_tree_increment(v17, v9, v20, v23);
        v24 = (int *)v34;
        if ( v21 < *(_QWORD *)(v34 + 32) )
        {
          v23 = v35;
          if ( *((_QWORD *)v17 + 3) )
          {
            v17 = (int *)v34;
            goto LABEL_23;
          }
          goto LABEL_40;
        }
      }
LABEL_22:
      v9 = v21;
      v17 = (int *)sub_5C4500((__int64)&v38, v21);
      goto LABEL_23;
    }
LABEL_30:
    v27 = (__int64)v41;
    v28 = 0;
    v29 = -1;
    if ( v41 == &v39 )
      goto LABEL_46;
    do
    {
      if ( *(_DWORD *)(v27 + 40) > v28 )
      {
        v29 = *(_QWORD *)(v27 + 32);
        v28 = *(_DWORD *)(v27 + 40);
      }
      v27 = std::_Rb_tree_increment(v27, v9, v11, v12);
    }
    while ( (int *)v27 != &v39 );
    if ( v29 == -1 || (v30 = (__int64)(a1 + 213), v31 = sub_505D70(v30, v29), (v7 = v31) == nullptr) )
    {
LABEL_46:
      v7 = nullptr;
    }
    else if ( *((char *)v31 + 17) < 0 )
    {
      v7 = sub_505D70(v30, v31[3]);
    }
    v32 = (_QWORD **)v40;
    if ( v40 )
    {
      do
      {
        sub_5C53C0(v32[3]);
        v33 = v32;
        v32 = (_QWORD **)v32[2];
        operator delete(v33, 0x30u);
      }
      while ( v32 );
    }
  }
  return v7;
}
