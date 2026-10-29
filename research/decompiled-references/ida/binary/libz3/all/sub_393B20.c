void __fastcall sub_393B20(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // r12
  _QWORD *v7; // r12
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi

  v1 = (_QWORD *)a1[3];
  *a1 = &off_1C4DFD0;
  if ( v1 )
  {
    if ( (*((_DWORD *)v1 + 16))-- == 1 )
    {
      sub_180C0E0(v1 + 13);
      v4 = v1[12];
      if ( v4 )
        sub_186B220((void *)(v4 - 8));
      v5 = v1[11];
      if ( v5 )
        sub_186B220((void *)(v5 - 8));
      v6 = (void *)v1[10];
      if ( v6 )
      {
        sub_64D370(v1[10]);
        sub_186B220(v6);
      }
      sub_18572D0(v1 + 3);
      sub_18572D0(v1 + 1);
      v7 = (_QWORD *)*v1;
      if ( *v1 )
      {
        v8 = (_QWORD *)v7[17];
        if ( v8 != v7 + 19 )
          operator delete(v8, v7[19] + 1LL);
        v9 = (_QWORD *)v7[13];
        if ( v9 != v7 + 15 )
          operator delete(v9, v7[15] + 1LL);
        sub_186B220(v7);
      }
      sub_186B220(v1);
    }
  }
  operator delete(a1, 0x40u);
}

