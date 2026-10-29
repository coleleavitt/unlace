__int64 __fastcall sub_BC45D0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4, unsigned int **a5, double a6)
{
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r15
  int v16[2]; // [rsp+8h] [rbp-50h] BYREF
  int v17[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v10 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_BB18F0(a1, v10, a5, (_QWORD ***)a4);
      v11 = sub_180B150(a1, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v11, *(_QWORD *)(a1 + 24), *a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v11, *(_QWORD *)(a1 + 24), *a3, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v11, "))\n");
    }
    else
    {
      v14 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_BB18F0(a1, v14, a5, (_QWORD ***)a4);
      v15 = sub_180B150(a1, v14);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v15, *(_QWORD *)(a1 + 24), *a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v15, *(_QWORD *)(a1 + 24), *a3, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  result = sub_966740(a1);
  if ( *(_BYTE *)(result + 445) )
  {
    v12 = *(_QWORD *)(a1 + 24);
    v18[0] = 0;
    *(_QWORD *)v17 = v12;
    sub_15E1B70(v12);
    v13 = sub_15E1A70(v12);
    *(_QWORD *)v16 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_BB70A0(v18, v16);
    sub_BBE190(a1, a4, a5, (__int64 *)v17);
    return sub_2334C0((__int64 *)v17);
  }
  return result;
}

