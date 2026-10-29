void __fastcall sub_B56040(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_1C57468;
  v2 = (_QWORD *)a1[5];
  if ( v2 && v2 != a1 + 7 )
    sub_186B220(v2);
  operator delete(a1, 0x140u);
}

