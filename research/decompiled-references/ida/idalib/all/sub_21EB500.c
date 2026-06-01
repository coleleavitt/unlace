void __fastcall sub_21EB500(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C75020;
  v2 = (_QWORD *)a1[2];
  if ( v2 != a1 + 4 )
    free(v2);
  operator delete(a1, 0x1A0u);
}
