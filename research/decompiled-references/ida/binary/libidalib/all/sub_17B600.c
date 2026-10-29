void __fastcall sub_17B600(void *a1)
{
  void *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v3 = (__int64)v1 + 56;
      sub_17B600(*((void **)v1 + 3));
      v4 = (__int64)v1 + 56;
      v1 = *((void **)v1 + 2);
      sub_17B550(v4, 1);
      sub_17B550(v3, 0);
      if ( v2[4] )
      {
        v2[5] = 0;
        qfree();
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}

