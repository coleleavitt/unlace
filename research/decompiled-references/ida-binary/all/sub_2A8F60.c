__int64 __fastcall IDAGraphRenderer__::vfunc_3(QT::QObject *this, const char *a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rdi

  v3 = *((__int64 **)this + 66);
  *(_QWORD *)this = &IDAGraphRenderer___vtable;
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      qfree(v4, a2);
    }
    qfree(v3, a2);
  }
  return sub_2B5050(this);
}
