double __fastcall msg_entries_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // rbx
  QT::QTextLayout *v7; // r14
  __int64 v8; // rdi
  double result; // xmm0_8

  *a1 = &msg_entries_t___vtable;
  v3 = a1[2];
  if ( v3 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 48 * i);
        v7 = (QT::QTextLayout *)v6[3];
        *((_DWORD *)v6 + 10) = 0;
        if ( v7 )
        {
          QT::QTextLayout::~QTextLayout(v7);
          a2 = &byte_8;
          operator delete(v7, 8u);
        }
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8, a2);
        }
        v3 = a1[2];
      }
    }
    a1[3] = 0;
    return qfree(v3, a2);
  }
  return result;
}
