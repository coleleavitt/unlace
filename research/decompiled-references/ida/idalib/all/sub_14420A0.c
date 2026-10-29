void __fastcall sub_14420A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)a1[74];
  if ( v2 != a1 + 77 )
    free(v2);
  v3 = (_QWORD *)a1[6];
  if ( v3 != a1 + 9 )
    free(v3);
}
