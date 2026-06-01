__int64 __fastcall sub_A02A90(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  char *v6; // rdx
  char *v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  int *v11; // [rsp+8h] [rbp-50h]
  __m128 v12[4]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a3 + 8);
  v11 = (int *)(a3 + 120);
  if ( a4 )
    std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 3;
  v6 = (char *)a2 + *(_QWORD *)(v5 - 24);
  LODWORD(v5) = *((_DWORD *)v6 + 6);
  LOBYTE(v5) = v5 & 0x4F;
  *((_DWORD *)v6 + 6) = v5 | 0x20;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 3;
  std::ostream::_M_insert<unsigned long>();
  v7 = (char *)a2 + *(_QWORD *)(*a2 - 24);
  v8 = *((_DWORD *)v7 + 6);
  LOBYTE(v8) = v8 & 0x4F | 0x80;
  *((_DWORD *)v7 + 6) = v8;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 6;
  v9 = sub_71A630((__int64)a2, v11);
  std::__ostream_insert<char,std::char_traits<char>>();
  v12[0] = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 32) + 8 * v4));
  sub_AA7260(v9, v12);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

