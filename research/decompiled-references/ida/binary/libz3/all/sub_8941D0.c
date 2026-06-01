// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_8941D0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r13
  _BYTE v9[16]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v10[32]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[72]; // [rsp+40h] [rbp-48h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 4 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v5 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v9, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v6 = sub_160E8B0(v5, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v11, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v6, v11);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v12);
      sub_18572D0(v10);
      sub_186A500(v10, "\n");
    }
    else
    {
      v7 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v9, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v8 = sub_160E8B0(v7, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v11, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v8, v11);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v12);
      sub_18572D0(v10);
    }
  }
}

