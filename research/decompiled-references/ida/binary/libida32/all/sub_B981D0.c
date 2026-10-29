__int64 __fastcall sub_B981D0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  void *v4; // rax
  void *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi

  v2 = a1 + 13;
  v4 = a1 + 17;
  v5 = (void *)a1[15];
  if ( v5 != v4 )
    free(v5);
  v6 = v2;
  v7 = a1 + 1;
  v8 = a1 + 5;
  sub_21FF240(v6, a2);
  v9 = (_QWORD *)*(v8 - 2);
  if ( v9 != v8 )
    free(v9);
  return sub_21FF240(v7, a2);
}

