void __fastcall sub_F7F340(__int64 a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*--v3;
      if ( *v3 )
      {
        v5 = (_QWORD *)v4[10];
        if ( v5 != v4 + 12 )
          free(v5);
        v6 = (_QWORD *)v4[7];
        if ( v6 != v4 + 9 )
          free(v6);
        v7 = (_QWORD *)v4[3];
        if ( v7 != v4 + 5 )
          free(v7);
        operator delete(v4, 0x70u);
      }
    }
    while ( v3 != v2 );
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}
