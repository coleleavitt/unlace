__int64 __fastcall sub_21D2310(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int8 a9)
{
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v18[0] = a1;
  sub_9B7040(a1, 19);
  sub_21CFFC0(a1);
  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  sub_9B7040(a1, a3);
  sub_9B7040(a1, SHIDWORD(a3));
  sub_21D0B50(v18, a4, a5);
  v12 = v18[0];
  sub_9B7040(v18[0], a6);
  sub_9B7040(v12, SHIDWORD(a6));
  v13 = v18[0];
  sub_9B7040(v18[0], a7);
  sub_9B7040(v13, SHIDWORD(a7));
  v14 = v18[0];
  sub_9B7040(v18[0], a8);
  sub_21CFFC0(v14);
  v15 = v18[0];
  sub_9B7040(v18[0], a9);
  return sub_21CFFC0(v15);
}
