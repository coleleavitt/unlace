void __fastcall sub_63E420(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_4993130;
  v2 = (_QWORD *)a1[50];
  if ( v2 != a1 + 52 )
    free(v2);
  sub_FCA1D0(a1);
  operator delete(a1, 0x1D8u);
}

