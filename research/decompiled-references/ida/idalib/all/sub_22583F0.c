void __fastcall sub_22583F0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  *a1 = &off_2BEB9C8;
  v2 = (_QWORD *)a1[9];
  if ( v2 != a1 + 11 )
    operator delete(v2);
  v3 = (_QWORD *)a1[1];
  v4 = a1 + 3;
  *(v4 - 3) = &unk_2C75FE0;
  if ( v3 != v4 )
    operator delete(v3);
}
