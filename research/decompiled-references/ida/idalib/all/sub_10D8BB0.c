void __fastcall sub_10D8BB0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi

  *a1 = &unk_2C36288;
  v2 = (_QWORD *)a1[15];
  if ( v2 != a1 + 17 )
    free(v2);
  v3 = (_QWORD *)a1[9];
  if ( v3 != a1 + 11 )
    free(v3);
  v4 = (_QWORD *)a1[2];
  *a1 = &off_2B632D8;
  if ( v4 != a1 + 4 )
    free(v4);
  operator delete(a1, 0xB8u);
}
