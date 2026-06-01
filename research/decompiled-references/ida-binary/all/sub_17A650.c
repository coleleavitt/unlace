void __fastcall GlobalAction::event(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi

  *a1 = GlobalAction::event;
  v6 = a1[1];
  if ( v6 )
  {
    a1[2] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
  operator delete(a1, 0x38u);
}
