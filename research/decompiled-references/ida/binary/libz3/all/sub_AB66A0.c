__int64 __fastcall sub_AB66A0(__int64 *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edx
  char *v9; // rdx
  int v10; // eax
  int *v11; // rbp
  int *v12; // r14
  int v13; // r12d
  void *v14; // rbx
  _QWORD v17[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-68h] BYREF
  void *v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a3;
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
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = a1[58];
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  do
  {
    v8 = v4;
    v4 = *(_DWORD *)(v7 + 4LL * v4);
  }
  while ( v8 != v4 );
  std::ostream::_M_insert<unsigned long>();
  v9 = (char *)a2 + *(_QWORD *)(*a2 - 24);
  v10 = *((_DWORD *)v9 + 6);
  LOBYTE(v10) = v10 & 0x4F | 0x80;
  *((_DWORD *)v9 + 6) = v10;
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 = *(int **)(a1[63] + 8 * v3);
  if ( v11 )
  {
    v12 = &v11[*(v11 - 1)];
    while ( v12 != v11 )
    {
      v13 = *v11;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v13 != -2 )
        std::ostream::_M_insert<unsigned long>();
      ++v11;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_AA5520(a1[2], (__int64)a2, v13);
    }
  }
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  if ( (unsigned __int8)sub_AB6070((__int64)a1, a3, (__int64)v17) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1850940(&v19, qword_1C7F2C0, v17);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v19 != &v20 )
      operator delete(v19, v20 + 1);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  return sub_182CBA0(v14, v18);
}

