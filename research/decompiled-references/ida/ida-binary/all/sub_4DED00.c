double __fastcall sub_4DED00(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  __int64 v6; // r14
  volatile signed __int32 *v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbx
  QT::QPersistentModelIndex *v10; // rdi
  double result; // xmm0_8
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 j; // rbx
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-40h]

  v3 = a1[7];
  if ( v3 )
  {
    v17 = a1[8];
    if ( v17 )
    {
      v4 = 0;
      for ( i = 0; i != v17; ++i )
      {
        v6 = v3 + v4;
        v7 = *(volatile signed __int32 **)(v3 + v4 + 8);
        if ( v7 )
        {
          if ( !_InterlockedSub(v7, 1u) )
          {
            v8 = *(_QWORD *)(v6 + 16);
            v9 = v8 + 16LL * *(_QWORD *)(v6 + 24);
            while ( v9 != v8 )
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v8 + 8));
              v10 = (QT::QPersistentModelIndex *)v8;
              v8 += 16;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v10);
            }
            free(*(void **)(v6 + 8));
          }
          v3 = a1[7];
        }
        v4 += 56;
      }
    }
    a1[8] = 0;
    result = qfree(v3, a2);
  }
  v12 = a1[3];
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = *a1;
  if ( *a1 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = *(_QWORD *)(v13 + 32 * j);
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v13 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v13, a2);
  }
  return result;
}
