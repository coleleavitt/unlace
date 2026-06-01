void __fastcall sub_21ECC80(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C751D0;
  v2 = (_QWORD *)a1[2];
  if ( v2 != a1 + 4 )
    free(v2);
  operator delete(a1, 0x1A0u);
}
