__int64 __fastcall sub_311190(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx
  _QWORD *v4; // rdi

  result = qfree(a1[3]);
  for ( i = (_QWORD *)*a1; a1 != i; --a1[2] )
  {
    v4 = i;
    i = (_QWORD *)*i;
    *(_QWORD *)v4[1] = i;
    i[1] = v4[1];
    result = qfree(v4);
  }
  return result;
}
