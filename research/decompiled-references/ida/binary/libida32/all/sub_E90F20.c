void __fastcall sub_E90F20(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2B22120;
  v2 = (_QWORD *)a1[10];
  if ( v2 != a1 + 12 )
    free(v2);
  v3 = (_QWORD *)a1[1];
  if ( v3 != a1 + 3 )
    free(v3);
  operator delete(a1, 0x80u);
}

