void __fastcall sub_1BCD1D0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)a1[17];
  if ( v2 != a1 + 19 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  if ( v3 != a1 + 4 )
    free(v3);
}
