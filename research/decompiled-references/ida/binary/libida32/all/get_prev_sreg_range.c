bool __fastcall get_prev_sreg_range(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r10
  unsigned __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // r11
  unsigned int *v9; // rbx
  unsigned int *v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdx
  bool v13; // cl
  bool result; // al
  unsigned int *v15; // rax
  unsigned __int64 v16; // r11
  unsigned int *v17; // r9
  int v18; // eax

  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1576LL);
  if ( !*(_BYTE *)(v3 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v4 = a1;
  v5 = a3 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL);
  if ( v5 >= *(_QWORD *)(v3 + 40) )
    sub_4FC970();
  v6 = v5 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v6 + 56) = a3;
  v7 = *(_QWORD *)(v3 + 32) + v6;
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(unsigned int **)v7;
  v10 = *(unsigned int **)(v7 + 24);
  if ( v10 == (unsigned int *)(*(_QWORD *)v7 + 17 * v8) || a2 < *v10 || a2 >= v10[1] )
  {
    if ( !(_DWORD)v8 )
      return 0;
    v11 = (unsigned int)(v8 - 1);
    if ( v11 >= v8 )
    {
      if ( a2 >= 0x10102 )
        return 0;
    }
    else if ( a2 >= *(unsigned int *)((char *)v9 + 17 * v11 + 4) )
    {
      goto LABEL_8;
    }
    v15 = sub_4FED00((unsigned int **)v7, a2);
    if ( v17 == v15 )
      return 0;
    v18 = -252645135 * ((_DWORD)v15 - (_DWORD)v9);
    if ( v18 == -1 )
      return 0;
    v11 = (unsigned int)(v18 - 1);
    if ( !v18 || v11 >= v16 )
      return 0;
LABEL_8:
    v12 = (_QWORD *)((char *)v9 + 17 * v11);
    v13 = v12 != nullptr;
    result = v12 != nullptr && v4 != nullptr;
    if ( !result )
      return v13;
LABEL_9:
    *v4 = *v12;
    *(_QWORD *)((char *)v4 + 5) = *(_QWORD *)((char *)v12 + 5);
    return result;
  }
  if ( v10 != v9 )
  {
    v12 = (_QWORD *)((char *)v10 - 17);
    v13 = v10 != (unsigned int *)((char *)&word_10 + 1);
    result = v10 != (unsigned int *)((char *)&word_10 + 1) && v4 != nullptr;
    if ( !result )
      return v13;
    goto LABEL_9;
  }
  return 0;
}

