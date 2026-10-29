void __fastcall sub_1012D00(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &unk_2BFDEE8;
  v2 = (_QWORD *)a1[74];
  if ( v2 != a1 + 76 )
    operator delete(v2);
  sub_1009960((__int64)a1);
  operator delete(a1, 0x270u);
}

