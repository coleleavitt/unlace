void __fastcall sub_115A5C0(_QWORD *a1)
{
  __int64 v2; // rbx
  void **v3; // r12
  void **v4; // rbx
  _QWORD *v5; // rdi

  v2 = *((unsigned int *)a1 + 1258);
  v3 = (void **)a1[628];
  *a1 = off_2C0D8E8;
  v4 = &v3[4 * v2];
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v4 -= 4;
        if ( *v4 == v4 + 2 )
          break;
        operator delete(*v4);
        if ( v3 == v4 )
          goto LABEL_4;
      }
    }
    while ( v3 != v4 );
LABEL_4:
    v4 = (void **)a1[628];
  }
  if ( v4 != a1 + 630 )
    free(v4);
  v5 = (_QWORD *)a1[623];
  if ( v5 != a1 + 625 )
    operator delete(v5);
  *a1 = off_2C11350;
  sub_11FC660(a1);
  operator delete(a1, 0x13D0u);
}

