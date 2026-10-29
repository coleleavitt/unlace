void __fastcall sub_1C160A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2BC7A40;
  v2 = (_QWORD *)a1[12];
  if ( v2 != a1 + 14 )
    free(v2);
  v3 = (_QWORD *)a1[4];
  *a1 = &unk_2C66D98;
  if ( v3 != a1 + 6 )
    free(v3);
  operator delete(a1, 0x90u);
}
