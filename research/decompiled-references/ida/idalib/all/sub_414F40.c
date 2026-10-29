__int64 __fastcall sub_414F40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  int *v9; // rax
  unsigned __int64 v10; // rsi
  int *v11; // r13
  __int64 v12; // rcx
  int *v13; // rdx
  int *v14; // rax
  unsigned __int64 v15; // r12
  int *v16; // r15
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  _BOOL8 v19; // rdi
  __int64 v20; // rax
  _QWORD **v21; // rdx
  unsigned int v22; // ebp
  _QWORD **v23; // rbx
  void *v24; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-80h]
  char v28[8]; // [rsp+10h] [rbp-78h] BYREF
  int v29; // [rsp+18h] [rbp-70h] BYREF
  void *v30; // [rsp+20h] [rbp-68h]
  int *v31; // [rsp+28h] [rbp-60h]
  int *v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v6 = a1[1];
  if ( v6 <= 0xFE )
    return 0;
  v7 = *a1;
  v29 = 0;
  v31 = &v29;
  v8 = v7 + 56 * v6;
  v32 = &v29;
  v30 = nullptr;
  v33 = 0;
  if ( v8 == v7 )
    return 0;
  v9 = nullptr;
  while ( 1 )
  {
    if ( !v9 )
    {
      v11 = &v29;
LABEL_11:
      v14 = (int *)operator new(0x30u);
      v15 = *(_QWORD *)(v7 + 48);
      *((_QWORD *)v14 + 5) = 0;
      v16 = v14;
      *((_QWORD *)v14 + 4) = v15;
      if ( v11 == &v29 )
      {
        if ( v33 )
        {
          v13 = v32;
          v11 = nullptr;
          if ( *((_QWORD *)v32 + 4) < v15 )
            goto LABEL_16;
        }
      }
      else
      {
        v17 = *((_QWORD *)v11 + 4);
        if ( v15 < v17 )
        {
          v13 = v11;
          if ( v31 == v11 )
            goto LABEL_16;
          v18 = std::_Rb_tree_decrement(v11);
          v13 = (int *)v18;
          if ( *(_QWORD *)(v18 + 32) >= v15 )
            goto LABEL_15;
          if ( *(_QWORD *)(v18 + 24) )
            v13 = v11;
          else
            v11 = nullptr;
LABEL_16:
          if ( v13 )
          {
            if ( v11 || v13 == &v29 )
            {
              v19 = 1;
            }
            else
            {
              v17 = *((_QWORD *)v13 + 4);
LABEL_42:
              v19 = v15 < v17;
            }
            v11 = v16;
            std::_Rb_tree_insert_and_rebalance(v19, v16, v13, &v29);
            ++v33;
            goto LABEL_21;
          }
          goto LABEL_30;
        }
        if ( v17 >= v15 )
        {
LABEL_30:
          if ( v16 )
            operator delete(v16, 0x30u);
          goto LABEL_21;
        }
        if ( v32 == v11 )
        {
LABEL_29:
          v13 = v11;
          if ( v11 )
            goto LABEL_42;
          goto LABEL_30;
        }
        v27 = *((_QWORD *)v11 + 4);
        v26 = std::_Rb_tree_increment(v11, v17, v13, v12);
        v13 = (int *)v26;
        if ( v15 < *(_QWORD *)(v26 + 32) )
        {
          v17 = v27;
          if ( *((_QWORD *)v11 + 3) )
          {
            v11 = (int *)v26;
            goto LABEL_16;
          }
          goto LABEL_29;
        }
      }
LABEL_15:
      v11 = (int *)sub_4122C0((__int64)v28, v15);
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v7 + 48);
    v11 = &v29;
    do
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)v9 + 2);
        v13 = *((int **)v9 + 3);
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
    if ( v11 == &v29 || v10 < *((_QWORD *)v11 + 4) )
      goto LABEL_11;
LABEL_21:
    v20 = *((_QWORD *)v11 + 5) + 1LL;
    *((_QWORD *)v11 + 5) = v20;
    if ( v20 == 255 )
      break;
    v21 = (_QWORD **)v30;
    v7 += 56;
    v9 = (int *)v30;
    if ( v8 == v7 )
    {
      v22 = 0;
      goto LABEL_24;
    }
  }
  set_error_data(0, *(_QWORD *)(v7 + 48), v13, v12, a5, a6);
  v21 = (_QWORD **)v30;
  v22 = -30;
LABEL_24:
  v23 = v21;
  while ( v23 )
  {
    sub_4128F0(v23[3]);
    v24 = v23;
    v23 = (_QWORD **)v23[2];
    operator delete(v24, 0x30u);
  }
  return v22;
}
