unsigned int *__fastcall sub_5B1A80(__int64 *a1, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rsi
  unsigned int *v6; // rax
  unsigned int *v7; // rbp
  unsigned int *func; // rax
  unsigned int *v10; // r15
  _QWORD *v11; // rdx
  unsigned int v12; // edi
  int *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r15d
  int *v18; // r13
  unsigned int v19; // ecx
  _DWORD *v20; // rdx
  __int64 v21; // rax
  int *v22; // rdi
  int v23; // ebp
  unsigned int v24; // r13d
  __int64 v25; // r12
  unsigned int *v26; // rax
  _QWORD **v27; // rbx
  void *v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // eax
  _DWORD v31[2]; // [rsp+14h] [rbp-84h] BYREF
  char v32; // [rsp+1Dh] [rbp-7Bh]
  int v33; // [rsp+20h] [rbp-78h] BYREF
  int v34; // [rsp+28h] [rbp-70h] BYREF
  void *v35; // [rsp+30h] [rbp-68h]
  int *v36; // [rsp+38h] [rbp-60h]
  int *v37; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3FB750(a1, a2)
    || ((v4 = ea2node(a2), netnode_supval(v4, 1, &v33, 4, 65) <= 0) || (v5 = (unsigned int)(v33 - 1), !v33))
    && (v30 = sub_5B1940(*a1, a2), v5 = v30, v30 == -1)
    || (v6 = sub_4EE820((__int64)(a1 + 203), v5), (v7 = v6) == nullptr)
    || *((char *)v6 + 9) < 0 && (v7 = sub_4EE820((__int64)(a1 + 203), v6[4])) == nullptr )
  {
    v34 = 0;
    v35 = nullptr;
    v36 = &v34;
    v37 = &v34;
    v38 = 0;
    if ( (unsigned __int8)xrefblk_t_first_to(v31, a2, 5) )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(v32 - 16) <= 1u )
          goto LABEL_43;
        func = (unsigned int *)get_func(v31[0]);
        v10 = func;
        if ( func )
          break;
LABEL_26:
        if ( !(unsigned __int8)xrefblk_t_next_to(v31) )
          goto LABEL_27;
      }
      v11 = v35;
      if ( v35 )
      {
        v12 = *func;
        v13 = &v34;
        do
        {
          while ( 1 )
          {
            v14 = v11[2];
            v15 = v11[3];
            if ( *((_DWORD *)v11 + 8) < v12 )
              break;
            v13 = (int *)v11;
            v11 = (_QWORD *)v11[2];
            if ( !v14 )
              goto LABEL_16;
          }
          v11 = (_QWORD *)v11[3];
        }
        while ( v15 );
LABEL_16:
        if ( v13 != &v34 && v12 >= v13[8] )
          goto LABEL_25;
      }
      else
      {
        v13 = &v34;
      }
      v16 = operator new(0x28u);
      v17 = *v10;
      *(_DWORD *)(v16 + 36) = 0;
      v18 = (int *)v16;
      *(_DWORD *)(v16 + 32) = v17;
      if ( v13 == &v34 )
      {
        if ( v38 )
        {
          v20 = v37;
          v13 = nullptr;
          if ( v37[8] < v17 )
            goto LABEL_23;
        }
      }
      else
      {
        v19 = v13[8];
        if ( v17 < v19 )
        {
          v20 = v13;
          if ( v36 == v13 )
            goto LABEL_23;
          v21 = std::_Rb_tree_decrement();
          v20 = (_DWORD *)v21;
          if ( *(_DWORD *)(v21 + 32) >= v17 )
            goto LABEL_22;
          if ( *(_QWORD *)(v21 + 24) )
            v20 = v13;
          else
            v13 = nullptr;
LABEL_23:
          if ( v20 )
          {
LABEL_24:
            v13 = v18;
            std::_Rb_tree_insert_and_rebalance();
            ++v38;
LABEL_25:
            ++v13[9];
            goto LABEL_26;
          }
LABEL_38:
          if ( v18 )
            operator delete(v18, 0x28u);
          goto LABEL_25;
        }
        if ( v19 >= v17 )
          goto LABEL_38;
        if ( v37 == v13 )
        {
LABEL_37:
          if ( v13 )
            goto LABEL_24;
          goto LABEL_38;
        }
        v29 = std::_Rb_tree_increment();
        v20 = (_DWORD *)v29;
        if ( v17 < *(_DWORD *)(v29 + 32) )
        {
          if ( *((_QWORD *)v13 + 3) )
          {
            v13 = (int *)v29;
            goto LABEL_23;
          }
          goto LABEL_37;
        }
      }
LABEL_22:
      v13 = (int *)sub_5A9FC0((__int64)&v33, v17);
      goto LABEL_23;
    }
LABEL_27:
    v22 = v36;
    v23 = 0;
    v24 = -1;
    if ( v36 == &v34 )
      goto LABEL_43;
    do
    {
      if ( v22[9] > v23 )
      {
        v24 = v22[8];
        v23 = v22[9];
      }
      v22 = (int *)std::_Rb_tree_increment();
    }
    while ( v22 != &v34 );
    if ( v24 == -1 || (v25 = (__int64)(a1 + 203), v26 = sub_4EE820(v25, v24), (v7 = v26) == nullptr) )
    {
LABEL_43:
      v7 = nullptr;
    }
    else if ( *((char *)v26 + 9) < 0 )
    {
      v7 = sub_4EE820(v25, v26[4]);
    }
    v27 = (_QWORD **)v35;
    if ( v35 )
    {
      do
      {
        sub_5AAE20(v27[3]);
        v28 = v27;
        v27 = (_QWORD **)v27[2];
        operator delete(v28, 0x28u);
      }
      while ( v27 );
    }
  }
  return v7;
}

