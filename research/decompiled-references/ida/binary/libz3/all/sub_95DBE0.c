void __fastcall sub_95DBE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rbp
  _BYTE v7[16]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v8[32]; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v12[72]; // [rsp+70h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  sub_1606360(v7, a1[5], v4, 0, 0, 0);
  v5 = sub_160E8B0(a3, v7);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v9, a1[6], v4, 0, 0, 0);
  v6 = sub_160E8B0(v5, v9);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v11, a1[7], v4, 0, 0, 0);
  sub_160E8B0(v6, v11);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v12);
  sub_18572D0(v10);
  sub_18572D0(v8);
}

