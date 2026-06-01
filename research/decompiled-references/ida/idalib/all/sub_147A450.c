void __fastcall sub_147A450(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  sub_15DCED0(a1[5], a1 + 5);
  v2 = (_QWORD *)a1[6];
  if ( v2 != a1 + 8 )
    free(v2);
  v3 = (_QWORD *)a1[1];
  if ( v3 != a1 + 3 )
    free(v3);
}
