_QWORD *__fastcall sub_BF3090(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  __int64 v3; // rbp

  v2 = a1;
  v3 = sub_21D5390();
  if ( *a2 == v3 )
    sub_21DC120(a1, a2);
  else
    sub_21D5A60(a1, a2);
  if ( *a1 == v3 )
    v2 = (_QWORD *)a1[1];
  sub_21D94F0(v2);
  return a1;
}

