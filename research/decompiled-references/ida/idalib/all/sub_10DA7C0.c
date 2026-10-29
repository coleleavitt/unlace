void __fastcall sub_10DA7C0(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // r13
  _QWORD *v6; // rdi
  __int64 v7; // rdi
  unsigned int *v8; // rbx
  unsigned int *v9; // rdi

  v2 = a1 + 40;
  *a1 = off_2BE9900;
  sub_21B6780(a1);
  v3 = (_QWORD *)a1[40];
  if ( a1 + 40 != v3 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)v3[2];
      v5 = (_QWORD *)*v3;
      if ( v4 == v3 + 4 )
      {
        operator delete(v3);
        if ( v2 == v5 )
          break;
      }
      else
      {
        operator delete(v4);
        operator delete(v3);
        if ( v2 == v5 )
          break;
      }
      v3 = v5;
    }
  }
  v6 = (_QWORD *)a1[22];
  if ( v6 != a1 + 24 )
    free(v6);
  v7 = a1[19];
  v8 = (unsigned int *)(a1 + 3);
  *((_QWORD *)v8 - 3) = &off_2C35EF8;
  operator delete(v7, 12LL * v8[36], 4);
  v9 = *((unsigned int **)v8 - 2);
  if ( v9 != v8 )
    free(v9);
}
