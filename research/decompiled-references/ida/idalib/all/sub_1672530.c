void __fastcall sub_1672530(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  char *v7; // rdi
  char *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)(*(_QWORD *)a1 + 192LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 24;
        v4 = (_QWORD *)v3[21];
        v5 = (_QWORD *)v3[22];
        v6 = v4;
        if ( v5 != v4 )
        {
          do
          {
            while ( 1 )
            {
              v7 = (char *)v6[10];
              if ( v7 != (char *)(v6 + 12) )
                operator delete(v7);
              v8 = (char *)v6[5];
              if ( v8 != (char *)(v6 + 7) )
                operator delete(v8);
              if ( (_QWORD *)*v6 == v6 + 2 )
                break;
              operator delete((void *)*v6);
              v6 += 15;
              if ( v6 == v5 )
                goto LABEL_9;
            }
            v6 += 15;
          }
          while ( v5 != v6 );
LABEL_9:
          v4 = (_QWORD *)v3[21];
        }
        if ( v4 )
          operator delete(v4);
        v9 = (_QWORD *)v3[17];
        if ( v9 != v3 + 19 )
          operator delete(v9);
        v10 = (_QWORD *)v3[13];
        if ( v10 != v3 + 15 )
          operator delete(v10);
        v11 = (_QWORD *)v3[7];
        if ( v11 != v3 + 9 )
          operator delete(v11);
        v12 = (_QWORD *)v3[2];
        if ( v12 == v3 + 4 )
          break;
        operator delete(v12);
        if ( v3 == v2 )
          goto LABEL_20;
      }
    }
    while ( v3 != v2 );
LABEL_20:
    v3 = *(_QWORD **)a1;
  }
  if ( v3 != (_QWORD *)(a1 + 16) )
    free(v3);
}
