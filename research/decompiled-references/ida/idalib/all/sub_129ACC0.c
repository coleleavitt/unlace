void __fastcall sub_129ACC0(_BYTE *a1)
{
  bool v1; // zf
  _BYTE *v3; // rdi
  _BYTE *v4; // rdi
  void **v5; // r12
  void **v6; // rbp
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi
  _BYTE *v9; // rdi

  v1 = a1[5168] == 0;
  *(_QWORD *)a1 = off_2C3EC90;
  if ( !v1 )
  {
    v3 = *((_BYTE **)a1 + 642);
    if ( v3 != a1 + 5152 )
      operator delete(v3);
  }
  v4 = *((_BYTE **)a1 + 638);
  if ( v4 != a1 + 5120 )
    operator delete(v4);
  v5 = *((void ***)a1 + 636);
  v6 = *((void ***)a1 + 635);
  if ( v5 != v6 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_9;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_9:
    v6 = *((void ***)a1 + 635);
  }
  if ( v6 )
    operator delete(v6);
  v7 = *((_BYTE **)a1 + 631);
  if ( v7 != a1 + 5064 )
    operator delete(v7);
  v8 = *((_BYTE **)a1 + 627);
  if ( v8 != a1 + 5032 )
    operator delete(v8);
  v9 = *((_BYTE **)a1 + 623);
  if ( v9 != a1 + 5000 )
    operator delete(v9);
  *(_QWORD *)a1 = off_2C3B350;
  sub_12203A0((__int64)a1);
  operator delete(a1, 0x1438u);
}
