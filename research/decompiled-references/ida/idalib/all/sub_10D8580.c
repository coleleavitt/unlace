void __fastcall sub_10D8580(_QWORD *a1)
{
  void **v1; // r12
  void **v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi

  v1 = (void **)a1[23];
  *a1 = &off_2B633A8;
  v3 = &v1[5 * *((unsigned int *)a1 + 48)];
  if ( v1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 5;
        if ( *v3 == v3 + 2 )
          break;
        free(*v3);
        if ( v1 == v3 )
          goto LABEL_4;
      }
    }
    while ( v1 != v3 );
LABEL_4:
    v3 = (void **)a1[23];
  }
  if ( v3 != a1 + 25 )
    free(v3);
  v4 = (_QWORD *)a1[15];
  *a1 = &unk_2C36288;
  if ( v4 != a1 + 17 )
    free(v4);
  v5 = (_QWORD *)a1[9];
  if ( v5 != a1 + 11 )
    free(v5);
  v6 = (_QWORD *)a1[2];
  *a1 = &off_2B632D8;
  if ( v6 != a1 + 4 )
    free(v6);
  operator delete(a1, 0x210u);
}
