void __fastcall sub_1704B40(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)a1[16];
  if ( v2 != a1 + 18 )
    free(v2);
  v3 = (_QWORD *)a1[6];
  if ( v3 != a1 + 8 )
    free(v3);
}
