void __fastcall sub_1C154D0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &unk_2C66D98;
  v2 = (_QWORD *)a1[4];
  if ( v2 != a1 + 6 )
    free(v2);
  operator delete(a1, 0x88u);
}
