__int64 __fastcall sub_401BA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  int *v9; // rax
  unsigned __int64 v10; // rsi
  int *v11; // r13
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  void *v16; // r15
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD **v20; // rdx
  unsigned int v21; // ebp
  _QWORD **v22; // rbx
  void *v23; // rdi
  __int64 v25; // rax
  char v26[8]; // [rsp+10h] [rbp-78h] BYREF
  int v27; // [rsp+18h] [rbp-70h] BYREF
  void *v28; // [rsp+20h] [rbp-68h]
  int *v29; // [rsp+28h] [rbp-60h]
  int *v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v6 = a1[1];
  if ( v6 <= 0xFE )
    return 0;
  v7 = *a1;
  v27 = 0;
  v29 = &v27;
  v8 = v7 + 56 * v6;
  v30 = &v27;
  v28 = nullptr;
  v31 = 0;
  if ( v8 == v7 )
    return 0;
  v9 = nullptr;
  while ( 1 )
  {
    if ( !v9 )
    {
      v11 = &v27;
LABEL_11:
      v14 = operator new(0x30u);
      v15 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)(v14 + 40) = 0;
      v16 = (void *)v14;
      *(_QWORD *)(v14 + 32) = v15;
      if ( v11 == &v27 )
      {
        if ( v31 )
        {
          v13 = v30;
          v11 = nullptr;
          if ( *((_QWORD *)v30 + 4) < v15 )
            goto LABEL_16;
        }
      }
      else
      {
        v17 = *((_QWORD *)v11 + 4);
        if ( v15 < v17 )
        {
          v13 = v11;
          if ( v29 == v11 )
            goto LABEL_16;
          v18 = std::_Rb_tree_decrement();
          v13 = (_QWORD *)v18;
          if ( *(_QWORD *)(v18 + 32) >= v15 )
            goto LABEL_15;
          if ( *(_QWORD *)(v18 + 24) )
            v13 = v11;
          else
            v11 = nullptr;
LABEL_16:
          if ( v13 )
            goto LABEL_17;
          goto LABEL_27;
        }
        if ( v17 >= v15 )
        {
LABEL_27:
          if ( v16 )
            operator delete(v16, 0x30u);
          goto LABEL_18;
        }
        if ( v30 == v11 )
        {
LABEL_26:
          v13 = v11;
          if ( v11 )
          {
LABEL_17:
            v11 = (int *)v16;
            std::_Rb_tree_insert_and_rebalance();
            ++v31;
            goto LABEL_18;
          }
          goto LABEL_27;
        }
        v25 = std::_Rb_tree_increment();
        v13 = (_QWORD *)v25;
        if ( v15 < *(_QWORD *)(v25 + 32) )
        {
          if ( *((_QWORD *)v11 + 3) )
          {
            v11 = (int *)v25;
            goto LABEL_16;
          }
          goto LABEL_26;
        }
      }
LABEL_15:
      v11 = (int *)sub_3FEFC0((__int64)v26, v15);
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v7 + 48);
    v11 = &v27;
    do
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)v9 + 2);
        v13 = *((_QWORD **)v9 + 3);
        if ( *((_QWORD *)v9 + 4) < v10 )
          break;
        v11 = v9;
        v9 = *((int **)v9 + 2);
        if ( !v12 )
          goto LABEL_9;
      }
      v9 = *((int **)v9 + 3);
    }
    while ( v13 );
LABEL_9:
    if ( v11 == &v27 || v10 < *((_QWORD *)v11 + 4) )
      goto LABEL_11;
LABEL_18:
    v19 = *((_QWORD *)v11 + 5) + 1LL;
    *((_QWORD *)v11 + 5) = v19;
    if ( v19 == 255 )
      break;
    v20 = (_QWORD **)v28;
    v7 += 56;
    v9 = (int *)v28;
    if ( v8 == v7 )
    {
      v21 = 0;
      goto LABEL_21;
    }
  }
  set_error_data(0, *(_QWORD *)(v7 + 48), v13, v12, a5, a6);
  v20 = (_QWORD **)v28;
  v21 = -30;
LABEL_21:
  v22 = v20;
  while ( v22 )
  {
    sub_3FF5F0(v22[3]);
    v23 = v22;
    v22 = (_QWORD **)v22[2];
    operator delete(v23, 0x30u);
  }
  return v21;
}

