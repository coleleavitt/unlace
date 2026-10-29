__int64 __fastcall sub_721320(__int64 a1, int a2)
{
  __int64 result; // rax
  int *v3; // r14
  bool v4; // zf
  __int64 v6; // rsi
  unsigned __int16 *v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  int *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // r9
  unsigned __int16 v16; // cx
  _DWORD *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int *v22; // r12
  __int64 v23; // r13
  unsigned __int16 v24; // bx
  unsigned int v25; // r15d
  int *v26; // rdi
  __int64 v27; // rdx
  size_t v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  int v32; // r8d
  unsigned int v33; // eax
  int v34; // r10d
  unsigned int v35; // r9d
  size_t v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rdi
  void *v40; // [rsp+8h] [rbp-90h]
  int *v41; // [rsp+8h] [rbp-90h]
  void *v42; // [rsp+8h] [rbp-90h]
  void *v43; // [rsp+8h] [rbp-90h]
  char v44[8]; // [rsp+20h] [rbp-78h] BYREF
  int v45; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v46; // [rsp+30h] [rbp-68h]
  int *v47; // [rsp+38h] [rbp-60h]
  int *v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  result = 0;
  if ( a2 > 0 )
    return result;
  v3 = &v45;
  v4 = *(_WORD *)(a1 + 4) == 0;
  v45 = 0;
  v46 = nullptr;
  v47 = &v45;
  v48 = &v45;
  v49 = 0;
  if ( v4 )
  {
    v39 = nullptr;
    v19 = 0;
LABEL_53:
    v24 = 0;
    v38 = a1 + 6 * v19 + 6;
    goto LABEL_48;
  }
  v6 = (__int64)v44;
  v7 = (unsigned __int16 *)(a1 + 10);
  v8 = nullptr;
  v9 = 0;
  while ( 1 )
  {
    v10 = *v7;
    v11 = &v45;
    if ( !v8 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v12 = v8[2];
        v13 = v8[3];
        if ( *((_WORD *)v8 + 16) < (unsigned __int16)v10 )
          break;
        v11 = (int *)v8;
        v8 = (_QWORD *)v8[2];
        if ( !v12 )
          goto LABEL_9;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v13 );
LABEL_9:
    if ( v11 == &v45 || (unsigned __int16)v10 < *((_WORD *)v11 + 16) )
    {
LABEL_11:
      v14 = operator new(0x30u);
      *(_WORD *)(v14 + 32) = v10;
      v15 = (void *)v14;
      *(_QWORD *)(v14 + 40) = 0;
      if ( v11 == &v45 )
      {
        if ( v49 )
        {
          v17 = v48;
          v11 = nullptr;
          if ( *((_WORD *)v48 + 16) < (unsigned __int16)v10 )
          {
LABEL_17:
            if ( v17 )
              goto LABEL_18;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v16 = *((_WORD *)v11 + 16);
        if ( (unsigned __int16)v10 >= v16 )
        {
          if ( v16 >= (unsigned __int16)v10 )
          {
LABEL_21:
            if ( v15 )
            {
              v6 = 48;
              operator delete(v15, 0x30u);
            }
            goto LABEL_19;
          }
          if ( v48 != v11 )
          {
            v43 = (void *)v14;
            v21 = std::_Rb_tree_increment();
            v15 = v43;
            v17 = (_DWORD *)v21;
            if ( (unsigned __int16)v10 >= *(_WORD *)(v21 + 32) )
              goto LABEL_25;
            if ( *((_QWORD *)v11 + 3) )
            {
              v11 = (int *)v21;
              goto LABEL_17;
            }
          }
          if ( v11 )
          {
LABEL_18:
            v6 = (__int64)v15;
            v41 = (int *)v15;
            std::_Rb_tree_insert_and_rebalance();
            ++v49;
            v11 = v41;
            goto LABEL_19;
          }
          goto LABEL_21;
        }
        v17 = v11;
        if ( v47 == v11 )
          goto LABEL_17;
        v40 = (void *)v14;
        v18 = std::_Rb_tree_decrement();
        v15 = v40;
        v17 = (_DWORD *)v18;
        if ( *(_WORD *)(v18 + 32) < (unsigned __int16)v10 )
        {
          if ( *(_QWORD *)(v18 + 24) )
            v17 = v11;
          else
            v11 = nullptr;
          goto LABEL_17;
        }
      }
LABEL_25:
      v6 = v10;
      v42 = v15;
      v20 = sub_720FC0((__int64)v44, v10);
      v15 = v42;
      v11 = (int *)v20;
      goto LABEL_17;
    }
LABEL_19:
    *((_QWORD *)v11 + 5) = v9;
    v19 = *(__int16 *)(a1 + 4);
    ++v9;
    v7 += 3;
    if ( v9 >= v19 )
      break;
    v8 = v46;
  }
  v22 = v47;
  if ( v47 == &v45 )
  {
    v39 = v46;
    goto LABEL_53;
  }
  v23 = a1 + 6;
  v24 = 0;
  do
  {
    v28 = (size_t)v3;
    v29 = std::_Rb_tree_decrement();
    v30 = *(_DWORD *)(a1 - 8);
    v31 = v29;
    v32 = *(unsigned __int16 *)(v29 + 32);
    v33 = v32 + 1;
    if ( v32 + 1 >= v30 )
      sub_722BF0(v3, v6, v31);
    v6 = a1 + v33;
    v34 = *(unsigned __int16 *)v6;
    v35 = *(unsigned __int16 *)(v6 + (unsigned __int16)v34 + 2);
    if ( (unsigned __int16)v34 > 0x204u || v35 > 0x404 )
      sub_722BF0(v3, v6, v31);
    if ( v24 )
    {
      v36 = v34 + v35 + 4;
      v24 -= v34 + v35 + 4;
      v25 = v24;
      if ( v24 >= v33 )
        v33 = v24;
      if ( v33 >= v30 || (v28 = v30 - v33, v28 < v36) )
        sub_722BF0(v28, v6, v36);
      if ( v24 >= v30 )
        sub_722BF0(v28, v6, v36);
      memmove((void *)(a1 + v24), (const void *)v6, v36);
      v28 = (size_t)v3;
      v37 = std::_Rb_tree_decrement();
      v30 = *(_DWORD *)(a1 - 8);
      v31 = v37;
    }
    else
    {
      v24 = v32 + 1;
      v25 = (unsigned __int16)v33;
    }
    if ( v30 < v25 )
      sub_722BF0(v28, v6, v31);
    *(_WORD *)(v23 + 6LL * *(_QWORD *)(v31 + 40) + 4) = v24;
    v26 = v3;
    v3 = (int *)std::_Rb_tree_decrement();
  }
  while ( v3 != v22 );
  v38 = v23 + 6LL * *(__int16 *)(a1 + 4);
  if ( *(_DWORD *)(a1 - 8) < v25 )
    sub_722BF0(v26, v6, v27);
  v39 = v46;
LABEL_48:
  *(_WORD *)(v38 + 4) = v24;
  sub_721080(v39);
  return 1;
}

