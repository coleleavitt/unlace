void __fastcall sub_204D050(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2BE5D78;
  v2 = (_QWORD *)a1[1];
  if ( v2 != a1 + 3 )
    operator delete(v2);
  operator delete(a1, 0x30u);
}
