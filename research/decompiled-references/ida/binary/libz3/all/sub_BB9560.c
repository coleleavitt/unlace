__int64 *__fastcall sub_BB9560(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *result; // rax
  __int64 *v4; // r13
  __int64 v5; // r12
  void *v6; // r12
  void *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r12
  __int64 i; // r12
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 j; // [rsp+28h] [rbp-A0h]
  _QWORD v21[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-68h] BYREF
  void *v25; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( !*(_DWORD *)(a1 + 240) && !*(_DWORD *)(a1 + 304) )
  {
    result = *(__int64 **)(a1 + 152);
    if ( (!result || !*((_DWORD *)result - 1)) && !*(_DWORD *)(a1 + 940) )
      return result;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_DWORD *)(a1 + 240)
    && (std::__ostream_insert<char,std::char_traits<char>>(), v8 = *(unsigned int *)(a1 + 240), (_DWORD)v8) )
  {
    v9 = 4 * v8;
    v10 = 0;
    do
    {
      v11 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + v10);
      v10 += 4;
      sub_BB9090(a1, a2, (_QWORD *)(*(_QWORD *)(a1 + 256) + 48 * v11));
    }
    while ( v9 != v10 );
    v2 = *(unsigned int *)(a1 + 304);
    if ( !(_DWORD)v2 )
      goto LABEL_5;
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 304);
    if ( !(_DWORD)v2 )
      goto LABEL_5;
  }
  v12 = 4 * v2;
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 320) + 56LL * **(unsigned int **)(a1 + 336));
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_BB9280(a1, a2, v13);
  if ( v12 != 4 )
  {
    for ( i = 4; i != v12; i += 4 )
    {
      v15 = *(unsigned int *)(*(_QWORD *)(a1 + 336) + i);
      sub_BB9280(a1, a2, (_QWORD *)(*(_QWORD *)(a1 + 320) + 56 * v15));
    }
  }
LABEL_5:
  result = *(__int64 **)(a1 + 152);
  if ( result && *((_DWORD *)result - 1) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    result = (__int64 *)sub_BB0CC0((_QWORD *)(a1 + 136), a2);
    if ( !*(_DWORD *)(a1 + 940) )
      goto LABEL_8;
  }
  else if ( !*(_DWORD *)(a1 + 940) )
  {
    goto LABEL_8;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  result = (__int64 *)sub_BB0E70((_QWORD *)(a1 + 920), a2);
LABEL_8:
  v4 = *(__int64 **)(a1 + 1128);
  if ( v4 )
  {
    result = &v4[*((unsigned int *)v4 - 1)];
    for ( j = (__int64)result; (__int64 *)j != v4; result = (__int64 *)sub_182CBA0(v7, v22) )
    {
      v5 = *v4;
      v21[0] = 0xFFFFFFFFLL;
      v21[1] = 0;
      v22[0] = 1;
      v22[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v22);
      LODWORD(v22[0]) = 1;
      BYTE4(v22[0]) &= ~1u;
      v23[0] = 0xFFFFFFFFLL;
      v23[1] = 0;
      v24[0] = 1;
      v24[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v24);
      BYTE4(v24[0]) &= ~1u;
      LODWORD(v24[0]) = 1;
      sub_BB1F40(a1, v5, (__int64)v21);
      sub_BB1FE0(a1, v5, (__int64)v23);
      if ( SLODWORD(v21[0]) > 0
        || (v23[0] & 0x100000000LL) != 0
        || LODWORD(v23[0]) != -1
        || (v24[0] & 0x100000000LL) != 0
        || LODWORD(v24[0]) != 1 )
      {
        sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v5, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1850940(&v25, qword_1C7F2C0, v21);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v25 != v26 )
          operator delete(v25, v26[0] + 1LL);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1850940(&v25, qword_1C7F2C0, v23);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v25 != v26 )
          operator delete(v25, v26[0] + 1LL);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v6 = qword_1C7F2C0;
      ++v4;
      sub_182CBA0(qword_1C7F2C0, v23);
      sub_182CBA0(v6, v24);
      v7 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v21);
    }
  }
  if ( *(_DWORD *)(a1 + 368) )
  {
    result = (__int64 *)std::__ostream_insert<char,std::char_traits<char>>();
    v16 = *(unsigned int *)(a1 + 368);
    if ( (_DWORD)v16 )
    {
      v17 = 4 * v16;
      v18 = 0;
      do
      {
        v19 = *(unsigned int *)(*(_QWORD *)(a1 + 400) + v18);
        v18 += 4;
        result = (__int64 *)sub_BB8D90(a1, a2, (_QWORD *)(*(_QWORD *)(a1 + 384) + 32 * v19));
      }
      while ( v17 != v18 );
    }
  }
  return result;
}

