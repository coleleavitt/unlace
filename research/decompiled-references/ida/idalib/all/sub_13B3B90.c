void __fastcall sub_13B3B90(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &unk_2C44428;
  v2 = (_QWORD *)a1[6];
  if ( v2 != a1 + 8 )
    operator delete(v2);
  v3 = (_QWORD *)a1[2];
  if ( v3 != a1 + 4 )
    operator delete(v3);
  operator delete(a1, 0x60u);
}
