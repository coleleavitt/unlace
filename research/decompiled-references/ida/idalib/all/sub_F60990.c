void __fastcall sub_F60990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v11; // r12
  __int64 v12; // rdi

  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  sub_9B7040(a1, a5);
  sub_9B7040(a1, SHIDWORD(a5));
  sub_9B7040(a1, a4);
  sub_9B7040(a1, SHIDWORD(a4));
  v11 = a3 + 24 * a4;
  while ( v11 != a3 )
  {
    v12 = a3;
    a3 += 24;
    sub_F1D660(v12, a1, a6);
  }
}
