void __fastcall hintview_t__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 j; // r12
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 m; // rbp
  __int64 *v23; // rax
  __int64 v24; // rdi

  *(_QWORD *)this = &hintview_t___vtable;
  *((_QWORD *)this + 2) = hintview_t___vtable_at__16;
  *((_QWORD *)this + 5) = hintview_t___vtable_at__40;
  v3 = *((_QWORD *)this + 142);
  *((_QWORD *)this + 13) = hintview_t___vtable_at__104;
  qword_8CCE70 = nullptr;
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 143);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = *((_QWORD *)this + 142);
        }
      }
    }
    *((_QWORD *)this + 143) = 0;
    qfree(v3, a2);
  }
  v8 = *((_QWORD *)this + 137);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 138);
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = (_QWORD *)(v8 + 80 * j);
        v12 = v11[4];
        if ( v12 )
        {
          v11[5] = 0;
          qfree(v12, a2);
        }
        v13 = v11[1];
        if ( v13 )
        {
          v11[2] = 0;
          qfree(v13, a2);
        }
        v8 = *((_QWORD *)this + 137);
      }
    }
    *((_QWORD *)this + 138) = 0;
    qfree(v8, a2);
  }
  v14 = *((_QWORD *)this + 134);
  if ( v14 )
  {
    *((_QWORD *)this + 135) = 0;
    qfree(v14, a2);
  }
  v15 = *((_QWORD *)this + 131);
  if ( v15 )
  {
    v16 = *((_QWORD *)this + 132);
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (__int64 *)(v15 + 24 * k);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = *((_QWORD *)this + 131);
        }
      }
    }
    *((_QWORD *)this + 132) = 0;
    qfree(v15, a2);
  }
  v20 = *((_QWORD *)this + 128);
  if ( v20 )
  {
    v21 = *((_QWORD *)this + 129);
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = (__int64 *)(v20 + 24 * m);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24, a2);
          v20 = *((_QWORD *)this + 128);
        }
      }
    }
    *((_QWORD *)this + 129) = 0;
    qfree(v20, a2);
  }
  CustomIDAMemo__::vfunc_3(this, a2);
}
