__int64 __fastcall sub_9D0000(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rdx
  char *v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  void *v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(unsigned int *)(a3 + 8);
  if ( a4 )
    std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 3;
  v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
  LODWORD(v6) = *((_DWORD *)v7 + 6);
  LOBYTE(v6) = v6 & 0x4F;
  *((_DWORD *)v7 + 6) = v6 | 0x20;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 3;
  std::ostream::_M_insert<unsigned long>();
  v8 = (char *)a2 + *(_QWORD *)(*a2 - 24);
  v9 = *((_DWORD *)v8 + 6);
  LOBYTE(v9) = v9 & 0x4F | 0x80;
  *((_DWORD *)v8 + 6) = v9;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 6;
  sub_1850940(v12, qword_1C7F2C0, a3 + 56);
  v10 = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v12[0] != &v13 )
    operator delete(v12[0], v13 + 1);
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__m128 *)v12 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 32) + 8 * v5));
  sub_AA7260(v10, v12);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

