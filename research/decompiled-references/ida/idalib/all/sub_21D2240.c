__int64 __fastcall sub_21D2240(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v15[0] = a1;
  sub_9B7040(a1, 16);
  sub_21CFFC0(a1);
  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  sub_21D0B50(v15, a3, a4);
  v11 = v15[0];
  sub_9B7040(v15[0], a5);
  sub_21CFFC0(v11);
  v12 = v15[0];
  sub_9B7040(v15[0], a6);
  sub_21CFFC0(v12);
  v13 = v15[0];
  sub_9B7040(v15[0], a7);
  return sub_9B7040(v13, SHIDWORD(a7));
}
