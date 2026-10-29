void __fastcall sub_15EDD30(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2BC63C0;
  v2 = (_QWORD *)a1[185];
  if ( v2 != a1 + 187 )
    free(v2);
  v3 = (_QWORD *)a1[165];
  if ( v3 != a1 + 167 )
    free(v3);
  operator delete(a1[161], 16LL * *((unsigned int *)a1 + 326), 8);
  sub_15ED760((__int64)a1);
  operator delete(a1, 0x610u);
}
