void __fastcall sub_482270(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi

  *a1 = &off_2B024C8;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (__int64)v2 + v4;
        ++v5;
        v4 += 416;
        sub_481890(v6);
        v2 = (void *)a1[5];
      }
      while ( v3 != v5 );
    }
    a1[6] = 0;
    qfree(v2);
  }
}

