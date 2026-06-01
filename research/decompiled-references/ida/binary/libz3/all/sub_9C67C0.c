void __fastcall sub_9C67C0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // [rsp+8h] [rbp-70h]
  void *v6; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *a3;
  v5 = *a3 + 40LL * *((unsigned int *)a3 + 2);
  if ( v5 != *a3 )
  {
    while ( 1 )
    {
      sub_1850940(&v6, qword_1C7F2C0, v3);
      v4 = std::__ostream_insert<char,std::char_traits<char>>();
      if ( v6 != v7 )
        operator delete(v6, v7[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v6, *(_QWORD *)(v3 + 32), *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v4, &v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      v3 += 40;
      sub_18572D0(v7);
      if ( v5 == v3 )
        break;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
}

