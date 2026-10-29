// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_428900(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r12
  _BYTE v7[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v8[56]; // [rsp+10h] [rbp-38h] BYREF

  sub_E5EBF0(a1[4], a2);
  v4 = a1[5];
  sub_E5EBF0(v4, a2);
  if ( (unsigned int)sub_180B130(v4) > 0x14 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v5 = sub_180B150(v4, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v7, a2, *a1, 0, 0, 0);
      sub_160E8B0(v5, v7);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v8);
      sub_186A500(v8, "\n");
    }
    else
    {
      v6 = sub_180B150(v4, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v7, a2, *a1, 0, 0, 0);
      sub_160E8B0(v6, v7);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v8);
    }
  }
}

