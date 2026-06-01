void __fastcall sub_1672B40(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 16;
        v4 = (_QWORD *)v3[12];
        if ( v4 != v3 + 14 )
          operator delete(v4);
        v5 = (_QWORD *)v3[7];
        if ( v5 != v3 + 9 )
          operator delete(v5);
        v6 = (_QWORD *)v3[2];
        if ( v6 == v3 + 4 )
          break;
        operator delete(v6);
        if ( v3 == v2 )
          goto LABEL_8;
      }
    }
    while ( v3 != v2 );
LABEL_8:
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}
