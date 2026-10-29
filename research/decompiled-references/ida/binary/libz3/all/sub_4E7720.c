void __fastcall sub_4E7720(_QWORD *a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v4)(__int64, __int64); // rax
  _BYTE v5[16]; // [rsp+0h] [rbp-48h] BYREF
  char v6[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(void (__fastcall **)(__int64, __int64))(*a1 + 120LL);
  if ( v4 == sub_4E76C0 )
  {
    sub_1606360(v5, a1[4], a1[5], 0, 0, 0);
    sub_160E8B0(a3, v5);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v6);
  }
  else
  {
    v4((__int64)a1, a3);
  }
}

