__int64 __fastcall sub_7FBC20(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  _QWORD *v7; // rax
  bool v8; // al
  void *v9; // rbx
  bool v11; // al
  void *v12; // [rsp+8h] [rbp-80h]
  void *v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]

  v3 = *(_QWORD **)a3;
  v4 = *(_QWORD *)a3 + 40LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 5;
      if ( (_QWORD *)v4 == v3 )
        goto LABEL_25;
    }
    if ( (_QWORD *)v4 != v3 )
    {
      while ( 1 )
      {
        v15 = &dword_0 + 1;
        v16 = 0;
        v17 = 1;
        v18 = 0;
        sub_182CBA0(qword_1C7F2C0, &v17);
        BYTE4(v17) &= ~1u;
        v5 = qword_1C7F2C0;
        LODWORD(v17) = 1;
        if ( (*((_BYTE *)v3 + 12) & 1) != 0 || (BYTE4(v15) & 1) != 0 )
        {
          if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v3 + 1, &v15) )
          {
LABEL_9:
            v6 = qword_1C7F2C0;
LABEL_10:
            sub_182CBA0(v6, &v15);
            sub_182CBA0(v6, &v17);
            sub_1850940(&v15, qword_1C7F2C0, v3 + 1);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v15 != &v17 )
              operator delete(v15, v17 + 1);
            std::__ostream_insert<char,std::char_traits<char>>();
            goto LABEL_13;
          }
        }
        else if ( *((_DWORD *)v3 + 2) != (_DWORD)v15 )
        {
          goto LABEL_9;
        }
        if ( (*((_BYTE *)v3 + 28) & 1) != 0 || (v17 & 0x100000000LL) != 0 )
          v8 = (unsigned int)sub_182C7B0(v5, v3 + 3, &v17) == 0;
        else
          v8 = *((_DWORD *)v3 + 6) == (_DWORD)v17;
        v6 = qword_1C7F2C0;
        if ( !v8 )
          goto LABEL_10;
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v15);
        sub_182CBA0(v12, &v17);
LABEL_13:
        sub_1606360(&v15, *v3, *(_QWORD *)(a1 + 8), 0, 0, 0);
        sub_160E8B0(a2, &v15);
        sub_18572D0(&v17);
        v7 = v3 + 5;
        if ( (_QWORD *)v4 == v3 + 5 )
          break;
        while ( 1 )
        {
          v3 = v7;
          if ( *v7 > 1u )
            break;
          v7 += 5;
          if ( (_QWORD *)v4 == v7 )
            goto LABEL_25;
        }
        if ( (_QWORD *)v4 == v7 )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
LABEL_25:
  v15 = nullptr;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  sub_182CBA0(qword_1C7F2C0, &v17);
  BYTE4(v17) &= ~1u;
  LODWORD(v17) = 1;
  v9 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 28) & 1) != 0 || (BYTE4(v15) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a3 + 24, &v15) )
    {
      v9 = qword_1C7F2C0;
      goto LABEL_29;
    }
  }
  else if ( *(_DWORD *)(a3 + 24) != (_DWORD)v15 )
  {
    goto LABEL_29;
  }
  if ( (*(_BYTE *)(a3 + 44) & 1) != 0 || (v17 & 0x100000000LL) != 0 )
    v11 = (unsigned int)sub_182C7B0(v9, a3 + 40, &v17) == 0;
  else
    v11 = *(_DWORD *)(a3 + 40) == (_DWORD)v17;
  v9 = qword_1C7F2C0;
  if ( v11 )
  {
    sub_182CBA0(qword_1C7F2C0, &v15);
    sub_182CBA0(v9, &v17);
    return a2;
  }
LABEL_29:
  sub_182CBA0(v9, &v15);
  sub_182CBA0(v9, &v17);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1850940(&v15, qword_1C7F2C0, a3 + 24);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v15 != &v17 )
    operator delete(v15, v17 + 1);
  return a2;
}

