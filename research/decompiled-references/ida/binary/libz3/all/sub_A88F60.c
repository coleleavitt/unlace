__int64 __fastcall sub_A88F60(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  _DWORD *v11; // rax
  __int64 v12; // r14
  unsigned int v13; // r13d
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r13
  unsigned int v17; // eax
  void *v18; // r13
  void *v19; // r15
  __int64 v20; // [rsp+0h] [rbp-78h]
  _QWORD **v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  void *v23[2]; // [rsp+20h] [rbp-58h] BYREF
  int v24; // [rsp+30h] [rbp-48h] BYREF
  char v25; // [rsp+34h] [rbp-44h]
  __int64 v26; // [rsp+38h] [rbp-40h]

  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = a1[63];
  if ( v4 )
    sub_1016D10(v4, a2);
  v5 = a1[41];
  if ( v5 )
    sub_1021D10(v5, a2);
  result = *(_QWORD *)(*a1 + 32LL);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      v22 = result;
      v7 = 0;
      do
      {
        v12 = 8 * v7;
        v13 = sub_FF9FB0(a1[63], (unsigned int)v7);
        v21 = *(_QWORD ***)(*a1 + 16LL);
        v20 = **(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8 * v7);
        if ( (unsigned int)sub_8E7030((__int64)v21)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v21[936] + 56LL))(v21[936], v20) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v13 == -1 )
        {
          v14 = (unsigned __int64)"null";
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          sub_FF9F70(a1[63], v13);
          std::__ostream_insert<char,std::char_traits<char>>();
          v14 = v13;
          std::ostream::_M_insert<unsigned long>();
        }
        v15 = a1[41];
        if ( v15 && (unsigned __int8)sub_1021D60(v15, v14) && (unsigned __int8)sub_FFAE60(a1[63]) )
        {
          v8 = sub_1021D80(a1[41]);
          v9 = sub_1021DA0(a1[41]);
          v10 = sub_A87B40(a1, (unsigned int)v7, v9);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_17B24F0(v8, a2, v10, 10);
          goto LABEL_11;
        }
        if ( !(unsigned __int8)sub_FFAE60(a1[63]) || !*((_BYTE *)a1 + 768) )
          goto LABEL_11;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (unsigned __int8)sub_FFAE60(a1[63]) )
        {
          v16 = a1[63];
          v17 = sub_FF9FB0(v16, (unsigned int)v7);
          sub_FFC2C0(v23, v16, v17);
        }
        else
        {
          LODWORD(v23[0]) = 0;
          BYTE4(v23[0]) &= 0xFCu;
          v25 &= 0xFCu;
          v19 = qword_1C7F2C0;
          v23[1] = nullptr;
          v24 = 1;
          v26 = 0;
          if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v23, &qword_1C7F2A0);
            if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
            {
LABEL_35:
              sub_182C690(v19, &v24, &qword_1C7F2B0);
              goto LABEL_26;
            }
          }
          else
          {
            LODWORD(v23[0]) = qword_1C7F2A0;
            if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
              goto LABEL_35;
          }
          v25 &= ~1u;
          v24 = qword_1C7F2B0;
        }
LABEL_26:
        sub_2FCE40(a2, (__int64)v23);
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23);
        sub_182CBA0(v18, &v24);
LABEL_11:
        v11 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8 * v7)) + 24);
        if ( v11 && *v11 == 5 && v11[1] == 1 )
          std::__ostream_insert<char,std::char_traits<char>>();
        if ( (unsigned __int8)sub_8EB4E0(*(_QWORD *)(*a1 + 16LL), *(_QWORD *)(*(_QWORD *)(*a1 + 32LL) + 8 * v7)) )
          std::__ostream_insert<char,std::char_traits<char>>();
        ++v7;
        std::__ostream_insert<char,std::char_traits<char>>();
        *(__m128 *)v23 = _mm_loadh_ps((const double *)(*(_QWORD *)(*a1 + 32LL) + v12));
        sub_AA7260(a2, v23);
        std::__ostream_insert<char,std::char_traits<char>>();
        result = v22;
      }
      while ( v7 != v22 );
    }
  }
  return result;
}

