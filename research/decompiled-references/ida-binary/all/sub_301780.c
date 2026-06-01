__int64 __fastcall sub_301780(__int64 a1, __int64 *a2, int a3)
{
  __int64 *i; // rbx
  __int64 v4; // rax
  const void *v5; // rbp
  int v6; // esi
  int *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r14d
  void *v12; // r15
  int v13; // esi
  int *v14; // rdx
  __int64 v15; // rax
  _BOOL8 v16; // rdi
  size_t v17; // rax
  size_t v18; // r14
  __int64 result; // rax
  int *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v24; // zf
  void *v25; // rdi
  size_t v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  const void *v30; // r12
  void *v31; // rdi
  __int64 v32; // rax
  int v34; // [rsp+4h] [rbp-44h]

  if ( !qword_8CD848 )
  {
    for ( i = (__int64 *)&unk_863BC0; &`vtable for'msglist_copy_to_cli_ah_t != i; i += 2 )
    {
      v4 = qword_8CD830;
      v5 = (const void *)i[1];
      if ( !qword_8CD830 )
        goto LABEL_34;
      v6 = *(_DWORD *)i;
      v7 = &dword_8CD828;
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v4 + 16);
          v9 = *(_QWORD *)(v4 + 24);
          if ( v6 > *(_DWORD *)(v4 + 32) )
            break;
          v7 = (int *)v4;
          v4 = *(_QWORD *)(v4 + 16);
          if ( !v8 )
            goto LABEL_8;
        }
        v4 = *(_QWORD *)(v4 + 24);
      }
      while ( v9 );
LABEL_8:
      if ( v7 == &dword_8CD828 )
      {
LABEL_34:
        v23 = operator new(0x40u);
        v11 = *(_DWORD *)i;
        v24 = qword_8CD848 == 0;
        *(_QWORD *)(v23 + 40) = 0;
        v12 = (void *)v23;
        *(_DWORD *)(v23 + 32) = v11;
        *(_OWORD *)(v23 + 48) = 0;
        if ( v24 )
          goto LABEL_36;
        v14 = (int *)qword_8CD840;
        v7 = nullptr;
        if ( *(_DWORD *)(qword_8CD840 + 32) >= v11 )
          goto LABEL_36;
      }
      else
      {
        if ( v6 >= v7[8] )
          goto LABEL_20;
        v10 = operator new(0x40u);
        v11 = *(_DWORD *)i;
        *(_QWORD *)(v10 + 40) = 0;
        v12 = (void *)v10;
        *(_DWORD *)(v10 + 32) = v11;
        *(_OWORD *)(v10 + 48) = 0;
        v13 = v7[8];
        if ( v13 <= v11 )
        {
          if ( v13 >= v11 )
            goto LABEL_32;
          if ( (int *)qword_8CD840 == v7 )
          {
LABEL_45:
            v14 = v7;
            if ( !v7 )
            {
LABEL_32:
              if ( v12 )
                operator delete(v12, 0x40u);
              goto LABEL_20;
            }
            goto LABEL_46;
          }
          v34 = v7[8];
          v27 = std::_Rb_tree_increment(v7);
          v14 = (int *)v27;
          if ( *(_DWORD *)(v27 + 32) <= v11 )
            goto LABEL_36;
          v13 = v34;
          if ( !*((_QWORD *)v7 + 3) )
            goto LABEL_45;
          v7 = (int *)v27;
        }
        else
        {
          v14 = v7;
          if ( (int *)qword_8CD838 == v7 )
            goto LABEL_15;
          v15 = std::_Rb_tree_decrement(v7);
          v14 = (int *)v15;
          if ( *(_DWORD *)(v15 + 32) >= v11 )
          {
LABEL_36:
            v7 = (int *)sub_2FEF20((__int64)&unk_8CD820, v11);
            goto LABEL_15;
          }
          if ( *(_QWORD *)(v15 + 24) )
            v14 = v7;
          else
            v7 = nullptr;
        }
      }
LABEL_15:
      if ( !v14 )
        goto LABEL_32;
      if ( !v7 && v14 != &dword_8CD828 )
      {
        v13 = v14[8];
LABEL_46:
        v16 = v13 > v11;
        goto LABEL_19;
      }
      v16 = 1;
LABEL_19:
      v7 = (int *)v12;
      std::_Rb_tree_insert_and_rebalance(v16, v12, v14, &dword_8CD828);
      ++qword_8CD848;
LABEL_20:
      if ( v5 && (v17 = strlen((const char *)v5), (v18 = v17) != 0) )
      {
        v25 = *((void **)v7 + 5);
        v26 = v17 + 1;
        if ( *((_QWORD *)v7 + 7) < v17 + 1 )
        {
          v28 = qvector_reserve(v7 + 10, *((_QWORD *)v7 + 5), v26, 1);
          *((_QWORD *)v7 + 5) = v28;
          v25 = (void *)v28;
        }
        *((_QWORD *)v7 + 6) = v26;
        memmove(v25, v5, v18);
        *(_BYTE *)(*((_QWORD *)v7 + 5) + v18) = 0;
      }
      else
      {
        *((_QWORD *)v7 + 6) = 0;
      }
    }
  }
  result = qword_8CD830;
  if ( !qword_8CD830 )
    return 0;
  v20 = &dword_8CD828;
  do
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(result + 16);
      v22 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) < a3 )
        break;
      v20 = (int *)result;
      result = *(_QWORD *)(result + 16);
      if ( !v21 )
        goto LABEL_29;
    }
    result = *(_QWORD *)(result + 24);
  }
  while ( v22 );
LABEL_29:
  if ( v20 != &dword_8CD828 && v20[8] <= a3 )
  {
    if ( a2 != (__int64 *)(v20 + 10) )
    {
      v29 = *((_QWORD *)v20 + 6);
      if ( v29 < 2 )
      {
        a2[1] = 0;
        return 1;
      }
      v30 = *((const void **)v20 + 5);
      v31 = (void *)*a2;
      if ( a2[2] < v29 )
      {
        v32 = qvector_reserve(a2, *a2, v29, 1);
        *a2 = v32;
        v31 = (void *)v32;
      }
      a2[1] = v29;
      memmove(v31, v30, v29 - 1);
      *(_BYTE *)(*a2 + v29 - 1) = 0;
    }
    return 1;
  }
  return result;
}
