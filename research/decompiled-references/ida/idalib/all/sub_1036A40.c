void __fastcall sub_1036A40(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &unk_2C27EE8;
  v2 = (_QWORD *)a1[74];
  if ( v2 != a1 + 76 )
    operator delete(v2);
  sub_102D6A0((__int64)a1);
  operator delete(a1, 0x270u);
}
