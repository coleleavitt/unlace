unsigned __int64 __fastcall sub_37ACE0(_QWORD *a1)
{
  __int64 v1; // r13
  bool v2; // zf
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r15
  const char *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 i; // r12
  __int64 v20; // rbx
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 j; // r12
  __int64 v25; // rbx
  void *v26; // rdi
  __int64 v27; // rdi
  const char *v29; // rsi
  _QWORD *v30; // rax
  unsigned int v31; // [rsp+4h] [rbp-64h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h] BYREF
  __int128 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v1 = 0;
  v2 = a1[14] == 0;
  v35 = __readfsqword(0x28u);
  v31 = 0;
  if ( !v2 )
  {
    while ( 1 )
    {
      v4 = 48 * v1 + a1[13];
      v5 = a1[10] + 48 * v1;
      if ( *(_QWORD *)(v5 + 40) != *(_QWORD *)(v4 + 40) )
        goto LABEL_3;
      v13 = *(_QWORD *)(v5 + 24);
      v14 = v5 + 8;
      v15 = *(_QWORD *)(v4 + 24);
      if ( v5 + 8 == v13 )
      {
LABEL_12:
        v1 = ++v31;
        if ( (unsigned __int64)v31 >= a1[14] )
          break;
      }
      else
      {
        while ( *(_DWORD *)(v13 + 32) == *(_DWORD *)(v15 + 32) )
        {
          v13 = std::_Rb_tree_increment(v13);
          v15 = std::_Rb_tree_increment(v15);
          if ( v14 == v13 )
            goto LABEL_12;
        }
LABEL_3:
        v6 = (_QWORD *)v4;
        v7 = v4 + 8;
        sub_37A9D0(v6, v31);
        v8 = *(_QWORD *)(v7 + 16);
        v33 = 0;
        v34 = 0;
        if ( v8 != v7 )
        {
          v9 = 0;
          v10 = 0;
          v11 = 0;
          while ( 1 )
          {
            v12 = *(_QWORD *)(a1[7] + 8LL * *(int *)(v8 + 32));
            if ( v10 < v11 + 1 )
            {
              v32 = *(_QWORD *)(a1[7] + 8LL * *(int *)(v8 + 32));
              v33 = qvector_reserve(&v33, v9, v11 + 1, 8);
              v11 = v34;
              v9 = v33;
              v12 = v32;
            }
            *(_QWORD *)(v9 + 8 * v11) = v12;
            v11 = v34 + 1;
            *(_QWORD *)&v34 = v34 + 1;
            v8 = std::_Rb_tree_increment(v8);
            if ( v8 == v7 )
              break;
            v10 = *((_QWORD *)&v34 + 1);
            v9 = v33;
          }
        }
        v29 = (const char *)&v33;
        set_segment_translations(*(_QWORD *)(a1[7] + 8 * v1), &v33);
        v30 = (_QWORD *)getseg(*(_QWORD *)(a1[7] + 8 * v1));
        if ( v30 )
        {
          v29 = (const char *)v30[1];
          auto_mark_range(*v30, v29, 40);
        }
        if ( !v33 )
          goto LABEL_12;
        *(_QWORD *)&v34 = 0;
        qfree(v33, v29);
        v1 = ++v31;
        if ( (unsigned __int64)v31 >= a1[14] )
          break;
      }
    }
  }
  QT::QTableWidget::clearContents(*(QT::QTableWidget **)(a1[6] + 32LL));
  v16 = nullptr;
  QT::QTableWidget::setRowCount(*(QT::QTableWidget **)(a1[6] + 32LL), 0);
  v17 = a1[13];
  if ( v17 )
  {
    v18 = a1[14];
    if ( v18 )
    {
      for ( i = 0; i != v18; ++i )
      {
        v20 = *(_QWORD *)(v17 + 48 * i + 16);
        if ( v20 )
        {
          do
          {
            sub_37A730(*(_QWORD **)(v20 + 24));
            v21 = (void *)v20;
            v20 = *(_QWORD *)(v20 + 16);
            v16 = (const char *)&qword_28;
            operator delete(v21, 0x28u);
          }
          while ( v20 );
          v17 = a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v17, v16);
    a1[13] = 0;
    a1[15] = 0;
  }
  v22 = a1[10];
  if ( v22 )
  {
    v23 = a1[11];
    if ( v23 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v25 = *(_QWORD *)(v22 + 48 * j + 16);
        if ( v25 )
        {
          do
          {
            sub_37A730(*(_QWORD **)(v25 + 24));
            v26 = (void *)v25;
            v25 = *(_QWORD *)(v25 + 16);
            v16 = (const char *)&qword_28;
            operator delete(v26, 0x28u);
          }
          while ( v25 );
          v22 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v22, v16);
    a1[10] = 0;
    a1[12] = 0;
  }
  v27 = a1[7];
  if ( v27 )
  {
    a1[8] = 0;
    qfree(v27, v16);
    a1[7] = 0;
    a1[9] = 0;
  }
  return v35 - __readfsqword(0x28u);
}
