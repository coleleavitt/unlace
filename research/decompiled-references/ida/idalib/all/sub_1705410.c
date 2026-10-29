void __fastcall sub_1705410(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
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
    v3 = *(_QWORD **)a1;
  }
  if ( v3 )
    operator delete(v3);
}
