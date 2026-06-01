__int64 __fastcall sub_21D1DD0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v18[8]; // [rsp+28h] [rbp-40h] BYREF

  v18[0] = a1;
  sub_9B7040(a1, 64);
  sub_21CFFC0(a1);
  sub_21D0B50(v18, a2, a3);
  v11 = v18[0];
  sub_9B7040(v18[0], a4);
  sub_9B7040(v11, SHIDWORD(a4));
  sub_21D0B50(v18, a5, a6);
  v12 = v18[0];
  sub_9B7040(v18[0], a7);
  sub_21CFFC0(v12);
  v13 = v18[0];
  sub_9B7040(v18[0], a8);
  sub_21CFFC0(v13);
  v14 = v18[0];
  sub_9B7040(v18[0], a9);
  return sub_21CFFC0(v14);
}
