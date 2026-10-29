void __fastcall sub_10ADE60(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2B38FC8;
  v2 = (_QWORD *)a1[12];
  if ( v2 != a1 + 14 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  *a1 = &off_2B38F58;
  if ( v3 != a1 + 4 )
    free(v3);
  operator delete(a1, 0x88u);
}

