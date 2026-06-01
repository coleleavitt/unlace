void __fastcall sub_12DBE10(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // rdi

  v2 = (_QWORD *)a1[11];
  v3 = (_QWORD *)a1[10];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (_QWORD *)v3[3];
        if ( v4 == v3 + 5 )
          break;
        operator delete(v4);
        v3 += 8;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 8;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (_QWORD *)a1[10];
  }
  if ( v3 )
    operator delete(v3);
  v5 = (void *)a1[7];
  if ( v5 )
    operator delete(v5);
  v6 = (_QWORD *)a1[3];
  if ( v6 != a1 + 5 )
    operator delete(v6);
}
