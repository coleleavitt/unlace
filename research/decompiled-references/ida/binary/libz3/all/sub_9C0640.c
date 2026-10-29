__int64 __fastcall sub_9C0640(__int64 *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  char *v6; // rdx
  char *v7; // rdx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // r13
  __int64 v14; // r14
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  v6 = (char *)a2 + *(_QWORD *)(v5 - 24);
  LODWORD(v5) = *((_DWORD *)v6 + 6);
  LOBYTE(v5) = v5 & 0x4F;
  *((_DWORD *)v6 + 6) = v5 | 0x20;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  std::ostream::_M_insert<unsigned long>();
  v7 = (char *)a2 + *(_QWORD *)(*a2 - 24);
  v8 = *((_DWORD *)v7 + 6);
  LOBYTE(v8) = v8 & 0x4F | 0x80;
  *((_DWORD *)v7 + 6) = v8;
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
  v9 = *(_QWORD *)(a1[77] + 8 * v3);
  if ( v9 )
    sub_2FCE40((__int64)a2, v9 + 16);
  else
    std::operator<<<std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
  v10 = *(_QWORD *)(a1[78] + 8 * v3);
  if ( v10 )
    sub_2FCE40((__int64)a2, v10 + 16);
  else
    std::operator<<<std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
  v11 = sub_999800((__int64)a1, v3);
  sub_2FCE40((__int64)a2, v11);
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v12 = (*(_BYTE *)(a1[74] + 4 * v3 + 3) >> 4) & 3;
  if ( v12 == 1 || v12 == 2 || !v12 )
    std::operator<<<std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8 * v3));
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = a1[2];
  v14 = **(_QWORD **)(a1[4] + 8 * v3);
  if ( (unsigned int)sub_8E7030(v13) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v13 + 7488) + 56LL))(*(_QWORD *)(v13 + 7488), v14);
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v16[0] = _mm_loadh_ps((const double *)(a1[4] + 8 * v3));
  sub_AA7260(a2, v16);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

