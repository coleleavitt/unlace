void __fastcall sub_ECF420(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2B4C1A0;
  v2 = (_QWORD *)a1[1];
  if ( v2 != a1 + 3 )
    free(v2);
  operator delete(a1, 0x220u);
}
