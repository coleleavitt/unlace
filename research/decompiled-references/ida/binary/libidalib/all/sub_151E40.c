unsigned __int64 __fastcall sub_151E40(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  int *v7; // rax
  int *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int *v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rax

  if ( !a2 )
    return 0;
  v3 = qword_254200;
  if ( qword_254200 )
  {
    v5 = operator new(0x18u);
    *(_DWORD *)(v5 + 16) = a1;
    v3 = v5;
    *(_QWORD *)v5 = a2;
    *(_QWORD *)(v5 + 8) = a3;
    qmutex_lock();
    v6 = qthread_create();
    v7 = (int *)qword_254230;
    v8 = &dword_254228;
    if ( qword_254230 )
    {
      do
      {
        while ( 1 )
        {
          v9 = *((_QWORD *)v7 + 2);
          v10 = *((_QWORD *)v7 + 3);
          if ( *((_QWORD *)v7 + 4) < v3 )
            break;
          v8 = v7;
          v7 = *((int **)v7 + 2);
          if ( !v9 )
            goto LABEL_8;
        }
        v7 = *((int **)v7 + 3);
      }
      while ( v10 );
LABEL_8:
      if ( v8 != &dword_254228 && v3 >= *((_QWORD *)v8 + 4) )
        goto LABEL_21;
    }
    v11 = operator new(0x30u);
    *(_QWORD *)(v11 + 32) = v3;
    v12 = (int *)v11;
    *(_QWORD *)(v11 + 40) = 0;
    if ( v8 == &dword_254228 )
    {
      if ( qword_254248 )
      {
        v14 = qword_254240;
        v8 = nullptr;
        if ( *(_QWORD *)(qword_254240 + 32) < v3 )
        {
LABEL_19:
          if ( v14 )
          {
LABEL_20:
            v8 = v12;
            std::_Rb_tree_insert_and_rebalance();
            ++qword_254248;
LABEL_21:
            *((_QWORD *)v8 + 5) = v6;
            qmutex_unlock();
            return v3;
          }
LABEL_28:
          if ( v12 )
          {
            operator delete(v12, 0x30u);
            *((_QWORD *)v8 + 5) = v6;
            qmutex_unlock();
            return v3;
          }
          goto LABEL_21;
        }
      }
    }
    else
    {
      v13 = *((_QWORD *)v8 + 4);
      if ( v3 >= v13 )
      {
        if ( v13 >= v3 )
          goto LABEL_28;
        if ( (int *)qword_254240 != v8 )
        {
          v17 = std::_Rb_tree_increment();
          v14 = v17;
          if ( v3 >= *(_QWORD *)(v17 + 32) )
            goto LABEL_18;
          if ( *((_QWORD *)v8 + 3) )
          {
            v8 = (int *)v17;
            goto LABEL_19;
          }
        }
        if ( v8 )
          goto LABEL_20;
        goto LABEL_28;
      }
      v14 = (__int64)v8;
      if ( (int *)qword_254238 == v8 )
        goto LABEL_19;
      v15 = std::_Rb_tree_decrement();
      v14 = v15;
      if ( *(_QWORD *)(v15 + 32) < v3 )
      {
        if ( *(_QWORD *)(v15 + 24) )
          v14 = (__int64)v8;
        else
          v8 = nullptr;
        goto LABEL_19;
      }
    }
LABEL_18:
    v8 = (int *)sub_151A80((__int64)&unk_254220, v3);
    goto LABEL_19;
  }
  return v3;
}

