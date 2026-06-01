void __fastcall sub_393F50(_QWORD *a1)
{
  _QWORD *v1; // rbp
  _QWORD *v4; // rbp
  void *v5; // rbp
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // r12
  _QWORD *v10; // r12
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi

  v1 = (_QWORD *)a1[7];
  *a1 = &off_1C64F80;
  if ( v1 )
  {
    if ( (*((_DWORD *)v1 + 16))-- == 1 )
    {
      sub_180C0E0(v1 + 13);
      v7 = v1[12];
      if ( v7 )
        sub_186B220((void *)(v7 - 8));
      v8 = v1[11];
      if ( v8 )
        sub_186B220((void *)(v8 - 8));
      v9 = (void *)v1[10];
      if ( v9 )
      {
        sub_64D370(v1[10]);
        sub_186B220(v9);
      }
      sub_18572D0(v1 + 3);
      sub_18572D0(v1 + 1);
      v10 = (_QWORD *)*v1;
      if ( *v1 )
      {
        v11 = (_QWORD *)v10[17];
        if ( v11 != v10 + 19 )
          operator delete(v11, v10[19] + 1LL);
        v12 = (_QWORD *)v10[13];
        if ( v12 != v10 + 15 )
          operator delete(v12, v10[15] + 1LL);
        sub_186B220(v10);
      }
      sub_186B220(v1);
    }
  }
  v4 = (_QWORD *)a1[4];
  *a1 = algn_1C75710;
  if ( v4 )
  {
    if ( v4[10] > 0x40u )
    {
      v6 = (void *)v4[8];
      if ( v6 )
        sub_186B220(v6);
    }
    sub_186B220(v4);
  }
  v5 = (void *)a1[6];
  if ( v5 )
  {
    sub_1857540(a1[6]);
    sub_186B220(v5);
  }
  sub_18572D0(a1 + 5);
}

