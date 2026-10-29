__int64 __fastcall sub_AA7FA0(__int64 a1, int a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(v5 + 912);
  *(_QWORD *)(v5 + 912) = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_AA4870(v6 + 16, a2);
  if ( a4 )
    std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  result = sub_AA7BE0(a1, v6 + 16, a3);
  *(_QWORD *)(v5 + 912) = v6;
  return result;
}

