void __fastcall sub_9A4300(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2B16638;
  v2 = (_QWORD *)a1[5];
  if ( v2 != a1 + 7 )
    free(v2);
  operator delete(a1, 0x78u);
}

