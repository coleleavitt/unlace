__int64 __fastcall sub_5BFA40(__int64 a1, _QWORD *a2, int a3, int a4)
{
  _QWORD *v7; // rbp
  bool v8; // zf
  __int64 v9; // rax
  void *v10; // rdi
  signed int v11; // ebx
  __int64 v12; // r12
  int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r12d
  int v16; // r14d
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *v22; // rsi
  unsigned int v23; // ebx
  int v25; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  ptr = nullptr;
  v28 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 4);
  v7 = a2 + 1;
  *((_DWORD *)ptr + v28) = a3;
  v8 = (_QWORD)v28 == -1;
  v9 = v28 + 1;
  *(_QWORD *)&v28 = v28 + 1;
  if ( v8 )
  {
LABEL_25:
    v10 = ptr;
    v23 = 0;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v10 = ptr;
    v11 = *((_DWORD *)ptr + v9 - 1);
    *(_QWORD *)&v28 = v9 - 1;
    if ( a4 == v11 )
      break;
    v12 = a2[2];
    if ( !v12 )
    {
      if ( v7 != (_QWORD *)a2[3] && v11 <= *(_DWORD *)(std::_Rb_tree_decrement() + 32) )
        goto LABEL_12;
LABEL_11:
      *(_DWORD *)(operator new(0x28u) + 32) = v11;
      std::_Rb_tree_insert_and_rebalance();
      ++a2[5];
      goto LABEL_12;
    }
    while ( 1 )
    {
      v13 = *(_DWORD *)(v12 + 32);
      v14 = *(_QWORD *)(v12 + 24);
      if ( v11 < v13 )
        v14 = *(_QWORD *)(v12 + 16);
      if ( !v14 )
        break;
      v12 = v14;
    }
    if ( v11 < v13 )
    {
      if ( a2[3] == v12 )
        goto LABEL_11;
      v13 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v11 > v13 )
      goto LABEL_11;
LABEL_12:
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, (unsigned int)v11);
    v15 = 0;
    if ( v25 > 0 )
    {
      do
      {
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v11, v15);
        v17 = a2[2];
        if ( !v17 )
          goto LABEL_20;
        v18 = a2 + 1;
        do
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v17 + 16);
            v20 = *(_QWORD *)(v17 + 24);
            if ( v16 <= *(_DWORD *)(v17 + 32) )
              break;
            v17 = *(_QWORD *)(v17 + 24);
            if ( !v20 )
              goto LABEL_18;
          }
          v18 = (_QWORD *)v17;
          v17 = *(_QWORD *)(v17 + 16);
        }
        while ( v19 );
LABEL_18:
        if ( v7 == v18 || v16 < *((_DWORD *)v18 + 8) )
        {
LABEL_20:
          v21 = v28;
          v22 = ptr;
          if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v28 + 1, 4);
            v22 = ptr;
            v21 = v28;
          }
          v22[v21] = v16;
          *(_QWORD *)&v28 = v28 + 1;
        }
        ++v15;
      }
      while ( v25 != v15 );
    }
    v9 = v28;
    if ( !(_QWORD)v28 )
      goto LABEL_25;
  }
  v23 = 1;
LABEL_26:
  if ( v10 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v10);
  }
  return v23;
}

