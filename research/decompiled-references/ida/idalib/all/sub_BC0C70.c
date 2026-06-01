__int64 __fastcall sub_BC0C70(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)a2[15];
  if ( v2 != a2 + 17 )
    free(v2);
  sub_2222F80(a2 + 13);
  v3 = (_QWORD *)a2[3];
  if ( v3 != a2 + 5 )
    free(v3);
  return sub_2222F80(a2 + 1);
}
