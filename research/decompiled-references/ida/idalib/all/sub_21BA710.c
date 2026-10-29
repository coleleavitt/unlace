void __fastcall sub_21BA710(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2BE9950;
  v2 = (_QWORD *)a1[18];
  if ( v2 != a1 + 21 )
    free(v2);
  v3 = (_QWORD *)a1[10];
  if ( v3 != a1 + 12 )
    free(v3);
}
