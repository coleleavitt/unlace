void __fastcall sub_13657A0(_QWORD *a1)
{
  void *v2; // rbp
  _QWORD *v3; // rdi

  v2 = (void *)a1[11];
  *a1 = &off_2C43698;
  if ( v2 )
  {
    sub_12E2140((__int64)v2);
    operator delete(v2, 0x828u);
  }
  v3 = (_QWORD *)a1[1];
  if ( v3 != a1 + 3 )
    operator delete(v3);
}
