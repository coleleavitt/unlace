void __fastcall sub_12C6270(_QWORD *a1)
{
  void **v1; // r12
  void **v2; // rbx

  v1 = (void **)a1[624];
  v2 = (void **)a1[623];
  *a1 = off_2C3CFE0;
  if ( v1 != v2 )
  {
    do
    {
      while ( *v2 != v2 + 2 )
      {
        operator delete(*v2);
        v2 += 4;
        if ( v1 == v2 )
          goto LABEL_4;
      }
      v2 += 4;
    }
    while ( v1 != v2 );
LABEL_4:
    v2 = (void **)a1[623];
  }
  if ( v2 )
    operator delete(v2);
  *a1 = off_2C3B350;
  sub_12203A0((__int64)a1);
  operator delete(a1, 0x1390u);
}
