void __fastcall sub_4E2670(__int64 *a1, void (__fastcall *a2)(void *a1), double a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 i; // r15
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  void (__fastcall ***v16)(void *); // r14
  void (__fastcall *v17)(void *); // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 j; // r12
  __int64 v23; // r14
  volatile signed __int32 *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbp
  QT::QPersistentModelIndex *v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 k; // rbp
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rbp
  void *v35; // rdi
  double v36; // xmm0_8
  __int64 v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-40h]

  *a1 = (__int64)&unk_894498;
  v6 = a1[234];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = xmmword_8D1E68;
  v8 = (_QWORD *)qword_8D1E60;
  a1[234] = 0;
  v9 = &v8[2 * v7];
  if ( v8 == v9 )
    goto LABEL_51;
  while ( a1 != (__int64 *)v8[1] )
  {
    v8 += 2;
    if ( v9 == v8 )
      goto LABEL_51;
  }
  if ( !v8 )
  {
LABEL_51:
    if ( under_debugger )
      goto LABEL_55;
    interr(40959, a2, v9, a5, a3);
LABEL_53:
    if ( !under_debugger )
    {
      interr(40840, a2, v9, a5, a3);
      std::_Sp_counted_ptr_inplace_searchable_container_meta_t__std::allocator_void______gnu_cxx::_Lock_policy_2___::vfunc_6();
      return;
    }
LABEL_55:
    BUG();
  }
  if ( !*v8 )
    goto LABEL_53;
  *(_OWORD *)v8 = 0;
  v10 = a1[231];
  if ( v10 )
  {
    v11 = a1[232];
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = (_QWORD *)(v10 + 80 * i);
        v14 = v13[9];
        if ( v14 )
        {
          if ( (*(_DWORD *)(v14 + 8))-- == 1 )
          {
            v16 = (void (__fastcall ***)(void *))v13[9];
            a2 = **v16;
            if ( a2 == refcnted_regex_t__::vfunc_0 )
            {
              if ( v16 )
              {
                v17 = (*v16)[2];
                if ( (char *)v17 == (char *)refcnted_regex_t__::vfunc_2 )
                {
                  *v16 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
                  qregfree(v16 + 2);
                  a2 = (void (__fastcall *)(void *))&dword_30;
                  operator delete(v16, 0x30u);
                }
                else
                {
                  v17((void *)v13[9]);
                }
              }
            }
            else
            {
              a2((void *)v13[9]);
            }
          }
        }
        v18 = v13[5];
        if ( v18 )
        {
          v13[6] = 0;
          qfree(v18, (const char *)a2);
        }
        v19 = v13[1];
        if ( v19 )
        {
          v13[2] = 0;
          qfree(v19, (const char *)a2);
        }
        v10 = a1[231];
      }
    }
    a1[232] = 0;
    qfree(v10, (const char *)a2);
  }
  v20 = a1[220];
  if ( v20 )
  {
    v38 = a1[221];
    if ( v38 )
    {
      v21 = 0;
      for ( j = 0; j != v38; ++j )
      {
        v23 = v20 + v21;
        v24 = *(volatile signed __int32 **)(v20 + v21 + 8);
        if ( v24 )
        {
          if ( !_InterlockedSub(v24, 1u) )
          {
            v25 = *(_QWORD *)(v23 + 16);
            v26 = v25 + 16LL * *(_QWORD *)(v23 + 24);
            while ( v26 != v25 )
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v25 + 8));
              v27 = (QT::QPersistentModelIndex *)v25;
              v25 += 16;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v27);
            }
            free(*(void **)(v23 + 8));
          }
          v20 = a1[220];
        }
        v21 += 56;
      }
    }
    a1[221] = 0;
    qfree(v20, (const char *)a2);
  }
  v28 = a1[216];
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  v29 = a1[213];
  if ( v29 )
  {
    v30 = a1[214];
    if ( v30 )
    {
      for ( k = 0; k != v30; ++k )
      {
        v32 = *(_QWORD *)(v29 + 32 * k);
        if ( v32 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
          v29 = a1[213];
        }
      }
    }
    a1[214] = 0;
    qfree(v29, (const char *)a2);
  }
  v33 = -1;
  sub_4DEB40(a1 + 204, 0xFFFFFFFFFFFFFFFFLL);
  v34 = a1[206];
  while ( v34 )
  {
    sub_4DD5F0(*(_QWORD **)(v34 + 24));
    v35 = (void *)v34;
    v34 = *(_QWORD *)(v34 + 16);
    v33 = 48;
    operator delete(v35, 0x30u);
  }
  v36 = sub_4E2330(a1 + 141, (const char *)v33);
  a1[137] = (__int64)&object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 137));
  a1[134] = (__int64)&quick_filter_input_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 134));
  v37 = a1[1];
  *a1 = (__int64)&unk_894E08;
  if ( v37 )
  {
    a1[2] = 0;
    qfree(v37, (const char *)v33, v36);
  }
}
