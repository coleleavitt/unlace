void __fastcall sub_2258330(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  *a1 = &off_2BEB790;
  v2 = (_QWORD *)a1[6];
  if ( v2 != a1 + 8 )
    operator delete(v2);
  v3 = (_QWORD *)a1[2];
  v4 = a1 + 4;
  *(v4 - 4) = &off_2BEB750;
  if ( v3 != v4 )
    operator delete(v3);
}
