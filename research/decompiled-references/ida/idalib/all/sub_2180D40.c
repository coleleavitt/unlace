__int64 __fastcall sub_2180D40(__int64 a1)
{
  void **v2; // r13
  void **v3; // rbp
  void **v4; // r13
  void **v5; // rbp
  void *v6; // rdi
  void *v7; // rdi

  v2 = *(void ***)(a1 + 160);
  v3 = &v2[4 * *(unsigned int *)(a1 + 168)];
  *(_QWORD *)a1 = &off_2C73D10;
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 4;
        if ( *v3 == v3 + 2 )
          break;
        operator delete(*v3);
        if ( v2 == v3 )
          goto LABEL_4;
      }
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 160);
  }
  if ( v3 != (void **)(a1 + 176) )
    free(v3);
  v4 = *(void ***)(a1 + 144);
  v5 = &v4[2 * *(unsigned int *)(a1 + 152)];
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 2;
        if ( *v5 == v5 + 2 )
          break;
        free(*v5);
        if ( v4 == v5 )
          goto LABEL_10;
      }
    }
    while ( v4 != v5 );
LABEL_10:
    v5 = *(void ***)(a1 + 144);
  }
  if ( (void **)(a1 + 160) != v5 )
    free(v5);
  v6 = *(void **)(a1 + 96);
  if ( v6 != (void *)(a1 + 120) )
    free(v6);
  v7 = *(void **)(a1 + 72);
  if ( v7 )
    operator delete(v7);
  *(_QWORD *)a1 = &unk_2C74610;
  return sub_21A25E0(a1);
}
