std::ostream *__fastcall sub_811D50(_QWORD *a1, std::ostream *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int *v6; // r14
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  char *v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  unsigned int *v15; // r12
  unsigned int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  void *v21; // rbp
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 j; // r14
  unsigned int *i; // [rsp+0h] [rbp-88h]
  _QWORD v30[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  v6 = **(unsigned int ***)(a1[11] + 8LL * a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = *(_QWORD *)a2;
  *(_QWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 16) = 4;
  v8 = (char *)a2 + *(_QWORD *)(v7 - 24);
  LODWORD(v7) = *((_DWORD *)v8 + 6);
  LOBYTE(v7) = v7 & 0x4F;
  *((_DWORD *)v8 + 6) = v7 | 0x20;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 16) = 4;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v9 = a1[70];
  v10 = a3;
  *(_QWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 16) = 4;
  do
  {
    v11 = v10;
    v10 = *(_DWORD *)(v9 + 4LL * v10);
  }
  while ( v11 != v10 );
  std::ostream::_M_insert<unsigned long>();
  v12 = (char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL);
  v13 = *((_DWORD *)v12 + 6);
  LOBYTE(v13) = v13 & 0x4F | 0x80;
  *((_DWORD *)v12 + 6) = v13;
  std::ostream::flush(a2);
  v14 = sub_15D1F10(**(_QWORD **)(a1[11] + 8 * v3));
  if ( (unsigned __int8)sub_1673B10(a1 + 16, v14) )
  {
    v30[0] = 0;
    v30[1] = 0;
    v31[0] = 1;
    v31[1] = 0;
    if ( (unsigned __int8)sub_811B30((__int64)a1, v3, (__int64)v30) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v32, qword_1C7F2C0, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (__int64 *)v32.m128i_i64[0] != &v33 )
        operator delete((void *)v32.m128i_i64[0], v33 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      v15 = *(unsigned int **)(a1[75] + 8 * v3);
      if ( v15 )
      {
LABEL_6:
        for ( i = &v15[*(v15 - 1)]; i != v15; ++v15 )
        {
          while ( 1 )
          {
            v16 = *v15;
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v16 != -2 )
              std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v17 = a1[9];
            sub_7E4F90(&v32, (__int64)a1, v16);
            sub_1648CA0(a2, v17, v32.m128i_i64[0], 1);
            v18 = v32.m128i_i64[0];
            if ( v32.m128i_i64[0] )
            {
              v19 = v32.m128i_i64[1];
              if ( (*(_DWORD *)(v32.m128i_i64[0] + 8))-- == 1 )
                break;
            }
            if ( i == ++v15 )
              goto LABEL_14;
          }
          sub_15D7BC0(v19, v18);
        }
      }
    }
    else
    {
      v15 = *(unsigned int **)(a1[75] + 8 * v3);
      if ( v15 )
        goto LABEL_6;
    }
LABEL_14:
    v21 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v30);
    sub_182CBA0(v21, v31);
    goto LABEL_15;
  }
  if ( (unsigned __int8)sub_15D2CB0(a1[9], v6)
    && (v23 = sub_7E4F30((__int64)a1, v6), v24 = a1[78], v25 = v23 >> 1, v24)
    && (unsigned int)v25 < *(_DWORD *)(v24 - 4)
    && (v26 = *(_QWORD *)(v24 + 8 * v25)) != 0 )
  {
    for ( j = *(_QWORD *)(v26 + 16); j; j = *(_QWORD *)(j + 8) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(a2, a1[9], v6, 1);
  }
LABEL_15:
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

