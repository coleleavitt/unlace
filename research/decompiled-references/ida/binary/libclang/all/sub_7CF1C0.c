__int64 __fastcall sub_7CF1C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi

  v3 = (_QWORD *)a1[15];
  if ( v3 != a1 + 17 )
    free(v3);
  sub_25ABF80(a1 + 13, a2);
  v4 = (_QWORD *)a1[3];
  if ( v4 != a1 + 5 )
    free(v4);
  return sub_25ABF80(a1 + 1, a2);
}

