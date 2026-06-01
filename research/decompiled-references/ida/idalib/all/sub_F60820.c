void __fastcall sub_F60820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r14^4
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdi

  v8 = HIDWORD(a3);
  v11 = a7;
  sub_9B7040(a1, a3);
  sub_9B7040(a1, v8);
  sub_9B7040(a1, a4);
  sub_9B7040(a1, a5);
  sub_9B7040(a1, a6);
  sub_9B7040(a1, SHIDWORD(a6));
  v12 = a7 + 24 * a8;
  if ( v12 != a7 )
  {
    do
    {
      v13 = v11;
      v11 += 24;
      sub_F1D660(v13, a1, a2);
    }
    while ( v12 != v11 );
  }
}
