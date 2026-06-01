void __fastcall sub_10D1B40(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2B631E8;
  v2 = (_QWORD *)a1[11];
  if ( v2 != a1 + 13 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  *a1 = &off_2B62EF8;
  if ( v3 != a1 + 4 )
    free(v3);
  operator delete(a1, 0x128u);
}
