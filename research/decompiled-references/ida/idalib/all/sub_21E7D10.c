void __fastcall sub_21E7D10(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2C74E00;
  v2 = (_QWORD *)a1[6];
  if ( v2 != a1 + 8 )
    operator delete(v2);
  v3 = (_QWORD *)a1[1];
  if ( v3 != a1 + 3 )
    operator delete(v3);
  operator delete(a1, 0x50u);
}
