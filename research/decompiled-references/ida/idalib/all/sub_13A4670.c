void __fastcall sub_13A4670(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2C44330;
  v2 = (_QWORD *)a1[7];
  if ( v2 != a1 + 9 )
    operator delete(v2);
  v3 = (_QWORD *)a1[1];
  if ( v3 != a1 + 3 )
    operator delete(v3);
  *a1 = &unk_2C442D8;
  nullsub_1239(a1);
  operator delete(a1, 0x58u);
}
