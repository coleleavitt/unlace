__int64 __fastcall sub_792BA0(_QWORD *a1, std::ostream *a2, __int64 a3, _QWORD *a4)
{
  char **exception; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rbx
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int **v30; // r8
  unsigned int v31; // edi
  unsigned int **v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned int v36; // ecx
  size_t v37; // rsi
  __int64 v38; // rcx
  __int64 i; // rax
  __int64 v41; // r14
  __int64 v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  void *v47; // [rsp+0h] [rbp-C8h]
  unsigned int **v50; // [rsp+18h] [rbp-B0h]
  unsigned int v51; // [rsp+24h] [rbp-A4h]
  unsigned int **v52; // [rsp+28h] [rbp-A0h]
  __int64 v53; // [rsp+40h] [rbp-88h] BYREF
  __int64 v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h] BYREF
  __int64 v56; // [rsp+58h] [rbp-70h]
  int v57[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v58; // [rsp+70h] [rbp-58h] BYREF
  __int64 v59; // [rsp+78h] [rbp-50h]

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1648CA0(v8, a1[199], *a4, 3);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1374250(&v58, a3, *a4);
  sub_160EBE0(v8, &v58);
  std::__ostream_insert<char,std::char_traits<char>>();
  v9 = v58;
  if ( v58 )
  {
    v10 = v59;
    v11 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
  sub_11B7C70(a1[3], a2);
  v14 = sub_186B270(0x18u);
  *(_QWORD *)(v14 + 8) = a4;
  v12 = v14 + 8;
  v13 = 0;
  *(_QWORD *)v14 = 0x100000002LL;
  LODWORD(v14) = 1;
  do
  {
    v27 = *(_QWORD **)(v12 + 8LL * v13);
    if ( !v27 || *((_BYTE *)v27 + 8) )
      goto LABEL_18;
    v28 = *v27;
    *((_BYTE *)v27 + 8) = 1;
    if ( !*(_WORD *)(v28 + 4) )
    {
      v29 = 8LL * *(unsigned int *)(v28 + 24);
      v30 = (unsigned int **)(v28 + 32 + v29);
      if ( v29 )
      {
        v31 = *(_DWORD *)(v12 - 8);
        v32 = (unsigned int **)(v28 + 32);
        do
        {
          v34 = a1[215];
          if ( v34 )
          {
            v35 = **v32;
            if ( (unsigned int)v35 >= *(_DWORD *)(v34 - 4) )
              v34 = 0;
            else
              v34 = *(_QWORD *)(v34 + 8 * v35);
          }
          if ( v31 == (_DWORD)v14 )
          {
            v36 = (3 * v31 + 1) >> 1;
            v37 = 8 * v36 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v37 || v31 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v58, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v58);
              sub_233E40((__int64)&v58);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v52 = v32;
            v50 = v30;
            v14 = sub_186B300((void *)(v12 - 8), v37);
            v12 = v14 + 8;
            v30 = v50;
            v32 = v52;
            *(_DWORD *)v14 = (3 * v31 + 1) >> 1;
            v31 = (3 * v31 + 1) >> 1;
            LODWORD(v14) = *(_DWORD *)(v14 + 4);
          }
          v33 = (unsigned int)v14;
          ++v32;
          LODWORD(v14) = v14 + 1;
          *(_QWORD *)(v12 + 8 * v33) = v34;
          *(_DWORD *)(v12 - 4) = v14;
        }
        while ( v30 != v32 );
        v28 = *v27;
      }
    }
    sub_1374250(&v53, a3, v28);
    v15 = a1[18];
    v55 = 0;
    v58 = 0;
    v56 = v15;
    sub_14B7810((int)v57, v15, (int)&v58, v16, v17, v18, v47);
    sub_18572D0(&v58);
    sub_14B9BF0(v57, v53, &v55);
    sub_1374250(&v58, a3, *(_QWORD *)v27[8]);
    if ( v58 != v55 )
    {
      if ( *((_DWORD *)v27 + 7) != 0x7FFFFFFF )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v19 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v19, a1[199], *v27, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v20 = sub_160EBE0(v19, &v55);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v20, &v58);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_9:
      v21 = v58;
      if ( v58 )
      {
        v22 = v59;
        v11 = (*(_DWORD *)(v58 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v22, v21);
      }
      sub_14B63F0(v57);
      v23 = v55;
      if ( v55 )
      {
        v24 = v56;
        v11 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v24, v23);
      }
      v25 = v53;
      if ( v53 )
      {
        v26 = v54;
        v11 = (*(_DWORD *)(v53 + 8))-- == 1;
        if ( v11 )
          goto LABEL_17;
      }
      goto LABEL_18;
    }
    if ( !(unsigned __int8)sub_15D2CB0(a1[18], v53) )
      goto LABEL_9;
    v51 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)(2 * *((_DWORD *)v27 + 7)));
    if ( (v51 == 1) != (*(_QWORD *)(a1[18] + 856LL) == v55) )
    {
      v41 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v41, a1[199], *v27, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v42 = sub_160EBE0(v41, &v55);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_17F35B0(v42, v51);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v43 = v58;
    if ( v58 )
    {
      v44 = v59;
      v11 = (*(_DWORD *)(v58 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v44, v43);
    }
    sub_14B63F0(v57);
    v45 = v55;
    if ( v55 )
    {
      v46 = v56;
      v11 = (*(_DWORD *)(v55 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v46, v45);
    }
    v25 = v53;
    if ( v53 )
    {
      v26 = v54;
      v11 = (*(_DWORD *)(v53 + 8))-- == 1;
      if ( v11 )
LABEL_17:
        sub_15D7BC0(v26, v25);
    }
LABEL_18:
    v14 = *(unsigned int *)(v12 - 4);
    ++v13;
  }
  while ( v13 < (unsigned int)v14 );
  v38 = v12 + 8 * v14;
  for ( i = v12; v38 != i; i += 8 )
  {
    if ( *(_QWORD *)i )
      *(_BYTE *)(*(_QWORD *)i + 8LL) = 0;
  }
  sub_13525A0(a2, a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  return sub_186B220((void *)(v12 - 8));
}

