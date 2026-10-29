__int64 __fastcall sub_C53A0(__int64 a1, char a2)
{
  __int64 result; // rax
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  _QWORD *v8; // rdx
  unsigned int *v9; // r14
  int *v10; // r8
  int *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  _QWORD *v17; // rax
  unsigned int v18; // esi
  int *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 bpt_kernel_interface; // rax
  _BYTE *v24; // r8
  void *v25; // rax
  size_t v26; // r8
  _BYTE *v27; // r9
  void *v28; // rax
  _DWORD *v29; // rbp
  unsigned int v30; // r12d
  unsigned int v31; // edx
  char v32; // cl
  _DWORD *v33; // rax
  _BYTE *v34; // [rsp+0h] [rbp-58h]
  _BYTE *v35; // [rsp+8h] [rbp-50h]
  unsigned int *v36[9]; // [rsp+10h] [rbp-48h] BYREF

  v36[1] = (unsigned int *)__readfsqword(0x28u);
  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 )
  {
    v6 = qword_2514D0;
    if ( !a2 )
    {
LABEL_37:
      v9 = (unsigned int *)(a1 + 24);
      if ( v6 )
      {
        v7 = *(_DWORD *)(a1 + 24);
        goto LABEL_13;
      }
      v11 = &dword_2514C8;
LABEL_41:
      v36[0] = v9;
      v11 = (int *)sub_B8410(&qword_2514C0, (__int64)v11, v36);
      goto LABEL_19;
    }
  }
  else
  {
    result = 0;
    if ( *(_QWORD *)(a1 + 24) == 0xFFFFFFFFLL )
      return result;
    v6 = qword_2514D0;
    if ( !a2 )
      goto LABEL_37;
  }
  v7 = *(_DWORD *)(a1 + 24);
  v8 = v6;
  v9 = (unsigned int *)(a1 + 24);
  v10 = &dword_2514C8;
  v11 = &dword_2514C8;
  if ( !v6 )
    goto LABEL_41;
  do
  {
    while ( 1 )
    {
      v12 = v8[2];
      v13 = v8[3];
      if ( *((_DWORD *)v8 + 8) < v7 )
        break;
      v10 = (int *)v8;
      v8 = (_QWORD *)v8[2];
      if ( !v12 )
        goto LABEL_10;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v13 );
LABEL_10:
  if ( v10 != &dword_2514C8 && v7 >= v10[8] )
    return 0;
  v9 = (unsigned int *)(a1 + 24);
LABEL_13:
  v11 = &dword_2514C8;
  do
  {
    while ( 1 )
    {
      v14 = v6[2];
      v15 = v6[3];
      if ( *((_DWORD *)v6 + 8) < v7 )
        break;
      v11 = (int *)v6;
      v6 = (_QWORD *)v6[2];
      if ( !v14 )
        goto LABEL_17;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( v15 );
LABEL_17:
  if ( v11 == &dword_2514C8 || v7 < v11[8] )
    goto LABEL_41;
LABEL_19:
  if ( (int *)a1 != v11 + 10 )
  {
    v16 = *(_QWORD *)(a1 + 8);
    if ( !v16 || (v26 = v16 - 1, v16 == 1) )
    {
      *((_QWORD *)v11 + 6) = 0;
    }
    else
    {
      v27 = *(_BYTE **)a1;
      v28 = *((void **)v11 + 5);
      if ( *((_QWORD *)v11 + 7) < v16 )
      {
        v35 = *(_BYTE **)a1;
        v28 = (void *)qvector_reserve();
        v27 = v35;
        v26 = v16 - 1;
        *((_QWORD *)v11 + 5) = v28;
      }
      *((_QWORD *)v11 + 6) = v16;
      memmove(v28, v27, v26);
      *(_BYTE *)(*((_QWORD *)v11 + 5) + v16 - 1) = 0;
    }
  }
  v11[16] = *(_DWORD *)(a1 + 24);
  v11[17] = *(_DWORD *)(a1 + 28);
  v11[18] = *(_DWORD *)(a1 + 32);
  v17 = qword_251490;
  if ( !qword_251490 )
  {
    v19 = &dword_251488;
LABEL_43:
    v36[0] = v9;
    v19 = (int *)sub_B8410(&qword_251480, (__int64)v19, v36);
    goto LABEL_29;
  }
  v18 = *(_DWORD *)(a1 + 24);
  v19 = &dword_251488;
  do
  {
    while ( 1 )
    {
      v20 = v17[2];
      v21 = v17[3];
      if ( *((_DWORD *)v17 + 8) < v18 )
        break;
      v19 = (int *)v17;
      v17 = (_QWORD *)v17[2];
      if ( !v20 )
        goto LABEL_27;
    }
    v17 = (_QWORD *)v17[3];
  }
  while ( v21 );
LABEL_27:
  if ( v19 == &dword_251488 || v18 < v19[8] )
    goto LABEL_43;
LABEL_29:
  if ( v19 + 10 != (int *)a1 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( v22 > 1 )
    {
      v24 = *(_BYTE **)a1;
      v25 = *((void **)v19 + 5);
      if ( *((_QWORD *)v19 + 7) < v22 )
      {
        v34 = *(_BYTE **)a1;
        v25 = (void *)qvector_reserve();
        v24 = v34;
        *((_QWORD *)v19 + 5) = v25;
      }
      *((_QWORD *)v19 + 6) = v22;
      memmove(v25, v24, v22 - 1);
      *(_BYTE *)(*((_QWORD *)v19 + 5) + v22 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v19 + 6) = 0;
    }
  }
  v19[16] = *(_DWORD *)(a1 + 24);
  v19[17] = *(_DWORD *)(a1 + 28);
  v19[18] = *(_DWORD *)(a1 + 32);
  if ( !a2 )
    goto LABEL_33;
  v29 = qword_251510;
  v30 = *(_DWORD *)(a1 + 24);
  if ( !qword_251510 )
  {
    if ( (int *)qword_251518 == &dword_251508 )
      goto LABEL_59;
LABEL_61:
    v31 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    goto LABEL_58;
  }
  while ( 1 )
  {
    v31 = v29[8];
    v32 = 0;
    v33 = *((_DWORD **)v29 + 3);
    if ( v30 < v31 )
    {
      v33 = *((_DWORD **)v29 + 2);
      v32 = a2;
    }
    if ( !v33 )
      break;
    v29 = v33;
  }
  if ( v32 )
  {
    if ( v29 == (_DWORD *)qword_251518 )
      goto LABEL_59;
    goto LABEL_61;
  }
LABEL_58:
  if ( v31 < v30 )
  {
LABEL_59:
    *(_DWORD *)(operator new(0x28u) + 32) = *(_DWORD *)(a1 + 24);
    std::_Rb_tree_insert_and_rebalance();
    ++qword_251528;
  }
LABEL_33:
  sub_BE430(a1);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    a1,
    1);
  mark_builtin_widgets();
  return 1;
}

