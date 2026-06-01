void __fastcall sub_9E1710(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2B40618;
  v2 = (_QWORD *)a1[1];
  if ( v2 != a1 + 3 )
    free(v2);
  operator delete(a1, 0x58u);
}
