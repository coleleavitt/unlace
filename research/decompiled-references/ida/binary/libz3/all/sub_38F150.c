void __fastcall sub_38F150(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  v2 = (_QWORD *)a1[5];
  *a1 = &off_1C4DE50;
  if ( v2 )
  {
    v3 = v2[482];
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = v2[481];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = (void *)v2[478];
    if ( v5 )
      sub_186B220(v5);
    v6 = (_QWORD *)v2[400];
    if ( v6 != v2 + 402 )
      operator delete(v6, v2[402] + 1LL);
    v7 = (_QWORD *)v2[396];
    if ( v7 != v2 + 398 )
      operator delete(v7, v2[398] + 1LL);
    sub_64D370(v2 + 4);
    sub_186B220(v2);
  }
  v8 = a1[4];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[3];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  sub_18572D0(a1 + 2);
}

