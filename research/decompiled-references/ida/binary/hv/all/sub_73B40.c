__int64 __fastcall sub_73B40(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // rsi

  *a1 = &off_164AB8;
  v1 = qword_165A20;
  sub_98400(qword_165A20);
  v2 = xmmword_165A30;
  v3 = ptr;
  if ( *((_QWORD *)&xmmword_165A30 + 1) < (unsigned __int64)(xmmword_165A30 + 1) )
  {
    ptr = (void *)sub_96080(&ptr, ptr, xmmword_165A30 + 1, 8);
    v3 = ptr;
    v2 = xmmword_165A30;
  }
  v3[v2] = a1;
  *(_QWORD *)&xmmword_165A30 = xmmword_165A30 + 1;
  return sub_98450(v1);
}

