void __fastcall sub_117E300(_QWORD *a1)
{
  __int64 v2; // rbx
  void **v3; // r12
  void **v4; // rbx
  _QWORD *v5; // rdi

  v2 = *((unsigned int *)a1 + 1258);
  v3 = (void **)a1[628];
  *a1 = off_2C378E8;
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
  *a1 = off_2C3B350;
  sub_12203A0(a1);
  operator delete(a1, 0x13D0u);
}
