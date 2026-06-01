void __fastcall sub_10AD760(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  *a1 = &off_2B38FC8;
  v2 = (_QWORD *)a1[12];
  if ( v2 != a1 + 14 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  v4 = a1 + 4;
  *(v4 - 4) = &off_2B38F58;
  if ( v3 != v4 )
    free(v3);
}

