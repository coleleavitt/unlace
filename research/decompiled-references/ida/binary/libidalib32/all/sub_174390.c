void __fastcall sub_174390(_QWORD *a1)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  for ( i = (_QWORD *)*a1; a1 != i; --a1[2] )
  {
    v3 = i;
    i = (_QWORD *)*i;
    *(_QWORD *)v3[1] = i;
    i[1] = v3[1];
    qfree();
  }
}

