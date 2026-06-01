void __fastcall sub_393E30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // r12
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi

  *a1 = &off_1C4E0C0;
  v2 = a1[7];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[6];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    if ( (*((_DWORD *)v4 + 16))-- == 1 )
    {
      sub_180C0E0(v4 + 13);
      v6 = v4[12];
      if ( v6 )
        sub_186B220((void *)(v6 - 8));
      v7 = v4[11];
      if ( v7 )
        sub_186B220((void *)(v7 - 8));
      v8 = (void *)v4[10];
      if ( v8 )
      {
        sub_64D370(v4[10]);
        sub_186B220(v8);
      }
      sub_18572D0(v4 + 3);
      sub_18572D0(v4 + 1);
      v9 = (_QWORD *)*v4;
      if ( *v4 )
      {
        v10 = (_QWORD *)v9[17];
        if ( v10 != v9 + 19 )
          operator delete(v10, v9[19] + 1LL);
        v11 = (_QWORD *)v9[13];
        if ( v11 != v9 + 15 )
          operator delete(v11, v9[15] + 1LL);
        sub_186B220(v9);
      }
      sub_186B220(v4);
    }
  }
  operator delete(a1, 0x40u);
}

