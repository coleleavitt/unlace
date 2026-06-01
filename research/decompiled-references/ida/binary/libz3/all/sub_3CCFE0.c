void __fastcall sub_3CCFE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  _BYTE v5[16]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v6[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL);
  v3 = *(_QWORD *)(v2 + 856);
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  sub_1606360(v5, v3, v2, 0, 0, 0);
  sub_160E8B0(a2, v5);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v6);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      sub_15D7BC0(v2, v3);
  }
}

