void __fastcall sub_21955A0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2BE96D8;
  v2 = (_QWORD *)a1[3];
  if ( v2 != a1 + 5 )
    operator delete(v2);
  operator delete(a1, 0x38u);
}
