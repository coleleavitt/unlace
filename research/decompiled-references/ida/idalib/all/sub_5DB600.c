__int64 __fastcall sub_5DB600(__int64 a1, _QWORD *a2, int a3, int a4)
{
  _QWORD *v7; // rbp
  bool v8; // zf
  __int64 v9; // rax
  void *v10; // rdi
  signed int v11; // ebx
  _QWORD *v12; // r12
  int v13; // edx
  _QWORD *v14; // rax
  bool v15; // r14
  __int64 v16; // rax
  unsigned int v17; // r12d
  int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // rsi
  unsigned int v25; // ebx
  int v27; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  ptr = nullptr;
  v30 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 4);
  v7 = a2 + 1;
  *((_DWORD *)ptr + v30) = a3;
  v8 = (_QWORD)v30 == -1;
  v9 = v30 + 1;
  *(_QWORD *)&v30 = v30 + 1;
  if ( v8 )
  {
LABEL_27:
    v10 = ptr;
    v25 = 0;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v10 = ptr;
    v11 = *((_DWORD *)ptr + v9 - 1);
    *(_QWORD *)&v30 = v9 - 1;
    if ( a4 == v11 )
      break;
    v12 = (_QWORD *)a2[2];
    if ( !v12 )
    {
      if ( v7 != (_QWORD *)a2[3] && v11 <= *(_DWORD *)(std::_Rb_tree_decrement(a2 + 1) + 32) )
        goto LABEL_14;
      v12 = a2 + 1;
      v15 = 1;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v13 = *((_DWORD *)v12 + 8);
      v14 = (_QWORD *)v12[3];
      if ( v11 < v13 )
        v14 = (_QWORD *)v12[2];
      if ( !v14 )
        break;
      v12 = v14;
    }
    if ( v11 < v13 )
    {
      if ( (_QWORD *)a2[3] == v12 )
      {
LABEL_11:
        v15 = 1;
        if ( v7 != v12 )
          v15 = v11 < *((_DWORD *)v12 + 8);
LABEL_13:
        v16 = operator new(0x28u);
        *(_DWORD *)(v16 + 32) = v11;
        std::_Rb_tree_insert_and_rebalance(v15, v16, v12, a2 + 1);
        ++a2[5];
        goto LABEL_14;
      }
      v13 = *(_DWORD *)(std::_Rb_tree_decrement(v12) + 32);
    }
    if ( v11 > v13 )
      goto LABEL_11;
LABEL_14:
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, (unsigned int)v11);
    v17 = 0;
    if ( v27 > 0 )
    {
      do
      {
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v11, v17);
        v19 = a2[2];
        if ( !v19 )
          goto LABEL_22;
        v20 = a2 + 1;
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v19 + 16);
            v22 = *(_QWORD *)(v19 + 24);
            if ( v18 <= *(_DWORD *)(v19 + 32) )
              break;
            v19 = *(_QWORD *)(v19 + 24);
            if ( !v22 )
              goto LABEL_20;
          }
          v20 = (_QWORD *)v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
        while ( v21 );
LABEL_20:
        if ( v7 == v20 || v18 < *((_DWORD *)v20 + 8) )
        {
LABEL_22:
          v23 = v30;
          v24 = ptr;
          if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v30 + 1, 4);
            v24 = ptr;
            v23 = v30;
          }
          v24[v23] = v18;
          *(_QWORD *)&v30 = v30 + 1;
        }
        ++v17;
      }
      while ( v27 != v17 );
    }
    v9 = v30;
    if ( !(_QWORD)v30 )
      goto LABEL_27;
  }
  v25 = 1;
LABEL_28:
  if ( v10 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v10);
  }
  return v25;
}
