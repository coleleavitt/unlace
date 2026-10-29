void __fastcall sub_252780(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi

  v2 = (_QWORD *)a1[11];
  if ( v2 != a1 + 13 )
    operator delete(v2, a1[13] + 1LL);
  v3 = (_QWORD *)a1[5];
  if ( v3 != a1 + 7 )
    operator delete(v3, a1[7] + 1LL);
  v4 = (_QWORD *)a1[1];
  if ( v4 != a1 + 3 )
    operator delete(v4, a1[3] + 1LL);
}

