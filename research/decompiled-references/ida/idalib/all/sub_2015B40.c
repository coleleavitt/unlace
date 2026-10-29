void __fastcall sub_2015B40(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C71D98;
  v2 = (_QWORD *)a1[2];
  if ( v2 != a1 + 4 )
    free(v2);
  operator delete(a1, 0x1A0u);
}
