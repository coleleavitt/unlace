void __fastcall sub_2259170(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2BEB790;
  v2 = (_QWORD *)a1[6];
  if ( v2 != a1 + 8 )
    operator delete(v2);
  v3 = (_QWORD *)a1[2];
  *a1 = &off_2BEB750;
  if ( v3 != a1 + 4 )
    operator delete(v3);
  operator delete(a1, 0x58u);
}
