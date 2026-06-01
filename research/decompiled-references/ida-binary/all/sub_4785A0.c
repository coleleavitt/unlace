void __fastcall sub_4785A0(_QWORD *a1, const char *a2)
{
  _QWORD *i; // rbx
  _QWORD *v4; // rdi

  for ( i = (_QWORD *)*a1; a1 != i; --a1[2] )
  {
    v4 = i;
    i = (_QWORD *)*i;
    *(_QWORD *)v4[1] = i;
    i[1] = v4[1];
    qfree(v4, a2);
  }
}
