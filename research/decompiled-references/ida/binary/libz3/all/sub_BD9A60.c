__int64 __fastcall sub_BD9A60(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 *v5; // rbp
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rdx
  int v11; // esi

  v3 = a3;
  sub_B310B0(a1, a2, a3);
  v5 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8 * v3);
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *v5;
  if ( *v5 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  sub_B31B10((__int64)a2, v7, v6);
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = v5[4];
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  sub_B31B10((__int64)a2, v9, v8);
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = v5[1];
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  sub_B31B10((__int64)a2, v11, v10);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

