void __fastcall sub_CB0C0(_DWORD *a1)
{
  *(_QWORD *)a1 = &off_230708;
  sub_CAFC0(a1[30]);
  if ( *((_QWORD *)a1 + 16) )
  {
    *((_QWORD *)a1 + 17) = 0;
    qfree();
  }
  sub_C8250((__int64)a1);
  operator delete(a1, 0xA8u);
}

