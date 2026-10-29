__int64 __fastcall sub_B9CF30(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)a2[15];
  if ( v2 != a2 + 17 )
    free(v2);
  sub_21FF240(a2 + 13, a2);
  v3 = (_QWORD *)a2[3];
  if ( v3 != a2 + 5 )
    free(v3);
  return sub_21FF240(a2 + 1, a2);
}

