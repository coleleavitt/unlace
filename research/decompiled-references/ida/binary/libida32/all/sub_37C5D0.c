void __fastcall sub_37C5D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v7; // rdi

  *a1 = &off_2BCF860;
  v7 = (void *)a1[54];
  if ( v7 )
  {
    a1[55] = 0;
    qfree(v7);
  }
  sub_557A80(a1, a2, a3, a4, a5, a6);
  operator delete(a1, 0x218u);
}

