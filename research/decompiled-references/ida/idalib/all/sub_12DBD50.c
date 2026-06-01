void __fastcall sub_12DBD50(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi

  v2 = (_QWORD *)a1[14];
  v3 = (_QWORD *)a1[13];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (_QWORD *)v3[2];
        if ( v4 == v3 + 4 )
          break;
        operator delete(v4);
        v3 += 7;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 7;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (_QWORD *)a1[13];
  }
  if ( v3 )
    operator delete(v3);
  v5 = (void *)a1[10];
  if ( v5 )
    operator delete(v5);
  v6 = (_QWORD *)a1[5];
  if ( v6 != a1 + 7 )
    operator delete(v6);
  v7 = (_QWORD *)a1[1];
  if ( v7 != a1 + 3 )
    operator delete(v7);
}
