__int64 __fastcall sub_21D2150(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  __int64 v10; // rbx
  __int64 v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v14[0] = a1;
  sub_9B7040(a1, 59);
  sub_21CFFC0(a1);
  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  sub_9B7040(a1, a3);
  sub_9B7040(a1, SHIDWORD(a3));
  if ( a4 )
    sub_2222BB0(a1, a5, a4);
  else
    sub_2222BB0(a1, 0, 0);
  sub_21D0B50(v14, a7, a8);
  v10 = v14[0];
  sub_9B7040(v14[0], a6);
  return sub_21CFFC0(v10);
}
