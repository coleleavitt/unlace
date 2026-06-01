void __fastcall sub_3C8B40(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v9[72]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 3072);
  switch ( v3 )
  {
    case 0:
      sub_1872CE0("");
      sub_1873130(114, 1398);
    case 1:
      sub_3C7D00(v8, a1, a3);
      v4 = *(_QWORD *)(a1 + 8);
      v5 = v8[0];
      v6 = v4;
      if ( v8[0] && !*(_DWORD *)(v8[0] + 8LL) )
      {
        sub_15D7BC0(v8[1], v8[0]);
        v6 = *(_QWORD *)(a1 + 8);
      }
      break;
    case -1:
      v4 = *(_QWORD *)(a1 + 8);
      v5 = *(_QWORD *)(v4 + 856);
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      v6 = v4;
      break;
    default:
      sub_1872CE0("");
      sub_1873130(114, 1408);
  }
  sub_1606360(v8, v5, v6, 0, 0, 0);
  sub_160E8B0(a2, v8);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v9);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      sub_15D7BC0(v4, v5);
  }
}

