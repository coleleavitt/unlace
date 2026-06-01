__int64 __fastcall sub_2E7380(QT::QAbstractItemModel *this, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // r15
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 j; // rbp
  __int64 v13; // rdi
  __int64 *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rbp
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  const char **v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v28; // [rsp+8h] [rbp-50h]

  QT::QAbstractItemModel::beginResetModel(this);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 6);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 48 * i);
        v8 = v7[3];
        if ( v8 )
        {
          v7[4] = 0;
          qfree(v8, (const char *)a2);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9, (const char *)a2);
        }
        v4 = *((_QWORD *)this + 5);
      }
    }
    *((_QWORD *)this + 6) = 0;
    qfree(v4, (const char *)a2);
    *((_QWORD *)this + 5) = 0;
    *((_QWORD *)this + 7) = 0;
  }
  v10 = *((_QWORD *)this + 2);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 3);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = *(_QWORD *)(v10 + 8 * j);
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v10 = *((_QWORD *)this + 2);
        }
      }
    }
    *((_QWORD *)this + 3) = 0;
    qfree(v10, (const char *)a2);
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 4) = 0;
  }
  v14 = *(__int64 **)a2;
  v15 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v15 != *(_QWORD *)a2 )
  {
    v16 = *((_QWORD *)this + 3);
    do
    {
      v18 = *v14;
      if ( *((_QWORD *)this + 4) >= (unsigned __int64)(v16 + 1) )
      {
        v17 = *((_QWORD *)this + 2);
      }
      else
      {
        v19 = nullptr;
        v28 = *((_QWORD *)this + 4);
        v20 = qvector_reserve((char *)this + 16, 0, v16 + 1, 8);
        v21 = *((_QWORD *)this + 3);
        v17 = v20;
        v22 = *((_QWORD *)this + 4);
        v23 = *((const char ***)this + 2);
        *((_QWORD *)this + 4) = v28;
        v24 = v21 - 1;
        if ( v24 >= 0 )
        {
          v25 = v20;
          do
          {
            v19 = *v23;
            v25 += 8;
            ++v23;
            *(_QWORD *)(v25 - 8) = v19;
          }
          while ( v24-- != 0 );
          v23 = *((const char ***)this + 2);
        }
        qfree(v23, v19);
        *((_QWORD *)this + 2) = v17;
        v16 = *((_QWORD *)this + 3);
        *((_QWORD *)this + 4) = v22;
      }
      *(_QWORD *)(v17 + 8 * v16) = v18;
      ++v14;
      v16 = *((_QWORD *)this + 3) + 1LL;
      *((_QWORD *)this + 3) = v16;
    }
    while ( (__int64 *)v15 != v14 );
  }
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = a3;
  return QT::QAbstractItemModel::endResetModel(this);
}
