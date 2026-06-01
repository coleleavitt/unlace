void __fastcall sub_C8B1E0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi

  *a1 = &off_2BDAB80;
  operator delete();
  v2 = (_QWORD *)a1[172];
  if ( v2 != a1 + 174 )
    free(v2);
  operator delete();
  v3 = 24LL * *((unsigned int *)a1 + 324);
  operator delete();
  sub_D65B70(a1, v3);
  operator delete(a1, 0x5F8u);
}

