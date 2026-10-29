__int64 __fastcall sub_13F8E0(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall ***i)(TApplication *); // rbx
  __int64 v4; // rax
  __int64 (__fastcall **v5)(TApplication *); // rbp
  int v6; // esi
  int *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r14d
  void *v12; // r15
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // r14
  __int64 result; // rax
  int *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // zf
  void *v24; // rdi
  size_t v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  const void *v29; // r12
  void *v30; // rdi
  __int64 v31; // rax

  if ( !qword_252EE8 )
  {
    for ( i = (__int64 (__fastcall ***)(TApplication *))&unk_231AE0; &off_233600 != i; i += 2 )
    {
      v4 = qword_252ED0;
      v5 = i[1];
      if ( !qword_252ED0 )
        goto LABEL_31;
      v6 = *(_DWORD *)i;
      v7 = &dword_252EC8;
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
      if ( v7 == &dword_252EC8 )
      {
LABEL_31:
        v22 = operator new(0x40u);
        v11 = *(_DWORD *)i;
        v23 = qword_252EE8 == 0;
        *(_QWORD *)(v22 + 40) = 0;
        v12 = (void *)v22;
        *(_DWORD *)(v22 + 32) = v11;
        *(_OWORD *)(v22 + 48) = 0;
        if ( v23 )
          goto LABEL_33;
        v14 = qword_252EE0;
        v7 = nullptr;
        if ( *(_DWORD *)(qword_252EE0 + 32) >= v11 )
          goto LABEL_33;
      }
      else
      {
        if ( v6 >= v7[8] )
          goto LABEL_17;
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
            goto LABEL_29;
          if ( (int *)qword_252EE0 == v7 )
          {
LABEL_42:
            if ( !v7 )
            {
LABEL_29:
              if ( v12 )
                operator delete(v12, 0x40u);
              goto LABEL_17;
            }
            goto LABEL_16;
          }
          v26 = std::_Rb_tree_increment();
          v14 = v26;
          if ( *(_DWORD *)(v26 + 32) <= v11 )
            goto LABEL_33;
          if ( !*((_QWORD *)v7 + 3) )
            goto LABEL_42;
          v7 = (int *)v26;
        }
        else
        {
          v14 = (__int64)v7;
          if ( (int *)qword_252ED8 == v7 )
            goto LABEL_15;
          v15 = std::_Rb_tree_decrement();
          v14 = v15;
          if ( *(_DWORD *)(v15 + 32) >= v11 )
          {
LABEL_33:
            v7 = (int *)sub_13F600((__int64)&unk_252EC0, v11);
            goto LABEL_15;
          }
          if ( *(_QWORD *)(v15 + 24) )
            v14 = (__int64)v7;
          else
            v7 = nullptr;
        }
      }
LABEL_15:
      if ( !v14 )
        goto LABEL_29;
LABEL_16:
      v7 = (int *)v12;
      std::_Rb_tree_insert_and_rebalance();
      ++qword_252EE8;
LABEL_17:
      if ( v5 && (v16 = strlen((const char *)v5), (v17 = v16) != 0) )
      {
        v24 = *((void **)v7 + 5);
        v25 = v16 + 1;
        if ( *((_QWORD *)v7 + 7) < v16 + 1 )
        {
          v27 = qvector_reserve();
          *((_QWORD *)v7 + 5) = v27;
          v24 = (void *)v27;
        }
        *((_QWORD *)v7 + 6) = v25;
        memmove(v24, v5, v17);
        *(_BYTE *)(*((_QWORD *)v7 + 5) + v17) = 0;
      }
      else
      {
        *((_QWORD *)v7 + 6) = 0;
      }
    }
  }
  result = qword_252ED0;
  if ( !qword_252ED0 )
    return 0;
  v19 = &dword_252EC8;
  do
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(result + 16);
      v21 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) < a3 )
        break;
      v19 = (int *)result;
      result = *(_QWORD *)(result + 16);
      if ( !v20 )
        goto LABEL_26;
    }
    result = *(_QWORD *)(result + 24);
  }
  while ( v21 );
LABEL_26:
  if ( v19 != &dword_252EC8 && v19[8] <= a3 )
  {
    if ( (int *)a2 != v19 + 10 )
    {
      v28 = *((_QWORD *)v19 + 6);
      if ( v28 < 2 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        return 1;
      }
      v29 = *((const void **)v19 + 5);
      v30 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v28 )
      {
        v31 = qvector_reserve();
        *(_QWORD *)a2 = v31;
        v30 = (void *)v31;
      }
      *(_QWORD *)(a2 + 8) = v28;
      memmove(v30, v29, v28 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v28 - 1) = 0;
    }
    return 1;
  }
  return result;
}

