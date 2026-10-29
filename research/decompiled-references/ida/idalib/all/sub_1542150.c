void __fastcall sub_1542150(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi

  *a1 = &off_2BE9230;
  v2 = (_QWORD *)a1[35];
  if ( v2 != a1 + 37 )
    operator delete(v2);
  v3 = (_QWORD *)a1[12];
  if ( v3 != a1 + 14 )
    operator delete(v3);
  v4 = (_QWORD *)a1[8];
  if ( v4 != a1 + 10 )
    operator delete(v4);
  v5 = (_QWORD *)a1[1];
  if ( v5 != a1 + 3 )
    operator delete(v5);
  operator delete(a1, 0x138u);
}
