void __fastcall sub_67A8D0(_QWORD *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  _QWORD *v6; // rdi

  v2 = a1[20];
  *a1 = &off_47D00E8;
  v3 = v2 + 8LL * *((unsigned int *)a1 + 42);
  while ( v3 != v2 )
  {
    v2 += 8;
    operator delete();
  }
  v4 = (_QWORD *)a1[26];
  v5 = &v4[2 * *((unsigned int *)a1 + 54)];
  if ( v4 != v5 )
  {
    do
    {
      v4 += 2;
      operator delete();
    }
    while ( v5 != v4 );
    v5 = (_QWORD *)a1[26];
  }
  if ( v5 != a1 + 28 )
    free(v5);
  v6 = (_QWORD *)a1[20];
  if ( v6 != a1 + 22 )
    free(v6);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  *a1 = off_47D0098;
  operator delete(a1, 0xF8u);
}

