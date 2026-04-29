void __fastcall sub_3E53D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  *a1 = &off_4CA110;
  v2 = a1[108];
  if ( v2 )
  {
    v3 = a1[109];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 3 * i;
        sub_118BA0(v2 + 8 * v5 + 8);
        v2 = a1[108];
      }
    }
    a1[109] = 0;
    qfree(v2);
  }
  sub_118BA0((__int64)(a1 + 106));
  *a1 = &unk_4CBF80;
  sub_1D3760((__int64)a1);
}
