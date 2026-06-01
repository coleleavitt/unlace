void __fastcall sub_2102F20(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_2102F20(a1, v2[3]);
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
