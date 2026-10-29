__int64 __fastcall sub_C6800(__int64 a1, char a2)
{
  int *v5; // rax
  unsigned __int64 v6; // rcx
  int *v7; // rdx
  unsigned __int64 *v8; // r14
  int *v9; // r8
  int *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  int *v16; // rax
  unsigned __int64 v17; // rsi
  int *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 bpt_kernel_interface; // rax
  __int64 result; // rax
  _BYTE *v24; // r8
  void *v25; // rax
  size_t v26; // r8
  _BYTE *v27; // r9
  void *v28; // rax
  _QWORD *v29; // rbp
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  char v32; // cl
  _QWORD *v33; // rax
  _BYTE *v34; // [rsp+0h] [rbp-58h]
  _BYTE *v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 *v36[9]; // [rsp+10h] [rbp-48h] BYREF

  v36[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 )
  {
    v5 = (int *)qword_252650;
    if ( !a2 )
      goto LABEL_38;
LABEL_5:
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v5;
    v8 = (unsigned __int64 *)(a1 + 24);
    v9 = &dword_252648;
    v10 = &dword_252648;
    if ( !v5 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)v7 + 2);
        v12 = *((_QWORD *)v7 + 3);
        if ( *((_QWORD *)v7 + 4) < v6 )
          break;
        v9 = v7;
        v7 = *((int **)v7 + 2);
        if ( !v11 )
          goto LABEL_10;
      }
      v7 = *((int **)v7 + 3);
    }
    while ( v12 );
LABEL_10:
    if ( v9 == &dword_252648 || v6 < *((_QWORD *)v9 + 4) )
    {
      v8 = (unsigned __int64 *)(a1 + 24);
      goto LABEL_13;
    }
    return 0;
  }
  if ( *(_QWORD *)(a1 + 24) != -1 || (result = 0, *(_QWORD *)(a1 + 32)) )
  {
    v5 = (int *)qword_252650;
    if ( !a2 )
    {
LABEL_38:
      v8 = (unsigned __int64 *)(a1 + 24);
      if ( !v5 )
      {
        v10 = &dword_252648;
        goto LABEL_19;
      }
      v6 = *(_QWORD *)(a1 + 24);
LABEL_13:
      v10 = &dword_252648;
      do
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v5 + 2);
          v14 = *((_QWORD *)v5 + 3);
          if ( *((_QWORD *)v5 + 4) < v6 )
            break;
          v10 = v5;
          v5 = *((int **)v5 + 2);
          if ( !v13 )
            goto LABEL_17;
        }
        v5 = *((int **)v5 + 3);
      }
      while ( v14 );
LABEL_17:
      if ( v10 != &dword_252648 && v6 >= *((_QWORD *)v10 + 4) )
      {
LABEL_20:
        if ( (int *)a1 != v10 + 10 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          if ( !v15 || (v26 = v15 - 1, v15 == 1) )
          {
            *((_QWORD *)v10 + 6) = 0;
          }
          else
          {
            v27 = *(_BYTE **)a1;
            v28 = *((void **)v10 + 5);
            if ( *((_QWORD *)v10 + 7) < v15 )
            {
              v35 = *(_BYTE **)a1;
              v28 = (void *)qvector_reserve();
              v27 = v35;
              v26 = v15 - 1;
              *((_QWORD *)v10 + 5) = v28;
            }
            *((_QWORD *)v10 + 6) = v15;
            memmove(v28, v27, v26);
            *(_BYTE *)(*((_QWORD *)v10 + 5) + v15 - 1) = 0;
          }
        }
        *((_QWORD *)v10 + 8) = *(_QWORD *)(a1 + 24);
        *((_QWORD *)v10 + 9) = *(_QWORD *)(a1 + 32);
        *((_QWORD *)v10 + 10) = *(_QWORD *)(a1 + 40);
        v16 = (int *)qword_252610;
        if ( qword_252610 )
        {
          v17 = *(_QWORD *)(a1 + 24);
          v18 = &dword_252608;
          do
          {
            while ( 1 )
            {
              v19 = *((_QWORD *)v16 + 2);
              v20 = *((_QWORD *)v16 + 3);
              if ( *((_QWORD *)v16 + 4) < v17 )
                break;
              v18 = v16;
              v16 = *((int **)v16 + 2);
              if ( !v19 )
                goto LABEL_28;
            }
            v16 = *((int **)v16 + 3);
          }
          while ( v20 );
LABEL_28:
          if ( v18 != &dword_252608 && v17 >= *((_QWORD *)v18 + 4) )
          {
LABEL_31:
            if ( v18 + 10 != (int *)a1 )
            {
              v21 = *(_QWORD *)(a1 + 8);
              if ( v21 > 1 )
              {
                v24 = *(_BYTE **)a1;
                v25 = *((void **)v18 + 5);
                if ( *((_QWORD *)v18 + 7) < v21 )
                {
                  v34 = *(_BYTE **)a1;
                  v25 = (void *)qvector_reserve();
                  v24 = v34;
                  *((_QWORD *)v18 + 5) = v25;
                }
                *((_QWORD *)v18 + 6) = v21;
                memmove(v25, v24, v21 - 1);
                *(_BYTE *)(*((_QWORD *)v18 + 5) + v21 - 1) = 0;
              }
              else
              {
                *((_QWORD *)v18 + 6) = 0;
              }
            }
            *((_QWORD *)v18 + 8) = *(_QWORD *)(a1 + 24);
            *((_QWORD *)v18 + 9) = *(_QWORD *)(a1 + 32);
            *((_QWORD *)v18 + 10) = *(_QWORD *)(a1 + 40);
            if ( !a2 )
              goto LABEL_35;
            v29 = qword_252690;
            v30 = *(_QWORD *)(a1 + 24);
            if ( qword_252690 )
            {
              while ( 1 )
              {
                v31 = v29[4];
                v32 = 0;
                v33 = (_QWORD *)v29[3];
                if ( v30 < v31 )
                {
                  v33 = (_QWORD *)v29[2];
                  v32 = a2;
                }
                if ( !v33 )
                  break;
                v29 = v33;
              }
              if ( !v32 )
              {
LABEL_55:
                if ( v31 >= v30 )
                {
LABEL_35:
                  sub_BEAD0(a1);
                  bpt_kernel_interface = get_bpt_kernel_interface();
                  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 240LL))(
                    bpt_kernel_interface,
                    a1,
                    1);
                  mark_builtin_widgets();
                  return 1;
                }
LABEL_56:
                *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 24);
                std::_Rb_tree_insert_and_rebalance();
                ++qword_2526A8;
                goto LABEL_35;
              }
              if ( v29 == (_QWORD *)qword_252698 )
                goto LABEL_56;
            }
            else if ( (int *)qword_252698 == &dword_252688 )
            {
              goto LABEL_56;
            }
            v31 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
            goto LABEL_55;
          }
        }
        else
        {
          v18 = &dword_252608;
        }
        v36[0] = v8;
        v18 = (int *)sub_B8950(&qword_252600, v18, v36);
        goto LABEL_31;
      }
LABEL_19:
      v36[0] = v8;
      v10 = (int *)sub_B8950(&qword_252640, v10, v36);
      goto LABEL_20;
    }
    goto LABEL_5;
  }
  return result;
}

