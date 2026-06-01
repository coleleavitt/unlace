void __fastcall sub_167EC90(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = off_2C4D038;
  v2 = (_QWORD *)a1[22];
  if ( v2 != a1 + 24 )
    free(v2);
  v3 = (_QWORD *)a1[4];
  if ( v3 != a1 + 6 )
    free(v3);
  operator delete(a1, 0x140u);
}
