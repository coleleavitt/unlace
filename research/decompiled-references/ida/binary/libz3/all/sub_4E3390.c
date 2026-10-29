__int64 __fastcall sub_4E3390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 (*v10)(); // rax
  __int64 (*v11)(); // rax

  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    goto LABEL_14;
  v5 = *(unsigned int *)(a1 + 72);
  v6 = *(_DWORD *)(v4 - 4);
  v7 = *(unsigned int *)(a1 + 76);
  if ( (unsigned int)v5 >= v6 )
  {
    if ( (unsigned int)v7 < v6 )
    {
      v8 = 0;
      goto LABEL_4;
    }
LABEL_14:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    sub_4E3250((__int64 *)(a1 + 80));
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_12:
    std::ostream::_M_insert<unsigned long>();
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(v4 + 8 * v5);
  if ( (unsigned int)v7 < v6 )
  {
LABEL_4:
    v9 = *(_QWORD *)(v4 + 8 * v7);
    goto LABEL_5;
  }
  v9 = 0;
LABEL_5:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  if ( v8 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v10 = *(__int64 (**)())(*(_QWORD *)v8 + 96LL);
    if ( v10 != sub_4D9530 )
      ((void (__fastcall *)(__int64, __int64))v10)(v8, 0xFFFFFFFFLL);
    std::ostream::_M_insert<unsigned long>();
  }
  sub_4E3250((__int64 *)(a1 + 80));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  if ( v9 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v11 = *(__int64 (**)())(*(_QWORD *)v9 + 96LL);
    if ( v11 != sub_4D9530 )
      ((void (__fastcall *)(__int64, __int64))v11)(v9, 0xFFFFFFFFLL);
    goto LABEL_12;
  }
LABEL_13:
  sub_4E3250((__int64 *)(a1 + 88));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_4E3250((__int64 *)(a1 + 96));
  return a3;
}

