void __fastcall sub_B55FC0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_1C574A0;
  v2 = (_QWORD *)a1[5];
  if ( v2 && v2 != a1 + 7 )
    sub_186B220(v2);
  operator delete(a1, 0x138u);
}

