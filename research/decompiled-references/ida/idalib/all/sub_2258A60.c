void __fastcall sub_2258A60(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2BEB9C8;
  v2 = (_QWORD *)a1[9];
  if ( v2 != a1 + 11 )
    operator delete(v2);
  v3 = (_QWORD *)a1[1];
  *a1 = &unk_2C75FE0;
  if ( v3 != a1 + 3 )
    operator delete(v3);
  operator delete(a1, 0x68u);
}
