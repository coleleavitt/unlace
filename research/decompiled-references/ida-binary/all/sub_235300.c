__int64 __fastcall sub_235300(__int64 a1, char a2)
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
  int *v17; // rsi
  int *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 bpt_kernel_interface; // rax
  __int64 result; // rax
  int *v24; // r8
  void *v25; // rax
  size_t v26; // r8
  int *v27; // r9
  void *v28; // rax
  int *v29; // rbp
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  char v32; // cl
  int *v33; // rax
  _BOOL4 v34; // r13d
  int *v35; // [rsp+0h] [rbp-58h]
  int *v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 *v37[9]; // [rsp+10h] [rbp-48h] BYREF

  v37[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 )
  {
    v5 = (int *)qword_8CC4F0;
    if ( !a2 )
      goto LABEL_38;
LABEL_5:
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v5;
    v8 = (unsigned __int64 *)(a1 + 24);
    v9 = &dword_8CC4E8;
    v10 = &dword_8CC4E8;
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
    if ( v9 == &dword_8CC4E8 || v6 < *((_QWORD *)v9 + 4) )
    {
      v8 = (unsigned __int64 *)(a1 + 24);
      goto LABEL_13;
    }
    return 0;
  }
  if ( *(_QWORD *)(a1 + 24) != -1 || (result = 0, *(_QWORD *)(a1 + 32)) )
  {
    v5 = (int *)qword_8CC4F0;
    if ( !a2 )
    {
LABEL_38:
      v8 = (unsigned __int64 *)(a1 + 24);
      if ( !v5 )
      {
        v10 = &dword_8CC4E8;
        goto LABEL_19;
      }
      v6 = *(_QWORD *)(a1 + 24);
LABEL_13:
      v10 = &dword_8CC4E8;
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
      if ( v10 != &dword_8CC4E8 && v6 >= *((_QWORD *)v10 + 4) )
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
            v27 = *(int **)a1;
            v28 = *((void **)v10 + 5);
            if ( *((_QWORD *)v10 + 7) < v15 )
            {
              v36 = *(int **)a1;
              v28 = (void *)qvector_reserve(v10 + 10, *((_QWORD *)v10 + 5), *(_QWORD *)(a1 + 8), 1);
              v27 = v36;
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
        v16 = (int *)qword_8CC4B0;
        if ( qword_8CC4B0 )
        {
          v17 = *(int **)(a1 + 24);
          v18 = &dword_8CC4A8;
          do
          {
            while ( 1 )
            {
              v19 = *((_QWORD *)v16 + 2);
              v20 = *((_QWORD *)v16 + 3);
              if ( *((_QWORD *)v16 + 4) < (unsigned __int64)v17 )
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
          if ( v18 != &dword_8CC4A8 && (unsigned __int64)v17 >= *((_QWORD *)v18 + 4) )
          {
LABEL_31:
            if ( v18 + 10 != (int *)a1 )
            {
              v21 = *(_QWORD *)(a1 + 8);
              if ( v21 > 1 )
              {
                v24 = *(int **)a1;
                v25 = *((void **)v18 + 5);
                if ( *((_QWORD *)v18 + 7) < v21 )
                {
                  v35 = *(int **)a1;
                  v25 = (void *)qvector_reserve(v18 + 10, *((_QWORD *)v18 + 5), *(_QWORD *)(a1 + 8), 1);
                  v24 = v35;
                  *((_QWORD *)v18 + 5) = v25;
                }
                *((_QWORD *)v18 + 6) = v21;
                v17 = v24;
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
            v29 = (int *)qword_8CC530;
            v30 = *(_QWORD *)(a1 + 24);
            if ( qword_8CC530 )
            {
              while ( 1 )
              {
                v31 = *((_QWORD *)v29 + 4);
                v17 = *((int **)v29 + 2);
                v32 = 0;
                v33 = *((int **)v29 + 3);
                if ( v30 < v31 )
                {
                  v33 = *((int **)v29 + 2);
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
                  sub_22C740(a1);
                  bpt_kernel_interface = get_bpt_kernel_interface(a1, v17);
                  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 240LL))(
                    bpt_kernel_interface,
                    a1,
                    1);
                  mark_builtin_widgets(0x8000, 0, 1);
                  return 1;
                }
                goto LABEL_56;
              }
              if ( v29 == (int *)qword_8CC538 )
              {
LABEL_56:
                v34 = 1;
                if ( v29 != &dword_8CC528 )
                  v34 = v30 < *((_QWORD *)v29 + 4);
                goto LABEL_58;
              }
            }
            else
            {
              v29 = (int *)qword_8CC538;
              if ( (int *)qword_8CC538 == &dword_8CC528 )
              {
                v34 = 1;
LABEL_58:
                v17 = (int *)operator new(0x28u);
                *((_QWORD *)v17 + 4) = *(_QWORD *)(a1 + 24);
                std::_Rb_tree_insert_and_rebalance(v34, v17, v29, &dword_8CC528);
                ++qword_8CC548;
                goto LABEL_35;
              }
              v29 = &dword_8CC528;
            }
            v31 = *(_QWORD *)(std::_Rb_tree_decrement(v29) + 32);
            goto LABEL_55;
          }
        }
        else
        {
          v18 = &dword_8CC4A8;
        }
        v17 = v18;
        v37[0] = v8;
        v18 = (int *)sub_227D50(&qword_8CC4A0, v18, v37);
        goto LABEL_31;
      }
LABEL_19:
      v37[0] = v8;
      v10 = (int *)sub_227D50(&qword_8CC4E0, v10, v37);
      goto LABEL_20;
    }
    goto LABEL_5;
  }
  return result;
}
