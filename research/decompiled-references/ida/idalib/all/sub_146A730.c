void __fastcall sub_146A730(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2BB32C8;
  v2 = (_QWORD *)a1[3];
  if ( v2 != a1 + 5 )
    free(v2);
  operator delete(a1, 0x88u);
}
