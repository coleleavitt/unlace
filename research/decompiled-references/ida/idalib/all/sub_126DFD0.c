void __fastcall sub_126DFD0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  void **v3; // r12
  void **v4; // rbx

  *a1 = off_2C3D650;
  v2 = (_QWORD *)a1[626];
  if ( v2 != a1 + 628 )
    operator delete(v2);
  v3 = (void **)a1[624];
  v4 = (void **)a1[623];
  *a1 = off_2C3CFE0;
  if ( v3 != v4 )
  {
    do
    {
      while ( *v4 != v4 + 2 )
      {
        operator delete(*v4);
        v4 += 4;
        if ( v4 == v3 )
          goto LABEL_6;
      }
      v4 += 4;
    }
    while ( v3 != v4 );
LABEL_6:
    v4 = (void **)a1[623];
  }
  if ( v4 )
    operator delete(v4);
  *a1 = off_2C3B350;
  sub_12203A0((__int64)a1);
  operator delete(a1, 0x13B0u);
}
