void __fastcall sub_8ACA70(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r13
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v8[72]; // [rsp+10h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 740) )
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v6 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v7, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v6, v7);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v8);
      sub_186A500(v8, ")\n");
    }
    else
    {
      v4 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v7, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v4, v7);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v8);
    }
    v5 = *(_QWORD *)(a1 + 16);
    v7[0] = off_1C54EE8;
    v7[1] = a1 + 740;
    v8[0] = *(_BYTE *)(a1 + 740);
    sub_8AC4B0(v5, (__int64)v7);
    *(_BYTE *)(a1 + 740) = 1;
  }
}

