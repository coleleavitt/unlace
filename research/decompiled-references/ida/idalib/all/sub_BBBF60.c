__int64 __fastcall sub_BBBF60(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void *v3; // rax
  void *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi

  v1 = a1 + 13;
  v3 = a1 + 17;
  v4 = (void *)a1[15];
  if ( v4 != v3 )
    free(v4);
  v5 = v1;
  v6 = a1 + 1;
  v7 = a1 + 5;
  sub_2222F80(v5);
  v8 = (_QWORD *)*(v7 - 2);
  if ( v8 != v7 )
    free(v8);
  return sub_2222F80(v6);
}
