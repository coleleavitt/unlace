void __fastcall sub_146A8A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2BB3358;
  v2 = (_QWORD *)a1[19];
  if ( v2 != a1 + 21 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  if ( v3 != a1 + 4 )
    free(v3);
  operator delete(a1, 0xB8u);
}
