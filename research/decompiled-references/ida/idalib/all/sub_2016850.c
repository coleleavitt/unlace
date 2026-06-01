void __fastcall sub_2016850(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2BE4EE8;
  v2 = (_QWORD *)a1[5];
  if ( v2 != a1 + 7 )
    free(v2);
  operator delete(a1, 0x38u);
}
