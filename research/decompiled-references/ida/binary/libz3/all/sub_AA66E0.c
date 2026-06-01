void __fastcall sub_AA66E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  _BYTE v4[16]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v5[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD **)(a1 + 9376);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      sub_1606360(v4, *v2, *(_QWORD *)(a1 + 104), 0, 0, 0);
      sub_160E8B0(a2, v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v2;
      sub_18572D0(v5);
    }
  }
}

