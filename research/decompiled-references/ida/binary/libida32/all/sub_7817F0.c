void __fastcall sub_7817F0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  if ( a1 )
  {
    sub_781640((__int64)a1);
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 + 6 )
      operator delete(v2, 8LL * a1[1]);
    operator delete(a1, 0x38u);
  }
}

