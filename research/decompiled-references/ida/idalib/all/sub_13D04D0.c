void __fastcall sub_13D04D0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C449F0;
  v2 = (_QWORD *)a1[8];
  if ( v2 != a1 + 10 )
    free(v2);
  operator delete(a1, 0xD0u);
}
