void __fastcall sub_2196200(_QWORD *a1)
{
  void **v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi

  v2 = (void **)a1[33];
  *a1 = &off_2C74438;
  if ( v2 )
  {
    if ( *v2 != v2 + 2 )
      free(*v2);
    operator delete(v2, 0x918u);
  }
  v3 = (_QWORD *)a1[29];
  if ( v3 != a1 + 31 )
    free(v3);
  v4 = (_QWORD *)a1[26];
  if ( v4 != a1 + 28 )
    free(v4);
  v5 = (_QWORD *)a1[16];
  if ( v5 != a1 + 18 )
    free(v5);
  v6 = (_QWORD *)a1[13];
  if ( v6 != a1 + 15 )
    free(v6);
  v7 = (_QWORD *)a1[10];
  if ( v7 != a1 + 12 )
    free(v7);
  *a1 = &unk_2C74610;
  sub_21A25E0(a1);
  operator delete(a1, 0x168u);
}
