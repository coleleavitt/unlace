void __fastcall sub_DF1120(_QWORD *a1)
{
  _QWORD *v2; // rbp
  void *v3; // rbp
  void *v4; // rdi

  v2 = (_QWORD *)a1[4];
  *a1 = algn_1C75710;
  if ( v2 )
  {
    if ( v2[10] > 0x40u )
    {
      v4 = (void *)v2[8];
      if ( v4 )
        sub_186B220(v4);
    }
    sub_186B220(v2);
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    sub_1857540(a1[6]);
    sub_186B220(v3);
  }
  sub_18572D0(a1 + 5);
  operator delete(a1, 0x40u);
}

