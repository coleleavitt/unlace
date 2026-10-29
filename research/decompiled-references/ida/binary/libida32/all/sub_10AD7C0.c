void __fastcall sub_10AD7C0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  *a1 = &off_2B39248;
  v2 = (_QWORD *)a1[11];
  if ( v2 != a1 + 13 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  v4 = a1 + 4;
  *(v4 - 4) = &off_2B38F58;
  if ( v3 != v4 )
    free(v3);
}

