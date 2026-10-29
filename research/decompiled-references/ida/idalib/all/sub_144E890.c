void __fastcall sub_144E890(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &unk_2C446A0;
  v2 = (_QWORD *)a1[1];
  if ( v2 != a1 + 3 )
    operator delete(v2);
  operator delete(a1, 0x28u);
}
