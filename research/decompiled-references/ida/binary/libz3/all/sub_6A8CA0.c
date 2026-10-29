void __fastcall sub_6A8CA0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = (_QWORD *)a1[4];
  *a1 = &off_1C52E30;
  if ( v2 )
  {
    sub_6AA9A0(v2 + 96);
    v3 = (_QWORD *)v2[18];
    if ( v3 != v2 + 20 )
      operator delete(v3, v2[20] + 1LL);
    v4 = (_QWORD *)v2[14];
    if ( v4 != v2 + 16 )
      operator delete(v4, v2[16] + 1LL);
    sub_186B220(v2);
  }
  sub_18572D0(a1 + 5);
  v5 = a1[3];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[2];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
}

