double __fastcall sub_493D60(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // r13
  volatile signed __int32 *v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbx
  QT::QPersistentModelIndex *v10; // rdi
  double result; // xmm0_8
  __int64 v12; // [rsp+8h] [rbp-40h]

  v3 = *a1;
  if ( v3 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      v4 = 0;
      for ( i = 0; i != v12; ++i )
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
          v3 = *a1;
        }
        v4 += 56;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
