void __fastcall sub_21196A0(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi

  v1 = a1 + 17;
  *a1 = &off_2C73050;
  v3 = (_QWORD *)a1[17];
  if ( v3 != a1 + 19 )
    free(v3);
  v4 = (_QWORD *)a1[15];
  if ( v1 != v4 )
    free(v4);
  v5 = (_QWORD *)a1[12];
  if ( a1 + 15 != v5 )
    free(v5);
  v6 = (_QWORD *)a1[7];
  if ( v6 != a1 + 9 )
    free(v6);
}
