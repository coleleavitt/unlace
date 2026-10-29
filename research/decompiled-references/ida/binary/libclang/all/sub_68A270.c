void __fastcall sub_68A270(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // rdi

  *a1 = &off_47D01A0;
  operator delete();
  sub_C78B50(a1 + 30);
  v2 = (_QWORD *)a1[26];
  if ( v2 != a1 + 28 )
    operator delete(v2, a1[28] + 1LL);
  operator delete();
  operator delete();
  operator delete();
  v3 = a1[7];
  v4 = v3 + 8LL * *((unsigned int *)a1 + 16);
  while ( v4 != v3 )
  {
    v3 += 8;
    operator delete();
  }
  v5 = (_QWORD *)a1[13];
  v6 = &v5[2 * *((unsigned int *)a1 + 28)];
  if ( v5 != v6 )
  {
    do
    {
      v5 += 2;
      operator delete();
    }
    while ( v6 != v5 );
    v6 = (_QWORD *)a1[13];
  }
  if ( v6 != a1 + 15 )
    free(v6);
  v7 = (_QWORD *)a1[7];
  if ( v7 != a1 + 9 )
    free(v7);
  sub_62FC10(a1);
  operator delete(a1, 0x430u);
}

